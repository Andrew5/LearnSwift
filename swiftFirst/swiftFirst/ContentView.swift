//
//  ContentView.swift
//  swiftFirst
//
//  Created by jabraknight on 2021/6/20.
//

import SwiftUI
///创建自定义UI
struct StreetRow: View {
    var name: String
    var street: Street
    var body: some View {
        Text("The street name is \(street.name)")
    }

}

struct ListViewDemo: View {
    ///@State:数据绑定
    @State private var streets = [Street(name: "The Lodon Street"), Street(name: "The Joe's Street"), Street(name: "The House Street"),Street(name: "The name Apple"),Street(name: "The name banne")]

    var body: some View {
//        List{
//            //当然可以有多种不同的Row哦
//            StreetRow(name: "The Lodon Street")
//            StreetRow(name: "The Joe's Street")
//            StreetRow(name: "The House Street")
//        }
        
//        let street1 = Street(name: "The Lodon Street")
//        let street2 = Street(name: "The Joe's Street")
//        let street3 = Street(name: "The House Street")
//        //数据数组
//        let streets = [street1, street2, street3]
//        return List(streets){ street in
//            StreetRow(name: "is", street: street1)
//        }
        
//      左滑
        func deleteRow(at offsets:IndexSet) {
            streets.remove(atOffsets:offsets)
        }
//        return List(streets){ street in
//            StreetRow(name: "is", street: streets)
//        }
        return List{
            ForEach(streets, id: \.self) { street in
                StreetRow(name: "1", street: street)
            }.onDelete(perform: deleteRow)
        }
    }
    
}
///数据模型
struct Street: Identifiable,Hashable {
    var id = UUID()
    var name: String
}

struct ContentView: View {
    @State private var zoomed:Bool = false
    
    var body: some View {
            NavigationView {
                List(0 ..< 20) { item in
                    NavigationLink(destination: Text("Details")){
                    Image(systemName: "heart")
                        .resizable()
                        .aspectRatio(contentMode: self.zoomed ? .fill : .fit)
                        .foregroundColor(.red)
                        .frame(width: 50, height: 50, alignment: .center)
                        .onTapGesture {
                            self.zoomed
                                .toggle()
                        }
                    VStack {
                        VStack(alignment: .leading, spacing: 0 ) {
                            Text("测试").foregroundColor(.blue)
                            Text("Hello, world!")
                                .font(.subheadline).foregroundColor(.blue)
                            Text(/*@START_MENU_TOKEN@*/"Placeholder"/*@END_MENU_TOKEN@*/)
                        }
                    }
                }
            }.navigationBarTitle(Text("Navigation Bar")
                                    .fontWeight(.medium)
                                    .foregroundColor(Color.black))
        }
    }
}

struct ContentView_Previews: PreviewProvider {
    @available(iOS 13.0.0, *)
    static var previews: some View {
        NavigationView{
//            ContentView()
            ListViewDemo()
        }
    }
}
