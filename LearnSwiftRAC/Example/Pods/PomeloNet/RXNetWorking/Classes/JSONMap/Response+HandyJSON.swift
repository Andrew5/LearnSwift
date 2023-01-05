//
//  Response+HandyJSON.swift
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
import Moya
import HandyJSON
public extension Response {

    /// Maps data received from the signal into an object which implements the Mappable protocol.
    /// If the conversion fails, the signal errors.
    func mapObject<T: HandyJSON>(_ type: T.Type) throws -> T {
        guard let object = T.deserialize(from: try mapString()) else {
            throw MoyaError.jsonMapping(self)
        }
        return object
    }

    /// Maps data received from the signal into an array of objects which implement the Mappable
    /// protocol.
    /// If the conversion fails, the signal errors.
    func mapArray<T: HandyJSON>(_ type: T.Type) throws -> [T?] {
        guard let objects = [T].deserialize(from: try mapString()) else {
            throw MoyaError.jsonMapping(self)
        }
        return objects
    }

    /// Maps data received from the signal into an object which implements the Mappable protocol.
    /// If the conversion fails, the signal errors.
    func mapObject<T: HandyJSON>(_ type: T.Type, atKeyPath keyPath: String) throws -> T {
        guard let object = T.deserialize(from: try mapString(), designatedPath: keyPath) else {
            throw MoyaError.jsonMapping(self)
        }
        return object
    }

    /// Maps data received from the signal into an array of objects which implement the Mappable
    /// protocol.
    /// If the conversion fails, the signal errors.
    func mapArray<T: HandyJSON>(_ type: T.Type, atKeyPath keyPath: String) throws -> [T?] {
        guard let objects = [T].deserialize(from: try mapString(), designatedPath: keyPath) else {
            throw MoyaError.jsonMapping(self)
        }
        return objects
    }
}
