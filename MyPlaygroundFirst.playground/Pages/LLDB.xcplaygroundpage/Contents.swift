//: [Previous](@previous)

import Foundation

var str = "Hello, playground"
//lldb常用指令

//单步运行 把子函数当作整体一步执行(源码级别)
//thread step-over、next、n

//单步运行 遇到子函数会进入子函数(源码级别)
//thread step-in、step、s

//单步运行 把子函数当作整体一步执行（汇编级别）
//thread step-inst-over、nexti、ni

//单步运行 遇到子函数会进入子函数(汇编级别)
//thread step-inst、stepi、si

//直接执行完当前函数的所有代码，返回到上一个函数（遇到断点会卡住）
//thread step-out、finish

//ri存储的是指令的地址 CPU 要执行的下一条指令就是存储在rip中
//: [Next](@next)
