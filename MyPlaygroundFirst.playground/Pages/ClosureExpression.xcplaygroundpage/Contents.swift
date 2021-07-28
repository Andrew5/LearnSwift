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

//: [Next](@next)
