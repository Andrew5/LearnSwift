//: [Previous](@previous)

import Foundation
import UIKit
import XCPlayground

var str = "Hello, playground"
//生成语法树：swiftc -dump-ast main.swift
//brace_stmt
//生成最简洁的SIL代码：swiftc -emit-sit main.swift
//生成LLVM IR代码：swiftc -emitir-ir main.swift -o main.ll
//生成汇编代码: swiftc -emit-assembly main.swift -o main.s
//AT&T汇编->iOS模拟器
//ARM汇编->iOS真机
//swift code->swift AST -> Raw Swift IL -> Assembly ->llvm IR ->Canonical swift IL-> LLVM compiler
//https://www.swift.org/swift-compiler/#compiler-architecture
//swiftc -emit-sil 'main'.swift | xcrun swift-demangle > 'main'.sil  && open 'main'.sil
///常见汇编
//项目           AT&T                                                   Inter                                             说明
//寄存器命名     %rax                                                   rax
//操作数顺序     movq %rax %rdx                                         mov rdx,rax                                 将rax的值复制给rax
//常数、立即数   movq $3 %rax   movq $0x10 %rax                          mov rax,3    mov rax,0x10                   将3赋值给rax,将ox10赋值给rax
//内存赋值       movq $0xa 0x1ff7(%rip)                                 mov qword ptr [rip+0x1ff7],0xa              将oxa赋值给地址为rip+0x1ff7的内存空间
//取内存赋值    leaq -0x18(%rbp) %rax                                   lea rax,[rbp-0x18]                          将rbp-0x18这个地址赋值给rax
//jmp指令       jmp *%rdx   jmp 0x4001002   jmp *(%rax)                jmp rdx   jmp 0x4001002    jmp[rax]         call和jmp写法类似
//操作数长度    movl %eax %edx   movb $0x10 %al  leaw 0x10(%dx) %ax     mov edx,eax  mov al,0x10   lea axx,[dx + 0x10]  说明:  b=byte(8-bit) s=short(16-bit integer or 32-bit floating point)  w=word(16-bit)  l=long(32-bit integer or 64-bit floating point)   q=quad(64-bit)   t=ten bytes(80-biit floating point)

/*
 快速运行     command + shift + enter
 运行截止     shift + enter
 左侧工作区间  command + 0
 */
protocol GYLoadNibProtocl {
    
}
protocol TestProtocol {
    func getSelf() -> Self
}
//as : 将派生类转换为基类 从子类到父类的转换，这样是可行的 :1 as Float
//as!: 强制转换
//as?: 转换可以让某一对象值为空
//如果只重写 get 方法,默认为 readOnly
class TestSubClass: TestProtocol {
    func getSelf() -> Self {
        return TestSubClass() as! Self
    }
    
    var name = "测试"
    class func getInstance() -> Self {
        return TestSubClass() as! Self
    }
    func getInstance2() -> Self {
        return TestSubClass() as! Self
    }
}
// 可以使用下划线 _ 忽略某个值
extension GYLoadNibProtocl where Self : UIView {
    static func loadFromNib(_ nibname: String? = nil) -> Self {
        let loadName = nibname == nil ? "\(self)" : nibname!
          return Bundle.main.loadNibNamed(loadName, owner: nil, options: nil)?.first as! Self
    }
}
extension Int {
    var toDouble: Double {
        Double(self)
    }
    //不能增加储存属性 因为新增一个储存属性会完全影响到建立这个类型本身 可能原本很多启动方式就不能用了 而且这个类的大小会因此改变
//    var double: Double = Double(self)
    //但是 如果是这个类型的属性 也就是它的静态属性就没有这个限制
    static let one = 1
    //新增方法
    func square() -> Int {self * self}
    //新增静态方法           //回传给自己
    static func random() -> Self {
        //随机最大到最小的范围
        random(in: Int.min...Int.max)
    }
    //新增启动方法
    init(_ bool: Bool) {
        self = bool ? 34 : 23
    }
}
let number = 100
print(number.toDouble)
Int.one
number.square()
print(Int.random())
Int(true)
Int(false)

