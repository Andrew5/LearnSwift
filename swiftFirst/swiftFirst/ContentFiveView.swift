//
//  ContentFiveView.swift
//  swiftFirst
//
//  Created by jabraknight on 2021/6/20.
//

import SwiftUI

struct ContentFiveView: View {
//    @State private var title: String = "小码技术暗黑模式"
    ///环境对象
    @Environment(\.colorScheme) var mode
    var body: some View {
        HStack {
            VStack {
                Text("系统颜色模式：\(mode == .dark ? "暗黑模式":"白昼模式")")
                Text("小麦视频")
                    .font(.largeTitle)
                    .background(mode == .dark ? Color.black : Color.yellow)
                    .foregroundColor(mode == .dark ? Color.white : Color.black)
                    .cornerRadius(15)

            }
            
        }
       
//        VStack {
//                .font(.title)
//            Button(action: {
//
//            }) {
//                Text("确定")
//                    .padding(10)
//                    .background(Color.blue)
//                foregroundColor(.white)
//                    .cornerRadius(13)
//            }
//        }
    }
}

struct ContentFiveView_Previews: PreviewProvider {
    static var previews: some View {
        ContentFiveView()
    }
}
