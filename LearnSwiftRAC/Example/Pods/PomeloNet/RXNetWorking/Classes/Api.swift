//
//  Api.swift
//
//  DanceCloud
//  Created by 付海洋 on 2020/9/11
//  Copyright © 2020 DiYiJieWu. All rights reserved.
//
//  ┌───┐   ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┐
//  │Esc│   │ F1│ F2│ F3│ F4│ │ F5│ F6│ F7│ F8│ │ F9│F10│F11│F12│ │P/S│S L│P/B│  ┌┐    ┌┐    ┌┐
//  └───┘   └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┘  └┘    └┘    └┘
//  ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐ ┌───┬───┬───┐ ┌───┬───┬───┬───┐
//  │~ `│! 1│@ 2│# 3│$ 4│% 5│^ 6│  7│ 8 │( 9│) 0│_ -│+ =│ BacSp │ │Ins│Hom│PUp│ │N L│ / │   │ - │
//  ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ ├───┼───┼───┤ ├───┼───┼───┼───┤
//  │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │{ [│} ]│ | \ │ │Del│End│PDn│ │ 7 │ 8 │ 9 │   │
//  ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤ └───┴───┴───┘ ├───┼───┼───┤ + │
//  │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │: ;│   │ Enter  │               │ 4 │ 5 │ 6 │   │
//  ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤     ┌───┐     ├───┼───┼───┼───┤
//  │ Shift  │ Z │ X │ C │ V │ B │ N │ M │  ,│  .│? /│  Shift   │     │ ↑ │     │ 1 │ 2 │ 3 │   │
//  ├─────┬──┴─┬─┴──┬┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤ ┌───┼───┼───┐ ├───┴───┼───┤ E││
//  │ Ctrl│    │Alt │         Space         │ Alt│    │    │Ctrl│ │ ← │ ↓ │ → │ │   0   │ . │←─┘│
//  └─────┴────┴────┴───────────────────────┴────┴────┴────┴────┘ └───┴───┴───┘ └───────┴───┴───┘
//

import Foundation
import RxSwift
import HandyJSON
import Moya
import Alamofire


public struct Api {
    /// 插件
    static let plugins: [PluginType] = [HTTPHeaderPlugin(), LoadingToastPlugin(), ResponseHandlePlugin()]
    
    /// Provider
    static let practiceProvider = MoyaProvider<PracticeAPI>(plugins: plugins)
    static let profileProvider = MoyaProvider<ProfileAPI>(plugins: plugins)
    
    /// 发起请求
    public static func requestObject<JsonModel: HandyJSON, Target: AppTargetType>(_ target: Target, type: JsonModel.Type) -> Single<JsonModel> {
        
        if target is PracticeAPI {
            return requestWithProvider(target as! PracticeAPI, type: type, provider: practiceProvider)
        } else {
            return requestWithProvider(target as! ProfileAPI, type: type, provider: profileProvider)
        }
    }
}

extension Api {
    fileprivate static func requestWithProvider<JsonModel: HandyJSON, Target: AppTargetType>(_ target: Target, type: JsonModel.Type, provider: MoyaProvider<Target>) -> Single<JsonModel> {
        return provider.rx
            .request(target)
            .mapObject(type)
            .observe(on: MainScheduler.instance)
    }
}