// Swift中protocol的功能比OC中强大很多，不仅能在class中实现，同时也适用于struct、enum。
// 使用 mutating 关键字修饰方法是为了能在该方法中修改 struct 或是 enum 的变量，在设计接口的时候，也要考虑到使用者程序的扩展性。所以要多考虑使用mutating来修饰方法。
protocol h{
    mutating func plus(_ num:Int)
}
extension Int:h{
    mutating func plus(_ num:Int){
        self += num
    }
}
protocol ExampleProtocol {
    var simpleDescription: String { get }
    mutating func adjust()
}
// 注意声明 SimpleStructure 时候 mutating 关键字用来标记一个会修改结构体的方法。SimpleClass 的声明不需要标记任何方法，因为类中的方法通常可以修改类属性（类的性质）
struct SimpleStruct: ExampleProtocol {
    var simpleDescription: String = "A simple structure"
    mutating func adjust() {
        simpleDescription += "(adjusted)"
    }
}
// 扩展可以向现有类型添加计算实例属性和计算类型属性， 注意⚠️：扩展可以添加新的计算属性，但它们不能添加存储属性，或向现有属性添加属性观察者
extension Double {
    var km: Double { return self * 1_000.0 }
    var  m: Double { return self }
    var cm: Double { return self / 100.0 }
    var mm: Double { return self / 1_000.0 }
    var ft: Double { return self / 3.28084 }
}
let oneInch = 25.4.mm
print("One inch is \(oneInch) meters")
// Prints "One inch is 0.0254 meters"
let threeFeet = 3.ft
print("Three feet is \(threeFeet) meters")
// Prints "Three feet is 0.914399970739201 meters"
let aMarathon = 42.km + 195.m
print("A marathon is \(aMarathon) meters long")
// Prints "A marathon is 42195.0 meters long"

// 向已存在类型添加新的实例方法和类型方法
extension Int {
    func repetitions(task: () -> Void) {
        for _ in 0..<self {
//            task()
            print("task")
        }
    }
}
2.repetitions {
    print("Hello!")
}
// 添加可变的实例方法 通过扩展增加的实例方法可以修改实例本身。如果结构体和枚举的方法要修改self或其属性，则需要使用mutating关键字标明
extension Int {
    // 只有mutating修饰的方法才能更改实例属性和实例本身
    mutating func sum(v1: Int,_ v2: Int) -> Int {
        v1 * v2
    }
    mutating func square1() {
      self = self * self
    }
    mutating func test(cal:inout Int) {
        cal = cal * cal
    }
}
var someInt = 3
someInt.sum(v1: 3, 3)
someInt.square1()
var myTestNumber = 9
someInt.test(cal: &myTestNumber)

// 扩展可以向已存在的类型添加下标 添加附属脚本
// 可以定义在class, struct, enum中，可以认为是访问对象，集合或序列的快捷方式，不需要在调用实例的特定的赋值方法和访问方法
// 用附属脚本访问一个Array实例中的元素可以写为someArray[index]，访问Dictionary实例中的元素可以写为someDictionary[key]

extension Int {
    subscript(digitIndex: Int) -> Int {
        var decimalBase = 1
        for _ in 0..<digitIndex {
            decimalBase *= 10
        }
        return (self / decimalBase) % 10
    }
}
746381295[0]
// returns 5
746381295[1]
// returns 9
746381295[2]
// returns 2
746381295[8]
// returns 7
// 如果一个Int数字没有足够多的位数，那么它会在最左边添加0来补全，然后返回0给调用方，

// 嵌套类型 扩展可以向已存在的类，结构体和枚举添加新的嵌套类型
extension Int {
    enum Kind {
        case negative, zero, positive
    }
    var kind: Kind {
        switch self {
        case 0:
            return .zero
        case let x where x > 0:
            return .positive
        default:
            return .negative
        }
    }
}
func printIntegerKinds(_ numbers: [Int]) {
    for number in numbers {
        switch number.kind {
        case .negative:
            print("- ", terminator: "")
        case .zero:
            print("0 ", terminator: "")
        case .positive:
            print("+ ", terminator: "")
        }
    }
    print("")
}
printIntegerKinds([3, 19, -27, 0, -6, 0, 7])
// Prints "+ + - 0 - 0 + "


