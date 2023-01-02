//
//  MyHomeView.swift
//  swiftFirst
//
//  Created by jabraknight on 2021/6/20.
//

import Foundation
import SwiftUI

@available(iOS 14.0, *)
struct MyHomeView: View {
    @StateObject private var viewModel = MyHomeViewModel()
    var body: some View {
        Text(self.viewModel.appTitle)
            .padding()
            .font(.title)
            .foregroundColor(Color.red)
    }
}

@available(iOS 14.0, *)
struct MyHomeView_Previews: PreviewProvider {
    static var previews: some View {
        MyHomeView()
    }
}
