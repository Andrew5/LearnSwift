//
//  ContentTwoView.swift
//  swiftFirst
//
//  Created by jabraknight on 2021/6/20.
//

import SwiftUI

struct ContentTwoView: View {
    @State private var zoomed: Bool = false
    
    var body: some View {
        ZStack(alignment: self.zoomed ? .top : .topTrailing) {
            Image("body")
                .resizable()
                .aspectRatio(contentMode: self.zoomed ? .fill : .fit)
                .navigationBarTitle(Text("测试计划"), displayMode: .inline)
                .onTapGesture {
                    withAnimation {self.zoomed.toggle()}
                }
            Image("椭圆-10")
                .resizable()
                .frame(width: 50, height: 50, alignment: .center)
                .padding(.all,10)
        }
    }
}

struct ContentTwoView_Previews: PreviewProvider {
    static var previews: some View {
        ContentTwoView()
    }
}
