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
}//参数个数不同

func sum(v1: Int,v2: Double) -> Double {
    Double(v1) + v2
}//参数类型不同
func sum(v1: Int,v2: Double, v3: Int = 10) -> Double {
    Double(v1) + v2 + Double(v3)
}//参数类型不同 sum(v1: 10,v2: 20)此时会调用func sum(v1: Int,v2: Double) -> Double {}
func sum(v1: Double,v2: Int) -> Double {
    v1 + Double(v2)
}//参数类型不同

func sum(_ v1: Int,_ v2: Int) -> Int {
    v1 + v2
}//参数标签不同
func sum(a: Int,b: Int) -> Int {
    a + b
}//参数标签不同
//返回值类型与函数重载无关（不构成函数重载，一个是返回Int型 一个是没有返回值 重载跟返回类型无关）
// 重载（overload）是指在同一个作用域内定义多个函数名称相同，但是形参列表不同或者返回值类型不同的函数。这意味着在编写代码时可以使用相同的函数名称，但是根据不同的参数或返回值类型来调用不同的函数。
// 重载与返回类型无关，因为重载的关键在于函数名称和参数列表，而不是返回类型。
//func sum(v1: Int,v2: Int) -> Int { v1 + v2 }
//func sum(v1: Int,v2: Int) {}
//默认参数值和函数重载一起使用产生二义性时，编译器并不会报错
//可变参数、省略参数标签、函数重载一起使用产生二义性时，编译器可能会报错

 
//: [Next](@next)
