//: A UIKit based Playground for presenting user interface
  
import UIKit
import PlaygroundSupport
import XCPlayground
import Foundation

class MyViewController : UIViewController {
    override func loadView() {
        let view = UIView()
        view.backgroundColor = .white

        let label = UILabel()
        label.frame = CGRect(x: 150, y: 200, width: 200, height: 20)
        label.text = "Hello World!"
        label.textColor = .black
        
        view.addSubview(label)
        self.view = view
    }
}
// Present the view controller in the Live View window
PlaygroundPage.cu1rrent.liveView = MyViewController()

let gc = GameController()
XCPlaygroundPage.currentPage.liveView = gc
PlaygroundPage.current.needsIndefiniteExecution = true

gc.backImage = UIImage(named: "b")!
gc.padding = 75

//class LPGR {
//    static var counter = 0
//    @objc static func longPressed(lp: UILongPressGestureRecognizer) {
//        if lp.state == .began {
//            gc.quickPeek()
//            counter += 1
//            print("You peeked \(counter) time(s).")
//        }
//    }
//}
//
//let longPress = UILongPressGestureRecognizer(target: LPGR.self, action: #selector(LPGR.longPressed))
//longPress.minimumPressDuration = 2.0
//gc.view.addGestureRecognizer(longPress)


