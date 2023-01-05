//
//  HTTPHeaderPlugin.swift
//  DanceCloud
//
//  Created by 付海洋 on 2021/9/26.
//  Copyright © 2021 DiYiJieWu. All rights reserved.
//

import Foundation
import Moya
public struct HTTPHeaderPlugin: PluginType {

    /**
     Prepare a request by  HTTPHeaders if necessary.

     - parameters:
     - request: The request to modify.
     - target: The target of the request.
     - returns: The modified `URLRequest`.
     */
    public func prepare(_ request: URLRequest, target: TargetType) -> URLRequest {
    
        var request = request
        request.addValue("Basic VXNlcm5hbWU6UGFzc3dvcmQ=", forHTTPHeaderField: "Authorization")
        request.addValue("application/json", forHTTPHeaderField: "Accept")
        
        request.httpShouldHandleCookies = false
        request.timeoutInterval = 20
    
        return request
    }
}
