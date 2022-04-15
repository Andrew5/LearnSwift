import Foundation
import UIKit
import XCPlayground
import GameplayKit // (1)
import CoreImage
import CoreImage.CIFilterBuiltins
//victoria
//https://www.upantool.com/jiaocheng/hdd/5604.html
// 引用自 https://blog.csdn.net/cunjie3951/article/details/106922047/

public extension UIImage { // (2)
    convenience init?(color: UIColor, size: CGSize = CGSize(width: 1, height: 1)) {
        let rect = CGRect(origin: .zero, size: size)
        UIGraphicsBeginImageContextWithOptions(rect.size, false, 0.0)
        color.setFill()
        UIRectFill(rect)
        let image = UIGraphicsGetImageFromCurrentImageContext()
        UIGraphicsEndImageContext()
        
        guard let cgImage = image?.cgImage else {
            self.init()
            return nil
        }
        self.init(cgImage: cgImage)
    }
}

let cardWidth = CGFloat(120) // (3)
let cardHeight = CGFloat(141)

public class Card: UIImageView { // (4)
    public let x: Int
    public let y: Int
    public init(image: UIImage?, x: Int, y: Int) {
        self.x = x
        self.y = y
        super.init(image: image)
        self.backgroundColor = .gray
        self.layer.cornerRadius = 10.0
        self.isUserInteractionEnabled = true
    }
    required public init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
}

public class GameController: UIViewController {
    
    // (1): public variables so we can manipulate them in the playground
    public var padding = CGFloat(20) {
        didSet {
            resetGrid()
        }
    }
    
    public var backImage: UIImage = UIImage(
        color: .red,
        size: CGSize(width: cardWidth, height: cardHeight))!
    
    // (2): computed properties
    var viewWidth: CGFloat {
        get {
            return 4 * cardWidth + 5 * padding
        }
    }
    
    var viewHeight: CGFloat {
        get {
            return 4 * cardHeight + 5 * padding
        }
    }
    
    var shuffledNumbers = [Int]() // stores shuffled card numbers
    
