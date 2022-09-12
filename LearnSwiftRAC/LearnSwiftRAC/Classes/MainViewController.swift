//
//  MainViewController.swift
//  LearnSwiftRAC
//
//  Created by rilakkuma on 2022/9/3.
//

import Foundation
import UIKit
import SnapKit
import RxSwift
import RxCocoa

public class MainViewController : UIViewController {
    
    var addBtn = UIButton(type: .custom)
    var textField = UITextField()
    
    lazy var bag: DisposeBag = DisposeBag()
    
    override public func viewDidLoad() {
        view.backgroundColor = UIColor.white
        test1()
    }
    func test1() {
        addBtn.backgroundColor = UIColor.gray
        addBtn .setTitle("测绘", for: .normal)
        addBtn .setTitle("完成", for: .selected)
        //        addBtn.addTarget(self, action: #selector(buttonClick(btn:)), for: .touchUpInside)
        //        addBtn.frame = CGRect(x: 10, y: 10, width: 30, height: 30)
        addBtn.rx.tap.subscribe { event in
            print("按钮点击")
        }.disposed(by: bag)
        view.addSubview(addBtn)
        addBtn.snp.makeConstraints { (make) in
            make.left.equalTo(100)
            make.width.equalTo(50)
            make.top.equalTo(70)
            make.height.equalTo(30)
        }
        
        
        let label = UILabel()
        label.text = "点击开始编写"
        label.textColor = UIColor.red
        view.addSubview(label)
        label.snp.makeConstraints { make in
            make.left.equalTo(view).offset(10)
            make.top.equalTo(70)
            make.width.equalTo(100)
            make.height.equalTo(30)
//            make.centerY.equalToSuperview()
        }
        
        // 左视图
        let leftView = UILabel()
        leftView.frame = CGRect(x: 0, y: 0, width: 30, height: 30)
        leftView.text="持卡人"
        leftView.textColor=UIColor.black
        leftView.font=UIFont.systemFont(ofSize: 18)
        // 右视图
        let rightButton = UIButton(type: .infoDark)
        rightButton.frame = CGRect(x: 0, y: 0, width: 30, height: 30)
        
        
        textField = UITextField.init()
        //        textField.frame = CGRect(x: 10, y: 150, width: 200, height: 50)
        textField.borderStyle = .line
        textField.textColor=UIColor.green
        textField.textAlignment = .left
        // 设置左右视图
        textField.leftView=leftView
        textField.rightView=rightButton
        // 设置视图模式
        textField.rightViewMode = .always
        textField.leftViewMode = .always
        
        textField.clearButtonMode = UITextField.ViewMode.always;
        textField.placeholder = NSLocalizedString("URL", comment:"URL text field placeholder");
        textField.keyboardType = .URL
        textField.textContentType = .URL
        textField.adjustsFontSizeToFitWidth = true
        textField.minimumFontSize = 10
        
        textField.rx.text.subscribe { event in
            print("1输入变化：\(event.element!!)")
        }.disposed(by: bag)
        // 或者
        textField.rx.text.subscribe (onNext: {string in
            print("2输入变化：\(string!)")
        }).disposed(by: bag)
        
        textField.rx.text.bind(to: label.rx.text).disposed(by: bag)
        
        textField.rx.text.orEmpty
            .asDriver().map { $0.count >= 11 }
            .drive(addBtn.rx.isSelected)
            .disposed(by: bag)
        
        //        textField.addTarget(self,
        //                            action:#selector(buttonClick),
        //                            for:UIControl.Event.editingChanged)
        
        view.addSubview(textField)
        textField.snp.makeConstraints { (make) in
            make.top.equalTo(addBtn.snp_bottomMargin).offset(10)
            make.left.equalTo(view).offset(30)
            make.right.equalTo(view).offset(-30)
            make.height.equalTo(30)
        }
        //        label.addObserver(self, forKeyPath: "text", options: .new, context: nil)
        //        label.addObserver(self, forKeyPath: "frame", options: .new, context: nil)
        
        label.rx.observe(String.self,"text").subscribe { event in
            print("文本改变：\(event.element!!)")
        }.disposed(by: bag)
        //        label.rx.observe(CGRect.self, "frame").subscribe { event in
        //            print("frame改变：\(event.element!!)")
        //        }.disposed(by: bag)
        
        //        scrollView.rx.contentOffset.subscribe { point in
        //          print("滚动偏移：\(point.element!)")
        //        }.disposed(by: bag)
        // static func <->(lhs: XX, rhs: XX)
        let nums = [1,2,3,4,5]
        Observable.from(nums)
            .map { (num) -> Int in
                return num * num
            }
            .subscribe { (event) in
//                print(event.element!)
                guard let email = event.element else { return }
                print("老师ID:\(email)")
            }.disposed(by: bag)
        
        Observable.of(nums)
            .map { value in
                return Observable.just(value)
            }
            .subscribe(onNext:{
                print($0)
            })
            .disposed(by: bag)
        
        /// 通过flatMap降维，获取内部的元素值
        Observable.of(1,2,3)
            .map { value in
                return Observable.just(value * 10)
            }
            .flatMap({
                return $0
            })
            .subscribe(onNext:{
                print($0)
            })
            .disposed(by: bag)
        // 为什么这样也可以啊
        Observable.of(1,2,3)
            .flatMap { (value) -> Observable<Int> in
                return Observable.just(value * 10)
            }
            .subscribe(onNext:{
                print($0)
            })
            .disposed(by: bag)
        // flatMap可以起到一个降维的作用
        Observable.of(1,2,3)
            .map { value in
                return Observable.just(value * 10)
            }
            .flatMap({ value -> Observable<Int> in
                print("flatMap输出：\(value)")
                return value
            })
            .map({(value) -> Int in
                print("map输出：\(value)")
                return value
            })
            .subscribe(onNext:{ value in
            })
            .disposed(by: bag)
        /*
         /// 源码解析：
         /// 首先selector函数型参数返回的是一个可观察对象，因为根据Source.Element可知，
         /// 闭包函数返回的是一个可观察对象，如果此闭包函数返回的不是一个可观察对象则会报错
         /// 第二：
         /// selector闭包函数入参Self.Element，可以是普通的数据类型，也可以是可观察对象
         /// 如果是普通数据类型，那么就必须要在闭包函数中将其包装为可观察对象
         /// 如果其本身就是可观察对象，那么可以直接返回，不需要再包装
         public func flatMap<Source>(_ selector: @escaping (Self.Element) throws -> Source)
         -> RxSwift.Observable<Source.Element>
         where Source : RxSwift.ObservableConvertibleType
         */
    }
    //TODO: flatMapLatest 与 flatMap 使用区别案例
    func test2 (){
        var telInput = UITextField.init()
        var codeInput = UITextField.init()
        var loginBtn = UIButton.init()
        
        let telObservable = telInput.rx.text.orEmpty
            .asDriver()
        
        let codeObservable = codeInput.rx.text.orEmpty
            .asDriver()
        
        let tapObservable = loginBtn.rx.tap
            .asDriver()
        
        let userNameAndCode = Driver<(String,String)>.combineLatest(telObservable, codeObservable) {
            return ($0,$1)
        }
        
        //        let loginResutl = loginAction
        //            .withLatestFrom(userNameAndCode)
        //            /// Driver 中的flatMapLatest闭合函数要求返回的是 ：RxCocoa.SharedSequence，也就是Driver对象
        //            /// Observable中flatMapLatest闭合函数要求非的是 ：RxSwift.Observable
        //            .flatMapLatest { (arg0) -> Driver<String> in
        //                return Observable<String>.just("网络请求结果").asDriver(onErrorJustReturn: "网络异常")
        //            }
        
    }
    
