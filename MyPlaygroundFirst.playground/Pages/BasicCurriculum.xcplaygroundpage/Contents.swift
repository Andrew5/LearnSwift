//: [Previous](@previous)

import Foundation

var str = "Hello, playground"

//声明函数时，在参数前面用inout修饰，函数内部实现改变外部参数传入参数时(调用函数时)，在变量名字前面用 &符号修饰表示，表明这个变量在参数内部是可以被改变的（可将改变传递到原始数据）,inout修饰的参数是不能有默认值的，有范围的参数集合也不能被修饰；一个参数一旦被inout修饰，就不能再被var和let修饰了。
//1.监测属性,其实是给存储属性上添加的一种监测功能,willSet 监测新值,didSet 监测旧值
//2.如果函数的参数是inout 修饰的,你如果将监测的属性传入这个函数的时候,此时会将属性的值拷贝一份,在函数结束的时候,将值重新付给属性,所以函数执行完毕后,会触发监测函数

var ff = 5
func getAge(ff: inout Int, length: Int)-> Int{
    ff += length
    print("计算:\(ff)")
    return ff
}
getAge(ff: &ff, length: 22)

func 🐂🍺(name:String){
    print("Y:\(name)")
}
🐂🍺(name: "⚽️")

let 👽 = "ET"
var 🥛 = "牛奶"

//整数类型Int8、Int16、Int32、Int64、UInt8、UInt16、UInt32、UInt64
//整数最值 UInt8.max Int16.min
//浮点型 Float,32位，精度只有6位；Double,64位，精度至少15位
let doubleDecimal1 = 0xFp2
let doubleDecimal2 = 0xFp-2
let doubleDecimal3 = 0xC.3p0

let arrayTest = [1,2,"A"] as [Any]

//低类型 转高类型
//占用空间少的转占用空间高的
let int1: UInt16  =  2_000
let int2: UInt8  =  1
let int3 = int1 + UInt16(int2)

let int4 = 3
let double1 = 0.1415
let pi = Double(int4) + double1
let intPi = Int(pi)

let a = 10
let b = 11;
var c = a + b
c += 10;
c += 20
print("计算结果为\(c)")
//: [Next](@next)