    var firstCard: Card? // uncomment later
    
    
    public init() {
        super.init(nibName: nil, bundle: nil)
        preferredContentSize = CGSize(width: viewWidth, height: viewHeight)
        shuffle()
        setupGrid()
        // uncomment later:
        let tap = UITapGestureRecognizer(target: self, action: #selector(GameController.handleTap(gr:)))
        view.addGestureRecognizer(tap)

    }
    
    required public init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    public override func loadView() {
        view = UIView()
        view.backgroundColor = .blue
        view.frame = CGRect(x: 0, y: 0, width: viewWidth, height: viewHeight)
    }
    
    // (3): Using GameplayKit API to generate a shuffling of the array [1, 1, 2, 2, ..., 8, 8]
    //代码(1...8).flatMap{[$0, $0]}是生成数组[1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8] (1...8).flatMap{[$0, $0]}的简洁方法[1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8] 。 如果您不熟悉函数式编程，则还可以编写for -loop来生成数组。 使用GamePlayKit框架中的方法，我们对数组中的数字进行混洗。 数字对应于八对卡。 每个数字代表同名的卡片图像（例如shuffledArray的值1对应于1.png
    func shuffle() {
        let numbers = (1...8).flatMap{[$0, $0]}
        shuffledNumbers =
            GKRandomSource.sharedRandom().arrayByShufflingObjects(in: numbers) as! [Int]
        
    }
    
    // (4): Convert from card position on grid to index in the shuffled card numbers array
    //我们编写了一种方法，可将卡在4x4网格上的位置映射到长度为16的shuffledNumbers数组中的位置。算术计算中的因子4反映了每行有四张卡的事实
    func cardNumberAt(x: Int, _ y: Int) -> Int {
        assert(0 <= x && x < 4 && 0 <= y && y < 4)
        
        return shuffledNumbers[4 * x + y]
    }
    // (5): Position of card's center in superview
    //我们还有一种方法可以根据卡片的尺寸和填充来计算出卡片在其网格中的位置（其center属性）
    func centerOfCardAt(x: Int, _ y: Int) -> CGPoint {
        assert(0 <= x && x < 4 && 0 <= y && y < 4)
        let (w, h) = (cardWidth + padding, cardHeight + padding)
        return CGPoint(
            x: CGFloat(x) * w + w/2 + padding/2,
            y: CGFloat(y) * h + h/2 + padding/2)
        
    }
    
    // (6): setup the subviews
    //在视图控制器的初始化期间将调用setupGrid()方法。 它布置了4x4 Card网格。 它还基于shuffledNumbers数组分配每张卡的标识，并将其存储在从卡的基类UIView继承的tag属性中。 在游戏逻辑中，我们比较tag值以找出两张卡是否匹配。 这种基本的建模方案足以满足我们当前的需求
    func setupGrid() {
        for i in 0..<4 {
            for j in 0..<4 {
                let n = cardNumberAt(x: i, j)
                let card = Card(image: UIImage(named: String(n)), x: i, y: j)
                card.tag = n
                card.center = centerOfCardAt(x: i, j)
                view.addSubview(card)
            }
        }
    }
    
    // (7): reset grid
    //当前这些未使用的代码段将帮助我们在填充发生更改的情况下重新定位卡。 请记住，我们将padding属性声明为公共属性，因此我们可以在操场上访问它
    func resetGrid() {
        view.frame = CGRect(x: 0, y: 0, width: viewWidth, height: viewHeight)
        for v in view.subviews {
            if let card = v as? Card {
                card.center = centerOfCardAt(x: card.x, card.y)
            }
        }
        
    }
    
    //viewDidAppear(_:)的代码在视图控制器的视图变为可见后立即运行。 我们反复通过视图的子视图，如果子视图是实例Card类，（通过检查as? failable向下转换运营商）的身体if语句来定义过渡到执行。 在这里，我们将更改显示在卡片上的图像，从定义每个卡片正面的卡通图像到所有卡片的（通用） backImage 。 这种过渡伴随着从左到右的翻转动画，使卡片的外观被物理翻转。 如果您不熟悉UIView动画的工作方式，这可能看起来有些奇怪。 即使我们按循环顺序依次添加了每张卡的动画，这些动画仍被批处理到单个动画事务中并同时执行，即，卡相互翻转
    override public func viewDidAppear(_ animated: Bool) {
        for v in view.subviews {
            if let card = v as? Card {     // (8): failable casting
                UIView.transition(
                    with: card,
                    duration: 1.0,
                    options: .transitionFlipFromLeft,
                    animations: {
                        card.image =  self.backImage
                    }, completion: nil)
            }
        }
    }
    /*
     那是一个冗长的方法。 那是因为它以一种方法打包了所有必需的触摸处理，游戏逻辑以及相关的动画。 让我们看看这个方法是如何工作的：
     
     首先，进行检查以确保用户实际触摸了Card实例。 这是一样as? 我们之前使用的构造。
     如果用户确实触摸了Card实例，我们将使用类似于我们先前实现的动画的方式将其翻转。 唯一的新方面是，我们使用完成处理程序（在动画完成后执行）来通过设置卡片的userInteractionEnabled属性来临时禁用该特定卡片的触摸互动。 这样可以防止玩家翻转同一张纸牌。 注意在此方法中多次使用的_ in构造。 这只是说我们要忽略完成处理程序采用的Bool参数。
     我们根据是否使用可选绑定为firstCard分配了非firstCard值来执行代码，这是Swift熟悉的if let构造方法。
     如果firstCard为非firstCard ，则这是玩家移交序列中的第二张卡。 现在，我们需要将此卡的外观与上一张相比较（通过比较tag值），以查看是否匹配。 如果我们这样做了，我们就为卡淡出动画（通过将其alpha设置为0）。 我们还将从视图中删除这些卡。 如果标签不相等，则意味着卡不匹配，我们只需将它们向下翻转即可，并将userInteractionEnabled设置为true以便用户再次选择它们。
     根据firstCard的当前值，我们将其设置为nil或当前卡。 这就是我们在两次连续的触摸之间切换代码行为的方式。
     */
    @objc func handleTap(gr: UITapGestureRecognizer) {
        let v = view.hitTest(gr.location(in: view), with: nil)!
        if let card = v as? Card {
            UIView.transition(
                with: card, duration: 0.5,
                options: .transitionFlipFromLeft,
                animations: {card.image = UIImage(named: String(card.tag))}) { // trailing completion handler:
                _ in
                card.isUserInteractionEnabled = false
                if let pCard = self.firstCard {
                    if pCard.tag == card.tag {
                        UIView.animate(
                            withDuration: 0.5,
                            animations: {card.alpha = 0.0},
                            completion: {_ in card.removeFromSuperview()})
                        UIView.animate(
                            withDuration: 0.5,
                            animations: {pCard.alpha = 0.0},
                            completion: {_ in pCard.removeFromSuperview()})
                    } else {
                        UIView.transition(
                            with: card,
                            duration: 0.5,
                            options: .transitionFlipFromLeft,
                            animations: {card.image = self.backImage})
                            { _ in card.isUserInteractionEnabled = true }
                        UIView.transition(
                            with: pCard,
                            duration: 0.5,
                            options: .transitionFlipFromLeft,
                            animations: {pCard.image = self.backImage})
                            { _ in pCard.isUserInteractionEnabled = true }
                    }
                    self.firstCard = nil
                } else {
                    self.firstCard = card
                }
            }
        }
    }
    public func quickPeek() {
        for v in view.subviews {
            if let card = v as? Card {
                card.isUserInteractionEnabled = false
                UIView.transition(with: card, duration: 1.0, options: .transitionFlipFromLeft, animations: {card.image =  UIImage(named: String(card.tag))}) {
                    _ in
                    UIView.transition(with: card, duration: 1.0, options: .transitionFlipFromLeft, animations: {card.image =  self.backImage}) {
                        _ in
                        card.isUserInteractionEnabled = true
                    }
                }
            }
        }
    }
}


//// MARK: 颜色转UIImage
//extension UIImage {
//
//   public convenience init?(color: UIColor, size: CGSize = CGSize(width: 1.0, height: 1.0)) {
//       UIGraphicsBeginImageContextWithOptions(size, true, UIScreen.main.scale)
//       defer {
//           UIGraphicsEndImageContext()
//       }
//       let context = UIGraphicsGetCurrentContext()
//       context?.setFillColor(color.cgColor)
//       context?.fill(CGRect(origin: CGPoint.zero, size: size))
//       context?.setShouldAntialias(true)
//       let image = UIGraphicsGetImageFromCurrentImageContext()
//       guard let cgImage = image?.cgImage else {
//           self.init()
//           return nil
//       }
//       self.init(cgImage: cgImage)
//   }
//
//}

// MARK: 图片设置圆角
extension UIImage {
    
