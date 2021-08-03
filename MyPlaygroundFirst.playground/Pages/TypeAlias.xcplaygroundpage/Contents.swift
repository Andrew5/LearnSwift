//: [Previous](@previous)

import Foundation

var str = "Hello, playground"
//给类型起别名
typealias Byte = Int8//1位字节
typealias Short = Int16//2字节
typealias Long = Int64//8字节
//给元组起别名
typealias Date = /*元组类型*/(year: Int, month: Int, day: Int)
func test(_ date: Date) {
    print(date.0)
    print(date.year)
}
test((2011,9,10))
//IntFn代表右边的类型
typealias IntFn = (Int, Int) -> Int
//difference符合IntFn类型
func difference(v1: Int, v2: Int) -> Int {
    v1 - v2
}
let fn: IntFn = difference
fn(20,10)//fn传值来存储difference
//difference符合IntFn函数类型
func setFn(_ fn:IntFn) {}
setFn(difference)

func getFn() -> IntFn { difference }
//Void就是空元组
public typealias Void = ()
func voidFunc() -> Void {
    
}
//: [Next](@next)
