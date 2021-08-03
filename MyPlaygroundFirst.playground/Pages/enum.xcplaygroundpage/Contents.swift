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

enum Trade {
    case Buy(stock: String, amount: Int)
    case Sell(stock: String, amount: Int)
}
let trade = Trade.Buy(stock: "Car", amount: 100)
if case let Trade.Buy(stock, amount) = trade {
    print("buy \(amount) of \(stock)")
}
//嵌套枚举(Nesting Enums)
enum Character {
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
let character = Character.Thief
let weapon = Character.Weapon.Bow
let helmet = Character.Helmet.Iron


struct Character1 {
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
let warrior = Character1(type: .Warrior, weapon: .Sword)


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