class SimpleClass: ExampleProtocol {
    var simpleDescription: String = "A very simple class"
    var anotherProperty: Int = 110
    // 在 class 中实现带有mutating方法的接口时，不用mutating进行修饰。因为对于class来说，类的成员变量和方法都是透明的，所以不必使用 mutating 来进行修饰
    func adjust() {
        simpleDescription += " Now 100% adjusted"
    }
}
enum SimpleEnum: ExampleProtocol {
    case First, Second, Third
    var simpleDescription: String {
        get {
            switch self {
            case .First:
                return "first"
            case .Second:
                return "second"
            case .Third:
                return "third"
            }
        }

        set {
            simpleDescription = newValue
        }
    }
    
    mutating func adjust() {

    }
}
// 打印结果
var a = SimpleClass()
a.adjust()
let aDescription = a.simpleDescription
// 打印结果
var abc = 10
abc.plus(3)
print("计算和：\(abc)")


for i in 0...100 {
    sin(Double(i))
}

extension Locale {
    static let tch: Locale = .init(identifier: "zh-hant-tw")
    static let japan: Locale = .init(identifier: "ja_JP")
    static let english: Locale = .init(identifier: "en_US")
}
extension NumberFormatter {
    static let decimalFormatter: NumberFormatter = {
        let formatter = NumberFormatter()
        formatter.numberStyle = .decimal
        return formatter
    }()
    static let currencyFormatter: NumberFormatter = {
        let formatter = NumberFormatter()
        formatter.numberStyle = .currency
        formatter.locale = .tch
        return formatter
    }()
}
extension Numeric {
    func formatter() -> String {
        let formatter = NumberFormatter()
        formatter.numberStyle = .decimal//千位数的时候加逗号分隔
        return formatter.string(for: self)!
    }
    func formatted(by style: NumberFormatter.Style = .decimal,locale: Locale = .tch) -> String {
        let formatter = NumberFormatter()
        formatter.numberStyle = style//千位数的时候加逗号分隔
//        formatter.locale = .init(identifier: "zh-hant-bj")//语言
        formatter.locale = locale
        return formatter.string(for: self)!
    }
    //"NumberFormatter = .decimalFormatter"预设值
    func formatteds(by formatter: NumberFormatter = .decimalFormatter) -> String {
        formatter.string(for: self)!
    }
}
let numberint = 100000
print(numberint.formatter())
print(2000000.formatter())
print("当前语言\(Decimal(40000000000.888).formatted(by: .currency))")
print("spellOut语言\(Decimal(1239999.33333).formatted(by: .spellOut))")
print("日本语言\(123456.formatted(by: .currency,locale: .japan))")
print("日本语言\(Decimal(56789).formatted(by: .spellOut,locale: .japan))")
print("英语语言\(Decimal(6789023).formatted(by: .spellOut,locale: .english))")
print("台湾语言\(Decimal(123456).formatteds(by: .currencyFormatter))")
print("decimal语言\(Decimal(123456).formatteds(by: .decimalFormatter))")
print("台币\(numberint.formatted(.currency(code: "TWD")))")
print("日币\(numberint.formatted(.currency(code: "JPY")))")

// 构造器  initializers
struct Size {
    var width = 0.0, height = 0.0
}
struct Point {
    var x = 0.0, y = 0.0
}
struct Rect {
    var origin = Point()
    var size = Size()
}
struct Cat {
    var name: String
    var color: String
}
extension Rect {
    init(center: Point, size: Size) {
        let originX = center.x - (size.width / 2)
        let originY = center.y - (size.height / 2)
        self.init(origin: Point(x: originX, y: originY), size: size)
    }
}
let centerRect = Rect(center: Point(x: 4.0, y: 4.0),
                      size: Size(width: 3.0, height: 3.0))
//自定的启动方式 写入到extension 就可以维持两种启动方式 因为在extension里的东西 并不会去影响本来在struct定义完成的内容
extension Cat {
    enum Color: String{ case 橘色, 黄色, 黑色, 灰色, 白色}
    init(name: String, color: Color) {
        self.name = name
        self.color = color.rawValue
    }
}

// protocol
extension Cat: Equatable {
    
}

