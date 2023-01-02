//: [Previous](@previous)

import Foundation

var str = "Hello, playground"
var title : String = ""
///TODO: 排序内联闭包函数
// 闭包表达式是一种构建内联闭包(自包含的函数代码块)的方式，在保证不丢失它语法清晰明了的同时，闭包表达式提供了几种优化的语法简写形式
// 闭包可以捕获和存储其所在上下文中任意常量和变量的引用。被称为包含常量和变量。Swift 会为你管理在捕获过程中涉及到的所有内存操作
let names = ["Chris", "Alex", "Ewa", "Barry", "Daniella"]
print("排序前的数据是\(names)")
//因此排序闭包函数类型为 (String, String) -> Bool
func backward(_ s1: String, _ s2: String) -> Bool {
    return s1 > s2
}
var reversedNames = names.sorted(by: backward)
print("排序后的数据是\(reversedNames)")
//闭包表达式
//{ (parameters) -> return type in
//    statements
//}
// reversedNames is equal to ["Ewa", "Daniella", "Chris", "Barry", "Alex"]
reversedNames = names.sorted(by: { (s1: String, s2: String) -> Bool in
    return s1 > s2
})
print("排序后的数据是\(reversedNames)")


// 当网络请求结束后调用的闭包。发起请求后过了一段时间后这个闭包才执行，并不一定是在函数作用域内执行的
getData { (data) in
    print("闭包结果返回--\(data)--\(Thread.current)")
}
func getData(closure:@escaping (Any) -> Void) {
        print("函数开始执行--\(Thread.current)")
        DispatchQueue.global().async {
            DispatchQueue.main.asyncAfter(deadline: DispatchTime.now()+2, execute: {
                print("执行了闭包---\(Thread.current)")
            })
        }
        print("函数执行结束---\(Thread.current)")
    }
// 逃逸闭包的生命周期：
// 1、闭包作为参数传递给函数；
// 2、退出函数；
// 3、闭包被调用，闭包生命周期结束
// 即逃逸闭包的生命周期长于函数，函数退出的时候，逃逸闭包的引用仍被其他对象持有，不会在函数结束时释放。
func getData1(closure:(Any) -> Void) {
        print("函数开始执行--\(Thread.current)")
        print("执行了闭包---\(Thread.current)")
        print("函数执行结束---\(Thread.current)")
    }
// 非逃逸闭包的生命周期：
// 1、闭包作为参数传给函数；
// 2、函数中运行改闭包；
// 3、退出函数

//为什么要分逃逸闭包和非逃逸闭包
//为了管理内存，闭包会强引用它捕获的所有对象，比如你在闭包中访问了当前控制器的属性、函数，编译器会要求你在闭包中显示 self 的引用，这样闭包会持有当前对象，容易导致循环引用。
//非逃逸闭包不会产生循环引用，它会在函数作用域内释放，编译器可以保证在函数结束时闭包会释放它捕获的所有对象；使用非逃逸闭包的另一个好处是编译器可以应用更多强有力的性能优化，例如，当明确了一个闭包的生命周期的话，就可以省去一些保留（retain）和释放（release）的调用；此外非逃逸闭包它的上下文的内存可以保存在栈上而不是堆上。

//内联闭包表达式
reversedNames = names.sorted(by: { (s1: String, s2: String) -> Bool in
    return s1 > s2
})
print("闭包排序后的数据是\(reversedNames)")
//一行代码实现闭包函数
//(String, String) 和 Bool 类型并不需要作为闭包表达式定义的一部分。因为所有的类型都可以被正确推断，返回箭头（->）和围绕在参数周围的括号也可以被省略：
reversedNames = names.sorted(by: { (s1: String, s2: String) -> Bool in return s1 > s2 } )
//单表达式闭包的隐式返回
reversedNames = names.sorted(by: { s1, s2 in s1 > s2 } )

////在Swift中使用这个函数
////定义了一个带有函数参数的函数 其中 callback是一个函数指针，需要调用者自己实现
//int customCFunction(CGFloat (callback)(int x, int y)) {
//    return callback(10, 20);
//}
//let callBack:@convention(c)(Int32,Int32)->Int32 = {
//    (x, y) -> Int32 in
//        return x + y
//}
//let value = customCFunction(callBack)
//print(value) //输出30


//声明一个元素时字符串类型数组
var nameArray = ["li","yuan","long","is"]
 
//函数声明 参数是一个普通闭包类型 （该闭包没有参数有返回值String类型）
func removeName(nameIndex:()->String){
    //输出语句中，调用了自身参数即闭包，此时闭包才会被执行
    print("nameArray first name is \(nameIndex())")
}
 
