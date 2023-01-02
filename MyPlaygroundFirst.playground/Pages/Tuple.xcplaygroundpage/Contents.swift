//: [Previous](@previous)

import Foundation

var str = "Hello, playground"
//元组 tuple
let error = (404,"Not Found",404)
error.0
error.1


let (statusCode, statusMessage, sameElement) = error
statusCode
statusMessage
sameElement
error.2

let (justStatusCode, _, _) = error
justStatusCode

var name = (my:"today",last:"swift")
name.0
name.my
                    //标签            //标签
let http200Status = (statusCode:200, description:"OK")
http200Status.statusCode
http200Status.description

var a = (1,15,6,"hello",true)
var b:(Int,String)=(10,"String")
print(a)


//值绑定
let point = (2,0)
switch point {
case (let x,0):
    print("on the x-axis with an x value of \(x)")
case (0,let y):
    print("on the y-axis with an y value of \(y)")
case let(x,y):
    print("somewhere else at \(x), \(y)")
}

//where
let point1 = (1,-1)
switch point1 {
     // 先赋值 条件判断
case let(x,y) where x == y:
    print("on the line x == y")
case let(x,y) where x == -y:
    print("on the line x == -y")
case let(x,y) :
    print("(\(x), \(y)) is just some arbitrary point")
}

//将所有正数加起来
var numbers = [10,20,-10,-20,30,-30]
var sum = 0
//当numbers最前面的元素10 赋值给num 并且满足num>0 执行后面的代码
//当numbers=20 赋值给num 并且满足num>0 执行后面的代码
//当numbers=-10 赋值给num 条件不满足num>0 跳出大括号，相当于continue
for num in numbers where num > 0 { //使用where来过滤num
    sum += num
}
print(sum)

//标签语句
outer: for i in 1...4 {//外层for循环
    for k in 1...4 {
        if k == 3 {
            continue outer //控制外层for循环
        }
        if i == 3 {
            break outer //控制外层for循环
        }
        print("i == \(i), k == \(k)")
    }
}
//: [Next](@next)
