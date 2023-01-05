//
//  TargetType+loading.swift
//  DanceCloud
//
//  Created by 付海洋 on 2020/12/4.
//  Copyright © 2020 DiYiJieWu. All rights reserved.
//

import Foundation
import Moya
public protocol AppTargetType: TargetType {
    var isRequestWithMaskLoading: Bool { get }
    var isRequestWithCoverLoading: Bool { get }
}
