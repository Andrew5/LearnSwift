//
//  ProfileAPI.swift
//
//  DanceCloud
//  Created by 付海洋 on 2020/9/14
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
import Moya
import Alamofire

enum ProfileAPI{
    /// 验证码登录
    case loginWithCode(code:String, phone:String)
}

extension ProfileAPI: AppTargetType {
    
    public var isRequestWithMaskLoading:Bool {
        return false
    }
    
    public var isRequestWithCoverLoading: Bool {
        return false
    }
    
    public var method: Moya.Method {
        return .post
    }
    
    public var headers: [String : String]? {
        return nil
    }
    
    public var baseURL: URL {
        return URL(string:"https://httpbin.org/")!
    }
    
    public var path: String {
        switch self {
        case .loginWithCode(_, _):
            return "post"
        default:
            return ""
        }
    }
    
    public var parameters: [String: Any]? {
        switch self {
        case .loginWithCode(let code, let phone):
            return ["code": code, "phone": phone]
        default:
            return nil
        }
    }

    public var parameterEncoding: ParameterEncoding {
        return JSONEncoding.default
    }
    
    
    public var sampleData: Data {
        return Data()
    }
    
    public var task: Task {
        if let parameters = parameters {
            return .requestParameters(parameters: parameters, encoding: parameterEncoding)
        } else {
            return .requestPlain
        }
    }
}
