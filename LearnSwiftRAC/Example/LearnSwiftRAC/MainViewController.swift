//
//  MainViewController.swift
//  LearnSwiftRAC
//
//  Created by rilakkuma on 2022/9/3.
//

import Foundation
import UIKit
import RxSwift
import RxCocoa
import SnapKit
class SMainViewController : UIViewController {
    
    var addBtn = UIButton(type: .custom)
    lazy var bag: DisposeBag = DisposeBag()

    override func viewDidLoad() {
        view.backgroundColor = UIColor.white
        test1()
    }
    func test1() {
        addBtn = UIButton.init()
        addBtn.backgroundColor = UIColor.white
        view.addSubview(addBtn)
        
        addBtn.snp.makeConstraints { (make) in
            make.left.equalTo(8)
            make.right.equalTo(-8)
            make.top.equalTo(view.snp.top)
            make.bottom.equalTo(view.snp.bottom)
//            make.top.equalToSuperview().offset(0).priority(.low)
        }
        addBtn.rx.tap.subscribe { event in
          print("按钮点击")
        }.disposed(by: bag)
    }
    override func didReceiveMemoryWarning() {
        
    }
}
