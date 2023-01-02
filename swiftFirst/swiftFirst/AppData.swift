//
//  AppData.swift
//  swiftFirst
//
//  Created by jabraknight on 2021/6/20.
//

import Foundation
import SwiftUI

class AppData: ObservableObject {
    ///全局区
    @Published var AppTitle: String = "SwiftUI"
    @Published var Author: String = "贡茶"
    
}
