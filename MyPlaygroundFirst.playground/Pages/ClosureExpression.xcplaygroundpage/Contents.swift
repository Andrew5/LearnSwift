//: [Previous](@previous)

import Foundation

var str = "Hello, playground"
///TODO: 排序内联闭包函数
//闭包表达式是一种构建内联闭包的方式，在保证不丢失它语法清晰明了的同时，闭包表达式提供了几种优化的语法简写形式
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
 
 
 
//函数声明 参数是一个自动闭包
func removeNameAuto(nameIndex: @autoclosure ()->String){
    print("auto ameArray first name is \(nameIndex())")
}
//函数调用并传入一个普通的表达式，因为是自动的闭包，会将该普通的表达式自动转化为闭包传入。
removeNameAuto(nameIndex: nameArray.remove(at: 0))
//上记输出是auto ameArray first name is yuan 因为removeName中的参数 闭包在执行时删除了一个元素故输出了 yuan
//自由闭包和逃离闭包相结合

 
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

//: [Next](@next)
