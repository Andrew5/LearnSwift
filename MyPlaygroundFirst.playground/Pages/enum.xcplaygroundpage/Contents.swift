//: [Previous](@previous)

import Foundation

var str = "Hello, playground"
//Swift 枚举
enum PayType: Int {
    case Default
    case Value1
    case Value2
    case Subtitle
}
//原始值
enum HouseType: String {
    case Baratheon = "Ours is the Fury"
    case Greyjoy = "We Do Not Sow"
    case Martell = "Unbowed, Unbent, Unbroken"
    case Stark = "Winter    is Coming"
    case Tully = "Family, Duty, Honor"
    case Tyrell = "Growing Strong"
}
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
//递归枚举(Recursive Enumeration)
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
    case Mercury = 1, Venus, Earth, Mars, Jupiter, Saturn, Uranus, Neptune
}
// North = "North", ... West = "West"
// 译者注: 这个是swift2.0新增语法
enum CompassPoint: String {
    case North, South, East, West
}

print("数字枚举\(paytype)","字符串枚举\(housetype)","快速枚举\(Planet.Venus)","快速枚举\(CompassPoint.South)")

//: [Next](@next)
