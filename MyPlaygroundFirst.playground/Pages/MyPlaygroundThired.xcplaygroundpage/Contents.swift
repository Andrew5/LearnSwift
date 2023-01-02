import Foundation
import PlaygroundSupport
import UIKit

@propertyWrapper
struct ClamppedValue {
    private var storedValue: Int = 0
    var wrappedValue: Int {
        get {
            return self.storedValue
        }
        set {
            if newValue < 0 {
                self.storedValue = 0
            } else if newValue > 255 {
                self.storedValue =  255
            } else{
                self.storedValue =  newValue
            }
        }
    }
    
    init(wrappedValue initValue: Int) {
        self.storedValue =  initValue
    }
}

struct MyColor {
    @ClamppedValue var red: Int
    @ClamppedValue var green: Int
    @ClamppedValue var blue: Int
}
let color: MyColor = MyColor(red: 50, green: 500, blue: 50)
print("color.red is \(color.red)")
print("color.red is \(color.green)")
print("color.red is \(color.blue)")
// 从文件中加载数据
let path = "/Users/jabraknight/Downloads/跳转地址.txt"
let data = FileManager().contents(atPath: path)
//let originalString = String(data: data!, encoding: .utf8)

PlaygroundPage.current.needsIndefiniteExecution = true

enum NetworkingError: Error {
    case invalidServerResponse
    case invalidCharacterSet
}

//func getJson() async throws -> String {
//        let url = URL(string:"https://jsonplaceholder.typicode.com/todos/1")!
//        let (data, response) = try await URLSession.shared.data(from: url)
//
//        guard let httpResponse = response as? HTTPURLResponse,
//              httpResponse.statusCode == 200 else {
//                  throw NetworkingError.invalidServerResponse
//              }
//
//        guard let result = String(data: data, encoding: .utf8) else {
//            throw NetworkingError.invalidCharacterSet
//        }
//
//        return result
//}
//let result = try! await getJson()
//print(result)

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

//UI 部分
let arrayOfStrings = ["Alices-MacBook-Pro:~ Alice$", "override func viewDidLoad() {", "super.viewDidLoad()", "makeBackgroundGradient()", "addGradientToPortfolio()", "addGradientToTopBar()", "addGradientToTopBar()", "setupPopup()", "addTradeButton.titleLabel?.minimumScaleFactor = 0.5;", "addTradeButton.titleLabel?.minimumScaleFactor = 0.5;"]
var variableThatChanges : Int = 0
let frameOfMainView = CGRect(x: 0, y: 0, width: 1024, height: 768)
class MainViewController: UIViewController, UITextViewDelegate {
    override func viewDidLoad() {
        let view = UITextView(frame: CGRect(x: 0, y:0, width: 1024, height: 768))
        self.view.frame = frameOfMainView
        view.backgroundColor = .black
        view.textColor = .green
        view.font = UIFont(name: "Courier", size: 20)
        view.isEditable = true
        view.delegate = self
        self.view.addSubview(view)
    }
    func textView(_ textView: UITextView, shouldChangeTextIn range: NSRange,replacementText text: String) -> Bool {
        if variableThatChanges == (arrayOfStrings.count - 1){
            variableThatChanges = 0
        }
        let text = textView.text ?? ""
        textView.text = text + "\n" + arrayOfStrings[variableThatChanges]
        variableThatChanges += 1
        return false
    }
}

let master = MainViewController()
master.preferredContentSize = frameOfMainView.size
PlaygroundPage.current.liveView = master.view

//var i:Int
//var j:Int
//var n: Int? = 100
//for i in 0..<n! {
//    for j in 0..<n! {
//        print("i=\(i),j=\(j)")
//    }
//}
////O(n^2) 循环时间复杂度=循环体*循环运行次数

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
    case Stark = "Winter is Coming"
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

let view1 = UIView()
view1.frame = CGRect(x: 0, y: 0, width: 100, height: 100)
view1.backgroundColor = UIColor.red
PlaygroundPage.current.liveView = view1

let imgView = UIImageView(image: UIImage(named: "delapp"))
imgView.frame = CGRect(x: 0, y: 100, width: 100, height: 100)
PlaygroundPage.current.liveView = imgView

let tableView = UITableViewController()
tableView.view.backgroundColor = UIColor.lightGray
PlaygroundPage.current.liveView = tableView

//    master.preferredContentSize = frameOfMainView.size
//    PlaygroundPage.current.liveView = master

//let view = UIView(frame: CGRect(x: 0, y:0, width: 1024, height: 768),
//                  PlaygroundPage.current.live = view
//
//let animationsBlock : @convention(block) () -> () = {
//        NSLog("start")
//}
//let completionBlock : @convention(block) (Bool) -> () = {
//        (Bool completion) in
//            NSLog("completion")
//}
//UIView.animateWithDuration(2, animations: animationsBlock, completion: completionBlock)

 //:   级别

