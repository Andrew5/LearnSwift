//: [Previous](@previous)

import Foundation

var str = "Hello, playground"

//while
var num =  5
while num > 0 {
    num  -=  1//swift 3、4   去除了自增跟自减
    print("ssssss")
}//打印了5次

//相当于do-while
repeat {
    print("ssssss\(num)")
} while num > 0 //打印了1次

//for
let nameArr = ["Anna","Alex","Brian","Jack"]
for i in 0...3{
    print("n\(nameArr[i])")
}

let range = 0...3
for i in  range{
    print("ssssss\(nameArr[i])")
}

for var k in 0...3{
    k += 5
    print(k)
}

for _ in 0...3 {
    print("for")
}

let aa = 0
let bb = 3
for cc in aa...bb {
    print("n\(nameArr[cc])")
}

for dd in aa...3 {
    print("n\(nameArr[dd])")
}

//半区间运算
for name in nameArr[0...3] {
    print("n\(name)")
}

//单侧区间:让区间朝一个方向尽可能的远
for name in nameArr[1...] {
    print("a\(name)")
}
for name in nameArr[...2] {
    print("b\(name)")
}
for name in nameArr[..<1] {
    print("c\(name)")
}

//从-∞小到指定索引
let rangerange  =  ...5
rangerange.contains(7)
rangerange.contains(4)
rangerange.contains(-3)

//  区间类型
let range1: ClosedRange<Int> = 0...3//范围
let range2: Range<Int> = 1..<3
let range3: PartialRangeThrough<Int> = ...4//单侧

//区间运算符
let stringRang1 = "cc"..."ff"//ClosedRange<String>
stringRang1.contains("cb")
stringRang1.contains("dz")
stringRang1.contains("fg")

let a: Character = "a"
let z: Character = "z"
let rangrangv = a...z
rangrangv.contains("b")

// \0到~囊括了所有可能要用到的ASCII字符
let characterRange: ClosedRange<Character> = "\0"..."~"
characterRange.contains("G")

let hours = 10
let hoursInterval = 2 //之间的间隔
//从4开始，间隔2取一次值，最大不超过(不包含)11
for tickMark in stride (from: 4, to: hours, by: hoursInterval){
    print("d\(tickMark)")
// 4 6 8
}

//switch 如果不想做任何事，加一个break即可
//默认可以不写break,并不会贯穿到后面的条件
var number = 1
switch number {
case 1:
    print("number is 1")
    break
case 2:
    print("number is 2")
    break
default:
    print("number is other")
    break
}

//fallthrough：实现贯穿到后面的条件
var numberFallthrough = 1
switch numberFallthrough {
case 1:
    print("numberFallthrough is 1")
    fallthrough
case 2:
    print("numberFallthrough is 2")
    fallthrough
default:
    print("numberFallthrough is other")
}

//如果能保证已处理所有情况，也可以不必使用default
enum Answer {case right,wrong}
let answer = Answer.right
switch answer {
case Answer.right:
    print("right")
case Answer.wrong:
    print("wrong")
}

//由于已确定answer是Answer类型，因此可以省略Answer
switch answer {
case .right:
    print("right")
case .wrong:
    print("wrong")
}

//switch也支持Character、String类型
let string = "Jack"
switch string {
//case "Jack":
//    print("Jack")
////    fallthrough//贯穿下面
//case "Rose":
//    print("Rose")
//上面等同于下面
case "Jack","Rose":
print("你的名字")
default:
    break
}

let character: Character = "a"
switch character {
case "a","A":
    print("The letter A")
default:
    print("Not the letter A")
}

//区间匹配、元组匹配

//: [Next](@next)
