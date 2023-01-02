//
//  ContentThreeView.swift
//  swiftFirst
//
//  Created by jabraknight on 2021/6/20.
//

import SwiftUI

struct ContentThreeView: View {
    ///定义绑定数据
    //单项绑定
    @State private var textInput: String = ""
    @State private var title: String = "小马"

    var body: some View {
        VStack {
            ///绑定标题数据
            Text(self.title)
                .font(.title)
            //$ 双向绑定 数据结构
            TextField("place input",text: self.$textInput)
                .font(.title)
                .frame(width: UIScreen.main.bounds
                        .width - 20, height: 50, alignment: .center)
                .padding(10)
                .textFieldStyle(RoundedBorderTextFieldStyle())
            Button(action: {
                ///行为
                self.title = self.textInput
            }, label: {
                Text("确定")
                    .font(.largeTitle)
                    .padding()
                    .background(Color.blue)
                    .foregroundColor(.white)
                    .cornerRadius(15)
            })
        }
    }
    
}

struct ContentThreeView_Previews: PreviewProvider {
    static var previews: some View {
        ContentThreeView()
    }
}
