//
//  ContentFourView.swift
//  swiftFirst
//
//  Created by jabraknight on 2021/6/20.
//

import SwiftUI

struct HeaderView: View {
    //绑定类型
    @Binding var title: String
    var counter: Int = 0
    
    init(title: Binding<String>) {
    self._title = title
        let sentence = self._title.wrappedValue
        self.counter = sentence.count
    }
    var body: some View {
        Text(self.title + "/\(self.counter)")
    }
}
struct ContentFourView: View {
    @State private var title: String = "小码视频测试"
    var body: some View {
        VStack {
            Text(self.title)
                .font(.title)
            HeaderView(title: self.$title)
            Button(action: {
                self.title  = "小码教学视频"
            }) {
                Text("确定")
                    .font(.title)
                    .padding(10)
                    .background(Color.green)
                
                    .foregroundColor(.white)
                    .cornerRadius(13)
            }
        }
    }
}

struct ContentFourView_Previews: PreviewProvider {
    static var previews: some View {
        ContentFourView()
    }
}
