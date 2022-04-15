//: [Previous](@previous)

import Foundation

var greeting = "Hello, playground"

//静态派发
final public class SwiftMethodDispatchStatic {
    public init() {}
    
    func printMethodName() -> String {
        let name = getMethodName()
        return name
    }
    
    public func getMethodName() -> String {
        let name = "SwiftMethodDispatchStatic"
        print("Method name: \(name)")
        return name
    }
}

//vtable 派发
public class SwiftMethodDispatchTable1 {
    public init() {}
    
    func printMethodName() -> String {
        let name = getMethodName()
        return name
    }
    
    public func getMethodName() -> String {
        let name = "SwiftMethodDispatchTable"
        print("Method name: \(name)")
        return name
    }
}

//消息派发
public class SwiftMethodDispatchMessage2 {
    public init() {}
    
    func printMethodName() -> String {
        let name = getMethodName()
        return name
    }

    @objc dynamic public func getMethodName() -> String {
        let name = "SwiftMethodDispatchMessage"
        print("Method name: \(name)")
        return name
    }
}

//: [Next](@next)
