//
//  HWMTools.swift
//  LearnSwiftRAC
//
//  Created by rilakkuma on 2022/9/14.
//

import Foundation
import HWMUISDK

public class HWMTools: NSObject {
    static let shared = HWMTools()
    public func initHWMSDK(_ appId: String, _ appGroupIndentifier: String, handleSucces: @escaping () -> Void) {
        let config = HWMOpenSDKConfig.init()
        config.appId = appId
        config.appGroupIndentifier = ""
        let result = HWMSdk.initWith(config)
        guard !result else {
            print("初始化成功")
            handleSucces()
            return
        }
    }
}
