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
public class MainViewController : UIViewController,ProductWithInit {
    
    var addBtn = UIButton(type: .custom)
    var textField = UITextField()
    
    var name:String
    var age:Int
    
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
        doSomething(withData: true) { s in
            // do something with the result (s)
        }
    }
    
    func doSomething(withData data: Bool, completion: ((_ s: Bool) -> Void)?) {
        // do something with the data
        // when finished, call the completion closure if it is not nil
        completion?(true)
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

        // 字符串插入
        var welcome = "hello"
        welcome.insert("!", at: welcome.endIndex)//插入一个字符
        print("insertNewCharacters:\(welcome)\n");//打印输出： insertNewCharacters:hello!
        
        // 插入一个子字符串
        welcome.insert(contentsOf: " word", at: welcome.index(before: welcome.endIndex))//插入一个子字符串
        print("insertNewSubStr:\(welcome)\n")//打印输出： insertNewSubStr:hello word!

        // 字符串插值
        let addend = 6
        let sumStr = "\(addend) add 8.1 is \(Double(addend) + 8.1)"
        print(sumStr)//打印输出： 6 add 8.1 is 14.1

        // 删除最后一个字符
        welcome.remove(at: welcome.index(before: welcome.endIndex))//删除最后一个字符
        print("removeStrLastCharacters:\(welcome)\n")//打印输出： removeStrLastCharacters:hello word
                
        // 删除规定范围内的子串
        let range = welcome.index(welcome.endIndex, offsetBy: -6)..<welcome.endIndex
        welcome.removeSubrange(range)//删除规定范围内的子串
        print("removeStrRange:\(welcome)\n")//打印输出： removeStrRange:hell
//        let heightOfPersonFilter = targetString.filter{(height:String) -> Bool in
//            return height > 180
//        }
        
//        var targetStringA: [String] = [""]
//        for i in 0...targetString.count{
//            targetStringA.append(contentsOf: targetString[i])
//        }
        //block 在内部可以访问外部的变量，但是这些变量只能被读取，不能被修改。如果想要在 block 内部修改外部的变量，可以使用 inout 修饰符。
        //block 也可以使用关键字 typealias 来给它定义一个类型。
        /*
         typealias IntBlock = (Int) -> Int
         let simpleBlock: IntBlock = { aNumber in
             return aNumber * aNumber
         }
         */
        let simpleBlock: (inout Int) -> Int = { aNumber in
//            aNumber = 1
            return aNumber * aNumber
        }
        var number = 10
        let result = simpleBlock(&number)
        print(result) // 输出100
        
        var a = 10
        modifyInt(num: &a)
        print(a) // 输出11
    }
    func modifyInt(num: inout Int) {
        num += 1
    }
    // Swift中，父类的所有指定初始化器都必须被子类调用，以保证父类的所有属性都被正确初始化。
    // Initializer requirement 'init(name:age:)' can only be satisfied by a 'required' initializer in non-final class 'MainViewController'
    //  你在定义一个遵循某个协议的类的时候，你需要提供一个叫做 init(name:age:) 的构造器方法，但是你的类 MainViewController 没有提供这个构造器方法。而且这个类不是最终类，所以这个构造器方法需要是 required 的；如果协议要求提供一个或多个构造器，那么在扩展中提供的构造器都必须是 required 的
    
    required init(name: String, age: Int) {
        self.name = name
        self.age = age
        super.init(nibName: nil, bundle: nil)
    }
    // convenience 修饰构造器方法 表示是便利构造器 便利构造器是可选的 因为协议构造器本身就是必需的。
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    // 遵循协议，加上"required" 继承父类重写父类构造器加上"override"
    //    required override init(name: String, age: Int) {
    //        fatalError("init(coder:) has not been implemented")
    //    }

    public override func didReceiveMemoryWarning() {
        
    }
    // 使用 typealias 关键字将 Item 类型别名定义为 String 类型
    // 我们就可以在 Class 中使用 String 类型来实现协议中的方法 doSomething(with:)。
    typealias Item = String
    func doSomething(with item: String) {
        // 实现协议中的方法
    }
    // associatedtype: 这个关键字用于协议中，表明该协议包含一个关联类型。关联类型是一种泛型，它可以在协议被遵循时指定。
    // Slice<Self>: 这是一种类型别名，表示当前类型的子序列。例如，如果 Self 是一个数组类型，那么 Slice<Self> 就表示该数组的一个子区间。
}
// 
// TODO: 可选协议方法
// 类、结构体、枚举类型 都可以遵循协议
// 枚举可以遵循协议，但是不能遵循带有构造器的协议，因为枚举的所有实例都是在编译时就已经确定的，所以枚举没有构造器，所以也不能遵循带有构造器的协议。
// 如果我们想要像Objective-C 里那样定义可选的协议方法，就需要将协议本身和可选方法都定义为Objective-C的，也即在 protocol 定义之前以及协议方法之前加上 @optional。
// 在遵循该协议的类中实现构造器，并指定其为类的指定构造器或便利构造器，必须给用"required"修饰
// 枚举不能遵循带有构造器的协议。因为枚举的成员的构造器是默认提供的
// 如果你想让枚举遵循带有构造器的协议，可以使用结构体或者类来实现协议
// 协议是能够继承其他协议，可以在继承的协议基础上增加新的内容要求。
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
    associatedtype Item //可以使用 associatedtype 关键字来定义类的专属协议 定义了类型别名 Item
    func doSomething(with item: Item)
    func method1()
    func method2()
    func method3()
}
// 带有构造器的协议
protocol ProductWithInit {
    init (name: String, age: Int)
}
// 可以使用 extension 关键字来扩展一个已有的类型，同时遵循一个协议。例如：
extension OptionalNewProtocol {
    func method1(){
        print("可选方法");
    }
    func method2(){
        print("可选方法");
    }
}

// 扩展可以添加遵循的协议，但不能声明新的协议类型。只能在定义新类型的地方声明协议（例如在类或结构体定义中）。
// 扩展中添加的协议只能是类型本身不遵循的协议。如果类型本身已经遵循了协议，就不能再通过扩展来添加遵循该协议的行为。如果需要对类型原有的协议遵循行为进行扩展，可以使用协议扩展来实现
extension MainViewController: OptionalProtocol,OptionalNewProtocol {
    
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
// 结构体不能遵循 @objc 协议
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
            return package.price == 1111
        }
        print(testDemo)
        var res = days.wed
        res.show()
    }
}
protocol daysofaweek {
    mutating func show()
}
 
enum days: daysofaweek {
    case sun, mon, tue, wed, thurs, fri, sat ,def
    mutating func show() {
        switch self {
        case .sun:
            self = .sun
            print("Sunday")
        case .mon:
            self = .mon
            print("Monday")
        case .tue:
            self = .tue
            print("Tuesday")
        case .wed:
            self = .wed
            print("Wednesday")
        case .thurs:
            self = .thurs
            print("Wednesday")
        case .fri:
            self = .fri
            print("Firday")
        case .sat:
            self = .sat
            print("Saturday")
        default:
            print("NO Such Day")
        }
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

