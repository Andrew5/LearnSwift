//: [Previous](@previous)

import Foundation

var str = "Hello, playground"
//函数重载
//1、函数名相同
//2、参数个数不同 || 参数类型不同 || 参数标签不同
func sum(v1: Int,v2: Int) -> Int {
    v1 + v2
}
func sum(v1: Int,v2: Int,v3: Int) -> Int {
    v1 + v2 + v3
}

func sum(v1: Int,v2: Double) -> Double {
    Double(v1) + v2
}
func sum(v1: Double,v2: Int) -> Double {
    v1 + Double(v2)
}

func sum(_ v1: Int,_ v2: Int) -> Int {
    v1 + v2
}
func sum(a: Int,b: Int) -> Int {
    a + b
}
//返回值类型与函数重载无关
//默认参数值和函数重载一起使用产生二义性时，编译器并不会报错
//可变参数、省略参数标签、函数重载一起使用产生二义性时，编译器可能会报错
//: [Next](@next)
