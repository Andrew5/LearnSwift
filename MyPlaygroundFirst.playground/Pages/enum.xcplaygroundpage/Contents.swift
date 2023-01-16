//: [Previous](@previous)

import Foundation

var str = "Hello, playground"
//Swift 枚举(关联值) 有时会将枚举的成员值跟其他类型的值关联储存在一起
// ⚠️如果枚举后面有类型，称之为原始值，原始值一开始就是固定死的，关联好的，原始值是不会将默认值存储到枚举变量里面去，(原始值是不会占用枚举变量内存的，不是存储到枚举变量内存里面的)
// ⚠️如果枚举通过传入具体的值进行关联，那传进去的值直接存储到枚举变量内存里面，
// ⚠️如果枚举的原始值类型是Int、String，Swift会自动分配原始值
// 关联值会放在枚举变量内存里面 原始值不会放在枚举内存变量
enum PayType: Int {
    case Default
    case Value1
    case Value2
    case Subtitle
}
//原始值 一开始就是固定死的 关联好的 不会存储到枚举变量内存里
enum HouseType: String {
    case Baratheon = "Ours is the Fury"//关联的是string类型的枚举值
    case Greyjoy = "We Do Not Sow"
    case Martell = "Unbowed, Unbent, Unbroken"
    case Stark = "Winter    is Coming"
    case Tully = "Family, Duty, Honor"
    case Tyrell = "Growing Strong"
}
// 等价于
//enum HouseType: String {
//    case Baratheon,Greyjoy,Martell,Stark,Tully,Tyrell
//}
// 枚举成员可以使用相同类型的默认值预先关联，这个默认值叫做：原始值
enum PokerSuit : Character {
    case space = "♠️"//关联的是character类型的枚举值
    case heart = "♥️"
    case diamond = "♦️"
    case club = "♣️"
}
var suit = PokerSuit.space
print(suit)
print(suit.rawValue)
print(PokerSuit.club.rawValue)//原始值

let paytype: PayType = .Default
let housetype: HouseType = .Stark
print("数字枚举\(paytype)","字符串枚举\(housetype)")
var pt = PayType.Value1
pt = PayType.Value2
pt = .Subtitle
print(pt)
//原始值
var HT = HouseType.Martell
print(HT)
print(HT.rawValue)
print(HouseType.Greyjoy.rawValue)
//(关联值)
enum Score {
    case points(year: Int)
    case point2(Int, Int)
    case grade(Character)
}
var score = Score.points(year: 96)
score = .point2(1,2)
score = .grade("A")

enum Trade {
    case Buy(stock: String, amount: Int)
    case Sell(stock: String, amount: Int)
}
let trade = Trade.Buy(stock: "Car", amount: 100)
if case let Trade.Buy(stock, amount) = trade {
    print("buy \(amount) of \(stock)")
}
//递归枚举(Recursive Enumeration) 关键字indirect
indirect enum ArithExpr {
    case number(Int)
    case sum(ArithExpr,ArithExpr)
    case difference(ArithExpr,ArithExpr)
}

enum ArithExpr1 {
    case number(Int)
    indirect case sum(ArithExpr1,ArithExpr1)
    indirect case difference(ArithExpr1,ArithExpr1)
}
let five = ArithExpr1.number(5)
let four = ArithExpr1.number(5)
let two = ArithExpr1.number(5)
let sum = ArithExpr1.sum(five,four)//5+4 ?
let difference = ArithExpr1.difference(sum,two)

func calculate(_ expr: ArithExpr1) -> Int {
    switch expr {
    case let .number(value):
        return value
    case let .sum(left,right):
        return calculate(left) +  calculate(right)
    case let .difference(left, right):
        return calculate(left) - calculate(right)
    }
}
calculate(difference)
    
//嵌套枚举(Nesting Enumeration)
enum Character1 {
  enum Weapon {
    case Bow
    case Sword
    case Lance
    case Dagger
  }
  enum Helmet {
    case Wooden
    case Iron
    case Diamond
  }
  case Thief
  case Warrior
  case Knight
}
let character = Character1.Thief
let weapon = Character1.Weapon.Bow
let helmet = Character1.Helmet.Iron


struct Character2 {
   enum CharacterType {
    case Thief
    case Warrior
    case Knight
  }
  enum Weapon {
    case Bow
    case Sword
    case Lance
    case Dagger
  }
  let type: CharacterType
  let weapon: Weapon
}
let warrior = Character2(type: .Warrior, weapon: .Sword)


struct Scharacter {
    enum CharacterType {
        case Thief
        case Warrior
        case Knight
    }
    
    enum Weapon {
        case Bow
        case Sword
        case Lance
        case Dagger
    }
    
    let type: CharacterType
    let weapon: Weapon
}

let sc = Scharacter(type: .Thief, weapon: .Bow)
print(sc.type)

// Mercury = 1, Venus = 2, ... Neptune = 8
enum Planet: Int {
    //0 1 2 3
    case Mercury = 1, Venus, Earth, Mars, Jupiter, Saturn, Uranus, Neptune
//    func rawValue() -> Int {
//        if self  ==  内存中存储的。0 return 1 
//        if self  ==  1 return 2
//    }
}
// North = "North", ... West = "West"
// 译者注: 这个是swift2.0新增语法
enum CompassPoint: String {
    case North, South, East, West
}

print("数字枚举\(paytype)","字符串枚举\(housetype)","快速枚举\(Planet.Venus)","快速枚举\(CompassPoint.South)")
// 关联值
enum Date {
    case digit(year: Int, month: Int,day: Int)
    case string(String)
}
var date = Date.digit(year: 2023, month: 01, day: 17)
date = .string("2023-09-10")
//switch date {
//case .digit(let year, let month, let day):
//    print(year,month,day)
//case let .string(value):
//    print(value)
//}

enum Password {
    case number(Int,Int,Int,Int)
    case gesture(String)
}
var pwd = Password.number(3, 5, 7, 8)
pwd = .gesture("4353")
//switch pwd {
//case .number(n1, n2, n3, n4):
//    print("number is",n1, n2, n3, n4)
//case let .gesture(str):
//    print(str)
//}

// 递归枚举
//indirect enum ArithExpr {
//    case number(Int)
//    case sum(ArithExpr, ArithExpr)
//    case difference(ArithExpr, ArithExpr)
//}
// 等效于
//enum ArithExpr {
//    case number(Int)
//    indirect case sum(ArithExpr, ArithExpr)
//    indirect case difference(ArithExpr, ArithExpr)
//}
//let five = ArithExpr.number(5)
//let four = ArithExpr.number(4)
//let two = ArithExpr.number(2)
//let sum = ArithExpr.sum(five, four)
//let difference = ArithExpr.difference(sum, two)
//func calculate(_ expr: ArithExpr) -> Int {
//    switch expr {
//    case let .number(value):
//        return value
//    case let .sum(left, right):
//        return calculate(left) + calculate(right)
//    case let .difference(left, right):
//        return calculate(left) - calculate(right)
//    }
//}
//calculate(difference)


//: [Next](@next)
