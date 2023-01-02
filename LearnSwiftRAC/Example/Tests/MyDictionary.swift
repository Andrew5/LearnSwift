//
//  MyDictionary.swift
//  LearnSwiftRAC_Tests
//
//  Created by rilakkuma on 2022/12/29.
//  Copyright © 2022 CocoaPods. All rights reserved.
//

import Foundation
// 键值对结构体
struct KeyValuePair {
    let key: Any
    var value: Any
}
class NSDictionaryNew {
        // 存储键值对的数组
        private var keyValuePairs: [KeyValuePair] = []
        // 当前字典中的键值对数量
        var count: Int {
            return keyValuePairs.count
        }
        // 构造函数
        init() {}
    
    // 添加键值对到字典
    func setValue(_ value: Any, forKey key: Any) {
        // 先查找是否已经存在该键
        for i in 0..<keyValuePairs.count {
            if keyValuePairs[i].key as? String == key as? String {
                keyValuePairs[i].value = value
                return
            }
        }
        // 如果不存在，则添加一个新的键值对
        keyValuePairs.append(KeyValuePair(key: key, value: value))
    }
}

class MyDictionaryOK  {
    var pairs: [KeyValuePair] = []

    func setObject(_ object: Any, forKey key: Any) {
        // 先判断key是否已经存在，如果存在，则更新value
        for i in 0..<pairs.count {
            if pairs[i].key as! NSObject == key as! NSObject {
                pairs[i].value = object
                return
            }
        }
        // 如果key不存在，则新增键值对
        pairs.append(KeyValuePair(key: key, value: object))
    }
    
    func object(forKey key: Any) -> Any? {
        for pair in pairs {
            if pair.key as! NSObject == key as! NSObject {
                return pair.value
            }
        }
        return nil
    }
    
    func removeObject(forKey key: Any) {
        for i in 0..<pairs.count {
            if pairs[i].key as! NSObject == key as! NSObject {
                pairs.remove(at: i)
                return
            }
        }
    }
}

class XXX {
    let dict = MyDictionaryOK()
//    dict.setObject("value1", forKey: "key1")
//    dict.setObject("value2", forKey: "key2")
//    print(dict.object(forKey: "key1")) // 输出 "value1"
//    dict.removeObject(forKey: "key1")
//    print(dict.object(forKey: "key1")) // 输出 nil
}
