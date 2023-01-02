//: [Previous](@previous)

import Foundation

var str = "Hello, playground"
///函数 形参默认是let 也只能是let
func pi() -> Double {
    return 3.14
}
        ///形参
func sum(v1: Int,  v2: Int) -> Int {
    return v1 + v2  //函数表达式 return 可以省略
}
pi()
sum(v1: 10, v2: 20)

///无返回值
func sayHello1() -> Void {
    print("Hello")
}
///()空元组
func sayHello2() -> () {
    print("Hello")
}
func sayHello3() {
    print("Hello")
}


//注释链接：https://swift.org/documentatior/api-design-guidelines/

/// 返回元组：实现多返回值【概述】
///
/// 将2个整数相加【更详细的描述】
///
/// - Parameter v1:第一个整数
/// - Parameter v2:第二个整数
/// - Returns: 2个整数的和
///
/// - Note: 传入2个整数即可【批注】
///             v1: 参数标签 v2: 参数标签
func calculate (v1: Int, v2: Int) -> /*定义返回值类型：元组*/(sum: Int, difference: Int,avaerage: Int) {
    let sum = v1 + v2
          //和    差      和右移一位：平均值(和/2)
    return (sum, v1 - v2, sum >> 1)
}
let result = calculate(v1: 20, v2: 10)
result.sum
result.difference
result.avaerage
///参数标签 Argument Label
        //参数 at参数标签用在外面, time形参名称用在函数体内部
func goToWork(at time:String) {//(time:String)
    print("this time is\(time)")//print("this time is\(at)")
}
goToWork(at: "08:00")//go to work at 08:00

//可以使用下划线_ 省略参数标签
func sumf(_ v1: Int, _ v2: Int) -> Int {
     v1 + v2
}
//省略标签 精简函数
sumf(10, 20)

//默认值参数值(Default Parameter Value)
func check(name: String = "nobody", age: Int = 1, job: String = "none") {
    print("name=\(name),age=\(age),job=\(job)")
}
check(name: "Jack", age: 20, job: "Doctor")
check(name: "Rose", age: 18)
check(age: 10, job: "Docter")
check(age: 15)//age 标签
check()
//swift拥有参数标签，因此没有此类限制，省略标签反之


//可变参数
//...可变参数 可以传很多个Int类型
//一个函数最多只能有1个可变参数
//紧跟在可变参数后面的参数不能(书写参数标签)省略参数标签
func sumMutable(_ numbers: Int... , string: String, _ other: String) -> Int {
    var total = 0
    for number in numbers {//numbers 数组
        total += number
    }
    return total
}
sumMutable(10, 20, 30, 40, string:"name", "Rose")//赋值给numbers
//针对输出 修改
print("1","2","3",separator: "*", terminator: "\t")
print("1","2","3")

//函数类型 //函数类型作为函数参数
//定义变量methodF  函数类型 赋值函数名类型
var methodF:(Int, Int) -> Int = sum

//public static let `defult1` = "测试"
public let `defult` = "测试"
print("静态\(defult)")

methodF(2,3)//变量调用函数sum //调用时不需要函数

func difference(v1: Int,v2: Int) -> Int {
    v1 - v2
}
//函数类型 调用的时候不用写标签
func printResult(_ mathFu: (Int,Int) -> Int, _ a: Int, _ b: Int) {
    print("Result:\(mathFu(a,b))")
}
printResult(sum, 5, 2)
printResult(difference, 5, 2)

//函数类型作为函数返回值
func next(_ input: Int) -> Int {
    input + 1
}
func previous(_ input: Int) -> Int {
    input - 1
}
//                            ->是forward函数的
//                               (Int) -> Int 返回函数类型 并且接收Int类型 并且函数返回Int类型
func forward(_ forward: Bool) -> (Int) -> Int {
    forward ? next : previous
}//高阶函数
forward(true)(3)
forward(false)(3)
//返回值是函数类型的函数，叫做高阶函数
//: [Next](@next)
