//: [Previous](@previous)

import Foundation

var str = "Hello, playground"
//元组 tuple
let error = (404,"Not Found")
error.0
error.1

let (statusCode, statusMessage) = error
statusCode
statusMessage

let (justStatusCode, _) = error
justStatusCode

let http200Status = (statusCode:200, description:"OK")
http200Status.statusCode
http200Status.description

//: [Next](@next)