    //    @objc func alertTextFieldDidChange(_ textField: UITextField) {
    //        guard
    //            let alertController = presentedViewController as? UIAlertController,
    //            let urlFieldText = alertController.textFields?.first?.text,
    //            let insertAction = alertController.actions.first
    //
    //        else {
    //            return
    //        }
    //
    //        insertAction.isEnabled = !urlFieldText.isEmpty
    //    }
    //    public override func observeValue(forKeyPath keyPath: String?, of object: Any?, change: [NSKeyValueChangeKey : Any]?, context: UnsafeMutableRawPointer?) {
    //       print((change?[.newKey])!)
    //        print("按钮点击")
    //    }
    
    
    func buttonClick() {
        print("按钮点击")
    }
    public override func didReceiveMemoryWarning() {
        
    }
}

//extension  MainViewController: UITextFieldDelegate {
//    private func textFieldShouldBeginEditing(_ textField: UITextField) -> Bool {
//        print("将要开始编辑")
//        return true
//    }
//
//    private func textFieldDidBeginEditing(_ textField: UITextField) {
//        print("已经开始编辑")
//    }
//
//    private func textFieldShouldEndEditing(_ textField: UITextField) -> Bool {
//        print("将要结束编辑")
//        return true
//    }
//
//    private func textFieldDidEndEditing(_ textField: UITextField) {
//        print("已经结束编辑")
//    }
//
//    private func textField(_ textField: UITextField, shouldChangeCharactersIn range: NSRange, replacementString string: String) -> Bool {
//        print("文本输入内容将要发生变化（每次输入都会调用）\(textField.text!)")
//        return true
//    }
//    private func textFieldDidChangeSelection(_ textField: UITextField) {
//        print("文字变化:\(textField.text!)")
//    }
//    private func textFieldShouldClear(_ textField: UITextField) -> Bool {
//        print("将要清除输入内容，返回值是是否要清除掉内容")
//        return true
//    }
//
//    private func textFieldShouldReturn(_ textField: UITextField) -> Bool {
//        print("将要按下Return按钮，返回值是是否结束输入（是否失去焦点）")
//        return true
//    }
//}
