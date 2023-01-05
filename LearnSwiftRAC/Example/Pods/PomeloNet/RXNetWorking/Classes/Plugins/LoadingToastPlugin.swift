//
//  LoadingToastPlugin.swift
//  DanceCloud
//
//  Created by 付海洋 on 2021/9/26.
//  Copyright © 2021 DiYiJieWu. All rights reserved.
//

import Foundation
import Moya
public struct LoadingToastPlugin: PluginType {
    /**
     Prepare a request by  adding load toast if necessary.

     - parameters:
     - request: The request to modify.
     - target: The target of the request.
     - returns: The modified `URLRequest`.
     */
    public func prepare(_ request: URLRequest, target: TargetType) -> URLRequest {
        guard let token = target as? AppTargetType else { return request }
        DispatchQueue.main.async {
            if token.isRequestWithCoverLoading == true {
               
            } else if token.isRequestWithMaskLoading == true {
            
            }
        }
        return request
    }
    
    
    
}