    public func roundImage(byRoundingCorners: UIRectCorner = UIRectCorner.allCorners, cornerRadi: CGFloat) -> UIImage? {
        return roundImage(byRoundingCorners: byRoundingCorners, cornerRadii: CGSize(width: cornerRadi, height: cornerRadi))
    }
    
    public func roundImage(byRoundingCorners: UIRectCorner = UIRectCorner.allCorners, cornerRadii: CGSize) -> UIImage? {
        
        let imageRect = CGRect(origin: CGPoint.zero, size: size)
        UIGraphicsBeginImageContextWithOptions(size, false, scale)
        defer {
            UIGraphicsEndImageContext()
        }
        let context = UIGraphicsGetCurrentContext()
        guard context != nil else {
            return nil
        }
        context?.setShouldAntialias(true)
        let bezierPath = UIBezierPath(roundedRect: imageRect,
                                      byRoundingCorners: byRoundingCorners,
                                      cornerRadii: cornerRadii)
        bezierPath.close()
        bezierPath.addClip()
        self.draw(in: imageRect)
        return UIGraphicsGetImageFromCurrentImageContext()
    }
    
}

// MARK: 图片缩放
extension UIImage {
    
    public func scaleTo(size targetSize: CGSize) -> UIImage? {
        let srcSize = self.size
        if __CGSizeEqualToSize(srcSize, targetSize) {
            return self
        }
        
        let scaleRatio = targetSize.width / srcSize.width
        var dstSize = CGSize(width: targetSize.width, height: targetSize.height)
        let orientation = self.imageOrientation
        var transform = CGAffineTransform.identity
        switch orientation {
        case .up:
            transform = CGAffineTransform.identity
        case .upMirrored:
            transform = CGAffineTransform(translationX: srcSize.width, y: 0.0)
            transform = transform.scaledBy(x: -1.0, y: 1.0)
        case .down:
            transform = CGAffineTransform(translationX: srcSize.width, y: srcSize.height)
            transform = transform.scaledBy(x: 1.0, y: CGFloat(M_PI))
        case .downMirrored:
            transform = CGAffineTransform(translationX: 0.0, y: srcSize.height)
            transform = transform.scaledBy(x: 1.0, y: -1.0)
        case .leftMirrored:
            dstSize = CGSize(width: dstSize.height, height: dstSize.width)
            transform = CGAffineTransform(translationX: srcSize.height, y: srcSize.width)
            transform = transform.scaledBy(x: -1.0, y: 1.0)
            transform = transform.rotated(by: CGFloat(3.0) * CGFloat(M_PI_2))
        case .left:
            dstSize = CGSize(width: dstSize.height, height: dstSize.width)
            transform = CGAffineTransform(translationX: 0.0, y: srcSize.width)
            transform = transform.rotated(by: CGFloat(3.0) * CGFloat(M_PI_2))
        case .rightMirrored:
            dstSize = CGSize(width: dstSize.height, height: dstSize.width)
            transform = CGAffineTransform(scaleX: -1.0, y: 1.0)
            transform = transform.rotated(by:  CGFloat(M_PI_2))
        default:
            dstSize = CGSize(width: dstSize.height, height: dstSize.width)
            transform = CGAffineTransform(translationX: srcSize.height, y: 0.0)
            transform = transform.rotated(by:  CGFloat(M_PI_2))
        }
        
        UIGraphicsBeginImageContextWithOptions(dstSize, false, scale)
        defer {
            UIGraphicsEndImageContext()
        }
        let context = UIGraphicsGetCurrentContext()
        guard context != nil else {
            return nil
        }
        context?.setShouldAntialias(true)
        if orientation == UIImage.Orientation.right || orientation == UIImage.Orientation.left {
            context?.scaleBy(x: -scaleRatio, y: scaleRatio)
            context?.translateBy(x: -srcSize.height, y: 0)
        }
        else {
            context?.scaleBy(x: scaleRatio, y: -scaleRatio)
            context?.translateBy(x: 0, y: -srcSize.height)
        }
        context?.concatenate(transform)
        guard let cgImage = self.cgImage else {
            return nil
        }
        context?.draw(cgImage, in: CGRect(x: 0, y: 0, width: srcSize.width, height: srcSize.height))
        return UIGraphicsGetImageFromCurrentImageContext()
    }
    
