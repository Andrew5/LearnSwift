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
// open:可以在任何地方访问、继承和重写，访问权限最高
// public:可以在任何地方被访问，在其他module中不能被继承和重写
// internal:默认访问级别，在整个模块内都可以被访问，内部的,默认的权限范围，即不写的时候默认是internal修饰的，在同一module可以访问，
// fileprivate:其修饰的属性可以在同一个文件被访问、继承和重写，同一个文件指同一个swift文件，一个文件中可以有多个类，一个.swift文件下
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
    // 逃逸闭包 当一个函数将闭包作为参数传递给函数时
    // 当一个闭包 “逃逸” 出函数时，这意味着这个闭包在函数返回之后仍然可以被执行。这种情况通常发生在将闭包作为函数的返回值时，或者将闭包存储在变量中，这样在函数执行完毕后就可以继续访问。
    // 为了表示一个闭包是逃逸的，我们在定义闭包时需要在参数列表前面加上 @escaping 关键字。
    func nmlgb(task: @escaping () -> Void) {
        DispatchQueue.main.async {
            task()
            /*
             逃逸闭包常常用在异步函数中，因为在异步函数中闭包可能在函数执行完毕之后才被执行。因为闭包可能在函数执行完毕后才被执行，所以必须将闭包标记为逃逸，否则编译器会报错。
             在 Swift 中，默认情况下，闭包是非逃逸的。这意味着在函数执行完毕之后就不能再访问闭包。这种限制有助于提高程序的效率，因为编译器可以在函数执行完毕后立即释放闭包所占用的内存。
             在需要将闭包作为函数的返回值或者将闭包存储在变
             */
        }
    }
    func buttonClick() {
        print("按钮点击")
        
        // 面的代码将导致编译器错误，因为Swift现在可以看到，当我们调用doSomething（using :)时，传递给该函数的闭包将转义其范围。这意味着我们需要将其标记为故意的，因此doSomething（using :)的调用者将知道他们正在处理一个闭包，该闭包将超过传递给它的函数的范围，这意味着他们需要采取措施预防循环引用或内存泄露。除了向调用者告知转义闭包doSomething（using :)之外，它还告诉Swift编译器我们知道闭包保留了传递给它的作用域，
//        var x = 10
//        doSomething(using: { x = 100 })
     // doSomething(using:{这里是自定义内容})
        doSomething {
            print("按钮点击")
        }
    }
    // 非转义闭包
    // 传递给doSomething（using :)的闭包在doSomething（using :)函数中立即执行
    // using 是closure的别名
    // 匿名函数 类型为  () -> Void，closure是形参, ()->void 是参数类型
    // doSomething(using:{这里是自定义内容})，通过尾随闭包特性可以简写成 dosomething{这里是自定义内容}
    func doSomething(using closure:()->Void) {
        closure()
//        DispatchQueue.main.async {
//            closure()
//        }
    }
    // 富文本
    func test3(contentString: String = "测绘｜测试文字数量 #标签测试 #未知 #数量不知道") {
//        let contentString: String = "测绘｜测试文字数量 #标签测试 #未知 #数量不知道"
        
        var contentLabel = UILabel()
        contentLabel.frame = CGRect(x: 20, y: 100, width: UIScreen.main.bounds.size.width-40, height: 60)
        contentLabel.numberOfLines = 2
        self.view .addSubview(contentLabel)
        
//        let attrStrMain = NSMutableAttributedString.init(string: contentString)
//        attrStrMain.addAttribute(NSAttributedStringKey.foregroundColor, value:UIColor.orange, range:NSRange.init(location:0, length: 8))
//        attrStrMain.addAttribute(NSAttributedStringKey.foregroundColor, value:UIColor.red, range:NSRange.init(location:9, length: 8))
//        contentLabel.attributedText = attrStr
        
        // 不知道还有几个标签
        // for 循环#数组 设置富文本 拼接富文本
        var targetString: [String] = contentString.components(separatedBy: "#")
        print("-------\(targetString)")//["测绘｜测试文字数量 ", "标签测试 ", "未知 ", "数量不知道"]
        
        let heightOfPersonFilter = targetString.filter{(height:String) -> Bool in
            print("-height------\(height)")
            return height != targetString[0]
        }
        print("筛选-------\(heightOfPersonFilter) \(targetString[0])")
        let attributedStrM : NSMutableAttributedString = NSMutableAttributedString()
        
        var stringNew = heightOfPersonFilter.joined(separator: "#")
        stringNew = "#" + stringNew
        print("新字符串-------\(stringNew)")
        
        let shuaibi2: NSAttributedString = NSAttributedString(string: targetString[0], attributes: [NSAttributedString.Key.foregroundColor : UIColor.orange, NSAttributedString.Key.font : UIFont.systemFont(ofSize: 20)])
        attributedStrM.append(shuaibi2)

        let shuaibi1: NSAttributedString = NSAttributedString(string: stringNew, attributes: [NSAttributedString.Key.foregroundColor : UIColor.lightGray, NSAttributedString.Key.font : UIFont.systemFont(ofSize: 18)])
        attributedStrM.append(shuaibi1)
        
        contentLabel.attributedText = attributedStrM
       
      
        
        
        var arrayNew = [String]()
        for obj in 0..<targetString.count {
            if obj > 0 {
                arrayNew.append(targetString[obj])
            }
        }
        print("新数组-------\(arrayNew)")

        
        
        
        // 失败

        let targetNewArr = targetString.remove(at: 0)
        print("-------\(targetNewArr)")//测绘｜测试文字数量

        let targetNewArra = targetString.removeFirst()
        print("-------\(targetNewArra)")//测绘｜测试文字数量
        var chars:[Character] = ["a","b","c","d"]
        print("-------\(chars)")//["a", "b", "c", "d"]
        let removedChar = chars.remove(at: 1)
        print("-------\(removedChar)")//b
        // 成功
        var animals = ["cats", "dogs", "chimps", "moose"]
        animals.remove(at: 2)  //["cats", "dogs", "moose"]
        print("-------\(animals)")//a
        
        let removedChar2 = chars.removeFirst()
        print("-------\(removedChar2)")//a



//        let heightOfPersonFilter = targetString.filter{(height:String) -> Bool in
//            return height > 180
//        }
        
//        var targetStringA: [String] = [""]
//        for i in 0...targetString.count{
//            targetStringA.append(contentsOf: targetString[i])
//        }
        
    }
    public override func didReceiveMemoryWarning() {
        
    }
}
// TODO: 可选协议方法
// 如果我们想要像Objective-C 里那样定义可选的协议方法，就需要将协议本身和可选方法都定义为Objective-C的，也即在 protocol 定义之前以及协议方法之前加上 @optional。
@objc protocol OptionalProtocol {
    @objc optional func optionalMethod()
}
// 对于所有的声明，它们的前缀修饰是完全分开的，必须对每一个可选方法添加前缀，对于没有前缀的方法来说，它们是默认必须实现的。
@objc protocol OprionalProtocol {
    @objc optional func optionalMethod()//可选
    func necessaryMethod()//必须实现
    @objc optional func anotherOptionalMethod()//可选
}
protocol OptionalNewProtocol {
    func method1()
    func method2()
    func method3()
}
extension OptionalNewProtocol {
    func method1(){
        print("可选方法");
    }
    func method2(){
        print("可选方法");
    }
}

extension MainViewController : OptionalProtocol,OptionalNewProtocol {
    func necessaryMethod(){
        print("必须实现方法");
    }
    func optionalMethod() {
        print("可选方法");
    }
    func method3(){
        print("必须实现方法");
    }

}

struct PackageInfo{
    var name:String
    var number:Int
    var price:Float
    var address:String
}
extension MainViewController {
    func testStore(){
        let testInfo = [
            PackageInfo(name: "测试1", number: 1, price: 1111, address: "阿西西"),
            PackageInfo(name: "测试2", number: 2, price: 882.0, address: "哈哈"),
            PackageInfo(name: "测试3", number: 3, price: 35.0, address: "7哈哈"),
            PackageInfo(name: "测试4", number: 4, price: 50.0, address: "oo")
        ]
        let testDemo = testInfo.filter{(package) -> Bool in
            return package.price == 111
        }
        print(testDemo)

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
