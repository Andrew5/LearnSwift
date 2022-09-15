//
//  TestPro.swift
//  LearnSwiftRAC
//
//  Created by rilakkuma on 2022/9/15.
//

import Foundation

public protocol MutableProtocol {
    func creatAlertShowItem(_ text:String) -> UIView&LYAlertTitleShowProtocol
    func creatAlertInteractiveItem(_ text: String)->UIView&LYAlertInteractiveItemProtocol

}
public protocol LYAlertItemProtocol{
    func line(_ color:UIColor,_ width:CGFloat) -> Self
    func attribute(_ attribute:[NSAttributedString.Key :Any])->Self
}

public protocol LYAlertTitleShowProtocol:LYAlertItemProtocol {
    func textAlignment(_ alignment:NSTextAlignment) -> Self
}

public protocol LYAlertInteractiveItemProtocol:LYAlertItemProtocol  {
    func btnBackgroundColor(_ color:UIColor) -> Self
    func itemBackgroundColor(_ color:UIColor) -> Self
    func btnRadius(_ radius:CGFloat) -> Self
    func btnBorderWidth(_ borderWidth:CGFloat) -> Self
    func btnBorderColor(_ color:UIColor) -> Self
    func btnHeight(_ height:CGFloat)->Self
    func btnMarin(_ marin:CGFloat)->Self
//    func action(col: @escaping (marin1:CGFloat))  -> Self
}