    public func scaleTo(fitSize targetSize: CGSize, scaleIfSmaller: Bool = false) -> UIImage? {
        let srcSize = self.size
        if __CGSizeEqualToSize(srcSize, targetSize) {
            return self
        }
        
        let orientation = self.imageOrientation
        var dstSize = targetSize
        switch orientation {
        case .left, .right, .leftMirrored, .rightMirrored:
            dstSize = CGSize(width: dstSize.height, height: dstSize.width)
        default:
            break
        }
        if !scaleIfSmaller && (srcSize.width < dstSize.width) && (srcSize.height < dstSize.height) {
            dstSize = srcSize
        }
        else {
            let wRatio = dstSize.width / srcSize.width
            let hRatio = dstSize.height / srcSize.height
            dstSize = wRatio < hRatio ?
                CGSize(width: dstSize.width, height: srcSize.height * wRatio) :
                CGSize(width: srcSize.width * wRatio, height: dstSize.height)
        }
        return self.scaleTo(size: dstSize)
    }
}

// MARK: 通过String生成二维码
extension UIImage {
    
    public static func generateQRImage(QRCodeString: String, logo: UIImage?, size: CGSize = CGSize(width: 50, height: 50)) -> UIImage? {
        guard let data = QRCodeString.data(using: .utf8, allowLossyConversion: false) else {
            return nil
        }
        let imageFilter = CIFilter(name: "CIQRCodeGenerator")
        imageFilter?.setValue(data, forKey: "inputMessage")
        imageFilter?.setValue("H", forKey: "inputCorrectionLevel")
        let ciImage = imageFilter?.outputImage
        
        // 创建颜色滤镜
        let colorFilter = CIFilter(name: "CIFalseColor")
        colorFilter?.setDefaults()
        colorFilter?.setValue(ciImage, forKey: "inputImage")
        colorFilter?.setValue(CIColor(red: 0, green: 0, blue: 0), forKey: "inputColor0")
        colorFilter?.setValue(CIColor(red: 1, green: 1, blue: 1), forKey: "inputColor1")
        
        // 返回二维码图片
        let qrImage = UIImage(ciImage: (colorFilter?.outputImage)!)
        let imageRect = size.width > size.height ?
            CGRect(x: (size.width - size.height) / 2, y: 0, width: size.height, height: size.height) :
            CGRect(x: 0, y: (size.height - size.width) / 2, width: size.width, height: size.width)
        UIGraphicsBeginImageContextWithOptions(imageRect.size, false, UIScreen.main.scale)
        defer {
            UIGraphicsEndImageContext()
        }
        qrImage.draw(in: imageRect)
        if logo != nil {
            let logoSize = size.width > size.height ?
                CGSize(width: size.height * 0.25, height: size.height * 0.25) :
                CGSize(width: size.width * 0.25, height: size.width * 0.25)
            logo?.draw(in: CGRect(x: (imageRect.size.width - logoSize.width) / 2, y: (imageRect.size.height - logoSize.height) / 2, width: logoSize.width, height: logoSize.height))
        }
        return UIGraphicsGetImageFromCurrentImageContext()
    }
    
}



