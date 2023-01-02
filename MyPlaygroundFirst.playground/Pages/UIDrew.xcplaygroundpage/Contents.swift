import Foundation
import PlaygroundSupport
import UIKit

//https://blog.csdn.net/zhanglei5415/article/details/121494752
@propertyWrapper //包装属性
//每个 @propertyWrapper 都必须实现一个属性 wrappedValue, 实现 wrappedValue 的 set get 就相当于替换掉原属性的 set get.
// 属性包装器是一种通用结构, 它封装了对该属性的读写访问, 并为其添加了其他行为。如果需要限制可用的属性值, 向读/写访问添加额外的逻辑（例如使用数据库或用户默认值）或添加一些其他方法, 则可以使用它
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

// 属性包装器
struct Account {
    var firstName: String
    var lastName: String
    var email: Email<String>
}

@propertyWrapper
struct Email<Value: StringProtocol> {
    var value: Value?
    var wrappedValue: Value? {
        get {
            return validate(email: value) ? value : nil
        }
        set {
            value = newValue
        }
    }
    
    private func validate(email: Value?) -> Bool {
        guard let email = email else { return false }
        let emailRegEx = "[A-Z0-9a-z._%+-][email protected][A-Za-z0-9.-]+\\.[A-Za-z]{2, 64}"
        let emailPred = NSPredicate(format:"SELF MATCHES %@", emailRegEx)
        return emailPred.evaluate(with: email)
    }
}


//@Email
//var email: String?
//email = "[email protected]"
//print(email) // [email protected]
//email = "invalid"
//print(email) // nil
@propertyWrapper
struct Scores {
    private let minValue = 0
    private let maxValue = 100
    private var value: Int
    init(wrappedValue value: Int) {
        self.value = value
    }
    var wrappedValue: Int {
        get {
            return max(min(value, maxValue), minValue)
        }
        set {
            value = newValue
        }
    }
}
//@Scores
//var scores: Int = 0

@propertyWrapper
struct Constrained<Value: Comparable> {
    private var range: ClosedRange<Value>
    private var value: Value
    init(wrappedValue value: Value, _ range: ClosedRange<Value>) {
        self.value = value
        self.range = range
    }
    var wrappedValue: Value {
        get {
            return max(min(value, range.upperBound), range.lowerBound)
        }
        set {
            value = newValue
        }
    }
}
//@Constrained(0...100)
//var scores: Int = 0








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
let path = "/Users/ykid/Downloads/跳转地址.txt"
let data = FileManager().contents(atPath: path)
//let originalString = String(data: data!, encoding: .utf8)

PlaygroundPage.current.needsIndefiniteExecution = true

@propertyWrapper
struct UserDefaultWrapper<T> {
    var key: String
    var defaultT: T!
    var wrappedValue: T! {
        get { (UserDefaults.standard.object(forKey: key) as? T) ?? defaultT }
        nonmutating set {
            if newValue == nil {
                UserDefaults.standard.removeObject(forKey: key)
            } else {
                UserDefaults.standard.set(newValue, forKey: key)
            }
        }
    }
    
    init(_ key: String, _ defaultT: T! = nil) {
        self.key = key
        self.defaultT = defaultT
    }
}
struct UserDefaultsUnit {
    @UserDefaultWrapper("test")
    static var test: String?
}

//使用
UserDefaultsUnit.test = "hahahha" // set
UserDefaultsUnit.test // get

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
        
        print("屏幕的高是\(String(describing: getHeight(20.0)))")
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
    func getHeight(_ height: Float?) -> Float? {

       if let unwrapedHeight = height {
           return unwrapedHeight / 100
       }
       return nil
        /*或者
         guard let unwrapedHeight = height else {
            return nil
          }
          return unwrapedHeight / 100
         */

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
let viewRed = UIView()
viewRed.frame = CGRect(x: 0, y: 0, width: 100, height: 100)
viewRed.backgroundColor = UIColor.blue
//CALayer边框
viewRed.layer.borderWidth = 2
viewRed.layer.borderColor = UIColor.black.cgColor
       //CALayer阴影
viewRed.layer.shadowColor = UIColor.gray.cgColor
viewRed.layer.shadowOffset = CGSize(width: 10, height: 10)
viewRed.layer.shadowOpacity = 0.5
viewRed.layer.shadowRadius = 5.0
       //CGLayer圆角
viewRed.layer.masksToBounds = true//设置圆角半径对view有用，但对view的内容不起作用，所以对内容进行裁边
viewRed.layer.cornerRadius = 100
//       self.view.addSubview(viewRed)
       //CALayer渐变
       let view2 = UIView(frame: CGRect(x: 150, y: 400, width: 100, height: 100))
       let gradientLayer = CAGradientLayer()
       gradientLayer.frame = view2.bounds
       let formColor = UIColor.yellow.cgColor
       let midColor = UIColor.blue.cgColor
       let toColor = UIColor.red.cgColor
       gradientLayer.colors = [formColor,midColor,toColor]
       view2.layer.addSublayer(gradientLayer)
       //设置渐变方向
       gradientLayer.startPoint = CGPoint(x: 0, y: 0)//值在0～1
       gradientLayer.endPoint = CGPoint(x: 1, y: 1)
       //设置渐变行走轨迹
       gradientLayer.locations = [0,0.5,1]

PlaygroundPage.current.liveView = viewRed

let imageViewRed = UIImageView(image: UIImage(named: "delapp"))
PlaygroundPage.current.liveView = imageViewRed

let vcListVC = UITableViewController()
vcListVC.view.backgroundColor = UIColor.lightGray
PlaygroundPage.current.liveView = vcListVC


class myClass: Timer{
    func printFrom1To1000() {
     for counter in 0...1000 {
        let b = counter
        print("计时器：\(b)")
     }
    }
}

let myClassInstance = myClass()

var timer = Timer.scheduledTimer(timeInterval: 0,
    target: myClassInstance,
    selector: Selector(("printFrom1To1000")),
    userInfo: nil,
    repeats: false
)
timer.fire()


class Pipe: FileHandle {

}
class Process {
    var launchPath = String()
    var arguments = [String]()
    var standardOutput = Pipe()
    func launch(){
        
    }
    func waitUntilExit(){
        
    }
}


