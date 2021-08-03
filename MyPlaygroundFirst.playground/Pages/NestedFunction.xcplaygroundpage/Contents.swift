//: [Previous](@previous)

import Foundation

var str = "Hello, playground"
//将函数定义在函数内部
func forward(_ forward: Bool) -> (Int) -> Int {
    func next(_ input:Int) -> Int {
        input + 1
    }
    func previous(_ input: Int) -> Int  {
        input - 1
    }
    return forward ? next :  previous
}
forward(true)(3)//等同于next(3)
forward(false)(3)//等同于previous(3)
//: [Next](@next)