extension Cat: CustomStringConvertible {
    var description: String {
        "\(color)的\(name)"
    }
}
let cat = Cat(name: "蛋蛋", color: "橘色")
let cat2 = Cat(name: "皇阿玛", color: .黄色)
print("输出\(cat)")
print("输出\(cat2)")


extension String {
    subscript(_ offset: Int) -> Character? {
        guard offset >= 0, let index = self.index(startIndex, offsetBy: offset, limitedBy: index(before:endIndex)) else {return nil}
        return self[index]
    }
}

let string = "可爱的小猫咪"
for index in -1...string.count {
    print(string[index] ?? "没有")
}


extension Collection {
    var isNotEmpty: Bool {
        !isEmpty
    }
}
[1,2,3,4,5].isNotEmpty
"".isNotEmpty

extension Collection  where Element == Int {//要求更为严格
    func sum() -> Self.Element {
        return reduce(0, +)
    }
}

extension Collection  where Element : Numeric {
    func sum() -> Self.Element {
        reduce(.zero, +)
    }
}
[1,2,3,4,5].sum()
print("------------")
[1,2,3,4,5.222].sum()
//只有实例的储存属性不能新增

class MyViewController : UIViewController {
    static let classLet: Int = 0

    var c:Int{
    get{
        // 这里 不论是 c 还是 self.c 都会造成 crash  原因是方法的死循环
        // 而且 不能像 OC 中 写上 _c
        return 1
        //   return self.c  不论是 c 还是 self.c 都会造成 crash  原因是方法的死循环
        //  return c 不论是 c 还是 self.c 都会造成 crash  原因是方法的死循环
    }
    set{
        // 我们测试 写上 self.c = newValue 和 不写 都会造成 cras
        // 而且 不能像 OC 中 写上 _c
        //  c  = newValue  造成 crash  原因是方法的死循环
        self.c = newValue
        print("Recived new value", newValue, " and stored into 'A' ")
    }
    }

    // 2.0  由于上面提到的原因  重写的时候 我们使用 额外的一个变量来重写
    // 使用了 外部的一个变量来重写了这个 方法
    var _tittle:String?
    var tittle:String?{
        set{
            _tittle=newValue
        }
        get{
            return _tittle
        }

    }
   
