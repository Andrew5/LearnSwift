//
//  ContentSixView.swift
//  swiftFirst
//
//  Created by jabraknight on 2021/6/20.
// 观察者数据绑定
// 观察的数据绑定  @ObservableObject @Published @ObservedObject

import SwiftUI

struct View1: View {
    @Binding var selected: Int
    var body: some View {
        VStack {
            Text("主页").font(.title)
            Button("Go To 设置") {
                self.selected = 20
            }
        }
    }
}
struct View2: View {
    @Binding var selected: Int
    var body: some View {
        VStack {
            Text("设置").font(.title)
            Button("Go To 主页") {
                self.selected = 10
            }
        }
    }
}


struct MyButtonStyle: ButtonStyle {
    func makeBody(configuration: Configuration) -> some View {
        let isPressed = configuration.isPressed
        return configuration.label
            .padding(20)
            .border(Color.green, width: 5)
            .background(isPressed ? Color.green: Color.white)
            .scaleEffect(isPressed ? 1.2 : 1.0)
    }
}

struct ContentSixView: View {
    @State private var selectedViewIndex: Int = 10

    ///被观察的对象
    @ObservedObject var appData: AppData
//   @EnvironmentObject var appData: AppData
    var body: some View {
        VStack {
            Text(self.appData.AppTitle)
                .bold()
                .font(.largeTitle)
            Text(self.appData.Author)
                .bold()
                .font(.title)
                .foregroundColor(Color.gray)
            
            Button(action: {
                self.appData.Author = "小码"
            }) {
                Text("各部分讯")
                    .padding()
                    .font(.subheadline)
                    .background(Color.green)
                    .foregroundColor(Color.white)
                    .cornerRadius(15)
            }
            
            Button(action: {
                      }, label: {
                          Text("MyButtonStyle")
                              .font(.title)
                      })
                      .buttonStyle(MyButtonStyle())
            
            TabView(selection: self.$selectedViewIndex) {
                       View1(selected: self.$selectedViewIndex)
                           .tabItem({
                               Image(systemName: "house")
                               Text("主页")
                           }).tag(10)
                       View2(selected: self.$selectedViewIndex)
                           .tabItem({
                               Image(systemName: "gear")
                               Text("设置")
                           }).tag(20)
                   }
                   .font(.title)
        }
    }
}

struct ContentSixView_Previews: PreviewProvider {
    static var previews: some View {
        ContentSixView(appData: AppData())
//        Group {
//            ContentSixView()
//                .environmentObject(AppData())
//        }

    }
}
