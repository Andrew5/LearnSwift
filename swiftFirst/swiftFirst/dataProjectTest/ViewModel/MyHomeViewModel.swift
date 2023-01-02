//
//  MyHomeViewModel.swift
//  swiftFirst
//
//  Created by jabraknight on 2021/6/20.
//

import Foundation
import SwiftUI
class MyHomeViewModel: ObservableObject {
    @Published var bookInfo: Book
    init() {
        self.bookInfo = Book(title: "书籍名", author: "小码")
    }
    var appTitle: String {
        return self.bookInfo.title + "(\(self.bookInfo.author))"
    }
    
}