    override func viewDidLoad() {
        super.viewDidLoad()
        view.backgroundColor = .cyan
        let view = UIView()

        let label = UILabel()
        label.frame = CGRect(x: 10, y: 10, width: 200, height: 20)
        label.text = "Hello World!"
        label.textColor = .black
        view.addSubview(label)
        self.view = view
        
        let window:UIView = UIView.init(frame: .init(x: 0, y: 30, width:UIScreen.main.bounds.size.width , height: 300));
        window.backgroundColor = UIColor.blue;

        let btn:UIButton = UIButton.init(frame: .init(x: 10, y: 10, width: 60, height: 30));
        btn.backgroundColor = UIColor.orange;
        btn.setTitleColor(UIColor.white, for: .normal);
        btn.setTitle("测试1", for: .normal);
//        btn.addTarget(self, action: #selector(tagAddAlert), for: .touchUpInside)
        btn.addTarget(self, action: #selector(click(aButton:)), for: .touchUpInside)
        window.addSubview(btn);
        

        let testBtn:UIButton = UIButton.init(frame: .init(x: 10, y: btn.frame.maxY + 10, width: 60, height: 30));
        testBtn.backgroundColor = UIColor.orange;
        testBtn.setTitleColor(UIColor.white, for: .normal);
        testBtn.setTitle("测试2", for: .normal);
        window.addSubview(testBtn);
        

        view.addSubview(window)
        print("屏幕的宽是\(UIScreen.main.bounds.size.width)")
        print("屏幕的高是\(UIScreen.main.bounds.size.height)")

        print("实时调试，用起来好爽~~");
        
        let a: Double = 34.00
        let b: Double = 23.0

        arithmeticMean(aNumbers: a,b)
//        arithmeticMean(numbers: a,b)
        
        sum(num: 10,20)
        sum(num: 10,20,30)
        
        let letTwo = sumsum(numberOne: 10, numberTwo: 20);
        print("计算结果\(letTwo)")
        
        var myTestNumber = 6
        incrementStepTwo(myNumber: &myTestNumber)  //myTestNumber = 8
        var firstNumber = 1
        var secondNumber = 2
        
        print("结果 \(swapTwoInts(firstNumber: &firstNumber, secondNumber: &secondNumber))")
        //Self 访问
        //Self用于类（Class）的返回值
        let instaceLet = Self.classLet
        var instaceVar = Self.classLet
//        lazy var instanceVar2 = Self.classLet
        print("类型\(instaceLet)和\(instaceVar)")

        
        let sumOfNumber:Int = incrementMutableAdd(aIntArray: 1,2,3,4)
        print("合集计算\(sumOfNumber)")
                
        print("形参拼接1 \(sayLaungh(youName: "罗密欧",loveName: "朱丽叶"))")
        print("形参拼接2 \(sayLaungh(youName: "梁山伯"))")
        print("形参拼接3")
        readMethodName()


//形参数
/*
 1、需要对参数只进行修改,需要用到inout 关键字,调用函数时加&
 
 先暂且这么说着，在C语言的函数中可以给函数传入参数，或者传入实参的内存地址就是所谓的传引用。如果传入的是引用的话，在函数中对值进行修改的话，那么出了函数，这个被修改的值是可以被保留的。在Swift中也是可以的，不过你需要使用inout关键字修饰形参，并且在使用该函数时，用&来修饰。这一点和C语言中类似，&就是取地址符。下方是inout使用的一个小实例。

  func incrementStepTwo (inout myNumber:Int) {
      myNumber += 2
  }
  var myTestNumber = 6
  incrementStepTow(&myTestNumber)  //myTestNumber = 8

 
 myTestNumber变量经过incrementStepTwo()函数后，其值就会增加2。当然前提是myTestNumber是变量，如果myTestNumber是常量的话，那么对不起，调用该函数就会报错，下面是把var改成let后IDE给的错误提示。错误原因很显然是你动了一个不该动的值，也就是常量不可再次被修改的。
 
 
 (4) 不定参数函数

 不定参数函数也就是形参的个数是不定的，但是形参的类型必须是相同的。不定形参在使用时怎么取呢？不定个数的形参实际上是一个数组，我们可以通过for循环的形式来遍历出每个形参的值，然后使用就可以了。下方incrementMultableAdd()函数的形参的个数是不定的，其功能是求多个整数的和。在函数中我们只需遍历每个参数，然后把每个参数进行相加，最后返回所求的和即可。函数比较简单，再此就不在啰嗦了。
 
 */
    }
    override func touchesBegan(_ touches: Set<UITouch>, with event: UIEvent?) {
        let touch = ((touches as NSSet).anyObject() as AnyObject)
        
        let point = touch.location(in: self.view)
        if point.y >= self.view.frame.minY{
            
        }else{
            self.dismiss(animated: false, completion: nil)
        }
        print("点击坐标点-\(point.y)")
    }
    
//    extension MyViewController {
//        override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
//            return 30
//        }
//
//        override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
//            let cell = UITableViewCell()
//            cell.textLabel?.text = String(indexPath.row)
//            return cell
//        }
//    }
//
//    extension MyViewController {
//        override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
//            print("Select: \(indexPath.row)")
//        }
//    }

    
    
    @objc func tagAddAlert(){
        sumXXXX(12, 1)
    }
    // func 函数名 （形参列表） -> 返回值类型 { 函数体}
    @objc func click(aButton button: UIButton) -> Bool {
        print("点击的问题\(button.isSelected)")
        return button.isSelected
    }
    //在传入的参数类型后边加上...即声明了该参数是可变长度的，而我们在取参的时候只需要将其当成数组去处理，这似乎比oc省心了不少。
    func arithmeticMean(aNumbers numbers: Double...) -> Double {
//    func arithmeticMean(numbers: Double...) -> Double {
        var total: Double = 0
        for number in numbers {
            print("Double参数 \(number)")
            total += number
        }
        return total / Double(numbers.count)
    }

    
    //注意参数里的”…”， 这样调用函数的时候，可以传入任意多个参数
    func sum(num:Int...)->Int{
        var result = 0
        for n in num{
            print("Int参数 \(n)")
            result += n
        }
        return result
    }
    
    // 常常这么写
    func sumXXXX (_ number1:Int,_ number2:Int) -> Int{
        return number1 + number2;
    }
    
    
    //形参命名
   func sumsum(numberOne number1:Int, numberTwo number2:Int) -> Int{
       return number1 + number2;
   }
   
    
    func incrementStepTwo ( myNumber:inout Int) {
        myNumber += 2
        print("inout修饰后的值 \(myNumber)")
    }
    
    func incrementMutableAdd(aIntArray numbers: Int...) -> Int {
        var sumOfNumber: Int = 0
        for number in numbers {
            sumOfNumber += number
        }
        return sumOfNumber
    }

    func swapTwoInts(firstNumber a:inout Int,secondNumber b: inout Int) -> Int{
        let temporaryA = a
        a = b
        b = temporaryA
        print("swapTwoInts计算后的值 \(b)")
        return b
    }
//    func setCornerWithType(
//        _ type: UIRectCorner,
//        radius: CGFloat,
//        shadow: Bool
//    ) {
//        let _titleShadowLayer = CAShapeLayer()
//        _titleShadowLayer.backgroundColor = PPColorGroup().black.cgColor
//        _titleShadowLayer.fillColor = PPColorGroup().white.cgColor
//        _titleShadowLayer.shadowColor = UIColor(red: 222 / 255.0, green: 228 / 255.0, blue: 230 / 255.0, alpha: 1.0).cgColor
//        _titleShadowLayer.shadowOffset = CGSize(width: 2, height: 2)
//        _titleShadowLayer.shadowOpacity = 1
//        _titleShadowLayer.shadowRadius = 4
//        let path = UIBezierPath(roundedRect: bounds, byRoundingCorners: type, cornerRadii: CGSize(width: radius, height: radius))
//        _titleShadowLayer.path = path.cgPath
//        layer.addSublayer(_titleShadowLayer)
//    }
    
    func findFile(){
        // 从文件中加载数据
        let path = "/Users/jabraknight/Desktop/12/login.pdf"
        let data = FileManager().contents(atPath: path)
        _ = String(data: data!, encoding: .utf8)
    }
    //默认形参值
    func sayLaungh(youName: String = "山伯",loveName: String = "英台") -> String {
        return "\(youName) love \(loveName)"
    }
    //静态方法
    static func classMethod() ->Void{
        print("静态方 法本类类型\(MyViewController.Type.self)")
    }
    //类方法
    class func classMethod2() -> Void{
        print("类方法 本类类型\(MyViewController.Type.self)")
    }

    
    
    
    // App,ViewController.swift
    func readMethodName() {
        let name = SwiftMethodDispatchTable().getMethodName()
        print("read method name:", name)
    }
    
    // Framework
    public class SwiftMethodDispatchTable {
        public func getMethodName() -> String {
            let name = "SwiftMethodDispatchTable"
            print("Method name: \(name)")
            return name
        }
    }
    
    //静态派发
    final public class SwiftMethodDispatchStatic {
        public init() {}
        
        func printMethodName() -> String {
            let name = getMethodName()
            return name
        }
        
        public func getMethodName() -> String {
            let name = "SwiftMethodDispatchStatic"
            print("Method name: \(name)")
            return name
        }
    }
    
    //vtable 派发
    public class SwiftMethodDispatchTable1 {
        public init() {}
        
        func printMethodName() -> String {
            let name = getMethodName()
            return name
        }
        
        public func getMethodName() -> String {
            let name = "SwiftMethodDispatchTable"
            print("Method name: \(name)")
            return name
        }
    }
    
    //消息派发
    public class SwiftMethodDispatchMessage2 {
        public init() {}
        
        func printMethodName() -> String {
            let name = getMethodName()
            return name
        }

        @objc dynamic public func getMethodName() -> String {
            let name = "SwiftMethodDispatchMessage"
            print("Method name: \(name)")
            return name
        }
    }
    
    
    
}
// Present the view controller in the Live View window
//PlaygroundPage.current.liveView = MyViewController()
//XCPlaygroundPage.currentPage.needsIndefiniteExecution = true
//当我们获取了需要的结果后，可以使用XCPlaygroundPage.currentPage.finishExecution()停止 Playground 的执行：

//: [Next](@next)

//: [上一页](@previous)

//: [下一页](@next)

