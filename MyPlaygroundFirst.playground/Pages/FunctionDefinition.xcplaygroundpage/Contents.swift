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


//注释链接：https://swift.org/documentation/api-design-guidelines/

/// 返回元组：实现多返回值【概述】
///
/// - Parameter v1:第一个整数
/// - Parameter v2:第二个整数
/// - Returns: 2个整数的和
///
/// - Note: 传入2个整数即可【批注】
/// v1,v2  : 参数标签
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
            //参数 at形参用在外面 time形参用在内部
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
func check(name: String = "nobody", age: Int, job: String = "none") {
    print("name=\(name),age=\(age),job=\(job)")
}
check(name: "Jack", age: 20, job: "Doctor")
check(name: "Rose", age: 18)
check(age: 10, job: "Docter")
check(age: 15)//age 标签
//swift拥有参数标签，因此没有此类限制，省略标签反之


//可变参数          //...可变参数 可以传很多个Int类型
//一个函数最多只能有1个可变参数
//紧跟在可变参数后面的参数不能省略参数标签
func sumMutable(_ numbers: Int...) -> Int {
    var total = 0
    for number in numbers {//numbers 数组
        total += number
    }
    return total
}
sumMutable(10, 20, 30, 40)//赋值给numbers
//: [Next](@next)