//函数调用。参数传入一个定义好的闭包 该闭包的功能是删除数组中第一个元素
removeName(nameIndex: {()->String in return nameArray.remove(at: 0)})
//removeName(nameIndex: {()->String in nameArray.remove(at: 0)})
 
//尾随闭包的写法
//removeName(){()->String in nameArray.remove(at: 0)}
//removeName(){nameArray.remove(at: 0)}
//上记输出是nameArray first name is li 因为 闭包在执行前 调用的输出语句因此数组中的元素未来的删除
 
 
let digitNames:[Int:String] = [
    0: "Zero", 1: "One", 2: "Two",   3: "Three", 4: "Four",
    5: "Five", 6: "Six", 7: "Seven", 8: "Eight", 9: "Nine"
]
let results = digitNames.map { (key,value) -> String in
    return "\(value)=\(key)"
}
 
//函数声明 参数是一个自动闭包
func removeNameAuto(nameIndex: @autoclosure ()->String){
    print("auto ameArray first name is \(nameIndex())")
}
//函数调用并传入一个普通的表达式，因为是自动的闭包，会将该普通的表达式自动转化为闭包传入。
removeNameAuto(nameIndex: nameArray.remove(at: 0))
//上记输出是auto ameArray first name is yuan 因为removeName中的参数 闭包在执行时删除了一个元素故输出了 yuan
//自由闭包和逃离闭包相结合

// 逃离闭包：将闭包作为参数传入函数，但在函数返回之后调用这个闭包
// 将 @escaping 写在参数类型前面，指明该闭包允许逃离函数
// 闭包逃离的一种方式是将闭包存储在函数体外的变量中
var completionHandlers: [() -> Void] = []
func someFunctionWithEscapingClosure(completionHandler: @escaping () -> Void) {
    completionHandlers.append(completionHandler)
}
func someFunctionWithNonescapingClosure(closure: () -> Void) {
    closure()
}
class SomeClass {
    var x = 10
    func doSomething() {
        someFunctionWithEscapingClosure { self.x = 100 }
        someFunctionWithNonescapingClosure { x = 200 }
    }
}
let instance = SomeClass()
instance.doSomething()
print(instance.x)
// Prints "200"
completionHandlers.first?()
print(instance.x)
// Prints "100"

// 闭包逃离
//声明一个元素是闭包类型数组
var nameClosureArray:[()->String] = []
//定义一个函数 函数参数是 自动闭包 且 逃离闭包 的类型的闭包
func handle(spendClosure:@autoclosure @escaping ()->String){
    //将参数 添加到闭包类型的数组中
    nameClosureArray.append(spendClosure)
}
//调用函数 这样闭包数组 会添加两个元素 但是 添加进去的闭包不会被执行
//因为是自动闭包 所以此处的参数可以为普通表达形式 自动会转为闭包类型
handle(spendClosure : nameArray.remove(at: 0))
handle(spendClosure : nameArray.remove(at: 0))
//打印闭包数组中有几个元素
print("nameClosureArray have \(nameClosureArray.count) closures.")
// 打印 nameClosureArray have 2 closures.
 
//for循环执行闭包数组中的每一个闭包
for nca in nameClosureArray{
    print("nameArray first name is \(nca())")
}
// 打印nameArray first name is li
//nameArray first name is yuan

// 闭包可以从定义它的周围上下文中捕获常量和变量， 然后闭包可以引用并修改其体内的常量和变量的值，即使定义常量和变量的原始范围不再存在。
func makeIncrementer(forIncrement amount: Int) -> () -> Int {
    var runningTotal = 0
    func incrementer() -> Int {
        runningTotal += amount
        return runningTotal
    }
    return incrementer
}
// incrementBySeven和incrementByTen是常量
let incrementByTen = makeIncrementer(forIncrement: 10)
incrementByTen()
// returns a value of 10
incrementByTen()
// returns a value of 20
incrementByTen()
// returns a value of 30
let incrementBySeven = makeIncrementer(forIncrement: 7)
incrementBySeven()
// returns a value of 7
incrementByTen()
// returns a value of 40
// 闭包是引用类型
let alsoIncrementByTen = incrementByTen
alsoIncrementByTen()
// returns a value of 50

incrementByTen()
// returns a value of 60

// extension可以为类(class)、结构体(structure)和枚举(enumation)添加嵌套类型
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
func printIntegerKinds(_ numbers: [Int]) {// Int类型的数组
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

// 这两个方法很类似，主要就一个参数类型的区别。
func isIntEqual(x:Int,y:Int) -> Bool {
    return x == y
}
func isStringEqual(x:String,y:String) -> Bool {
    return x == y
}
// 我们可以利用范型合并一下：
func isObjEqual<T:Equatable>(x:T,y:T) -> Bool {
    return x == y
}
// Prints "+ + - 0 - 0 + "

//: [Next](@next)
