//
//  ViewController.swift
//  LearnSwiftRAC
//
//  Created by jabraknight on 09/03/2022.
//  Copyright (c) 2022 jabraknight. All rights reserved.
//

import UIKit
import LearnSwiftRAC

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        view.backgroundColor = UIColor.white

        let vc = MainViewController.init()
        addChildViewController(vc)
        view.addSubview(vc.view)
        vc.view.frame = CGRect(x: 0, y: 100, width: UIScreen.main.bounds.size.width, height: 500)
        vc.view.backgroundColor = UIColor.gray
        test()
    }
    func test () {
        // 华为会议配置
        func congifHWMeeting() {
            HWMTools().initHWMSDK("23423432", "") {
                print("成功了")
            }
        }
    }
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

}

