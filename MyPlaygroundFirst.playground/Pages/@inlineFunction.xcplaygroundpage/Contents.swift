//: [Previous](@previous)

import Foundation

var str = "Hello, playground"
//永远不会被内联
@inline(never) func test1() {
    print("test1")
}
//开启编译器优化 会被内联(递归调用函数、动态派发的函数除外)
@inline(__always) func test2() {
    print("test2")
}
//: [Next](@next)
