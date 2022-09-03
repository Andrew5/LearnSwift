//: ### 【【ChaoCode】 Swift 中級 6：Extension 實作作業

/*: 1. 新增以下兩個功能到 String 中：
 * 名為「trimmed」的方法，功能是回傳把前後的空白和換行都移除的 String。
 * 新增可以放入 ClosedRange<Int> 做為 Index 的 subscript，只需設定 get，回傳對應位置的 String，如超過範圍則回傳一個空的 String。你可以假設 ClosedRange 中不會有負數。
 ```例如："ABCD"[1...2] 應回傳 "BC"。```
 */
extension String {
    func trimmed() -> String {
        self.trimmingCharacters(in: .whitespacesAndNewlines)
    }
    
    subscript(_ range: ClosedRange<Int>) -> String {
        if range.lowerBound > self.count - 1 { return "" }
        
        var string = ""
        var currentIndex = 0
        for character in self {
            if range.contains(currentIndex) {
                string += String(character)
            }
            
            currentIndex += 1
            if currentIndex > range.upperBound { break }
        }
        
        return string
    }
}

// ✋ 下面這行為測試用，請勿修改，並且在此行上方完成這題。
stringExtensionCheck(trimmed: { $0.trimmed() }) { $0[$1] }

/*: 2. 為 Collection 新增一個名為「prettyPrint」的方法，功能是印出每一個 Element 並用「、」分隔。
 ```例如：[1,2,3,4] 應印出 "1、2、3、4"。```
 */

extension Collection{
    func prettyPrint() {
        print(self.map { String(describing: $0) }
                  .joined(separator: "、"))
    }
}

// 👇 下面這些提供你測試，請自行檢查印出來的結果。
print("-------------------------")
"我吃飽了".prettyPrint()
Set([1, 2, 3, 4]).prettyPrint()
["貓咪", "狗狗", "兔兔"].prettyPrint()
["貓咪": 3, "狗狗": 5, "兔兔": 10].prettyPrint()
[(), ()].prettyPrint()

/*: 3. 為 Element 有 conforms to Hashable 的 Array 新增名為「unique」的方法。功能是只留下沒有重複的值（需維持原本順序）。
    * 假如 Element 是 String 的話，必須把 String trimmed 後判斷是否為空，如果是空的話也不留下。（trimmed 指的是第一題完成的方法）
    ```
        ["abc", "abc", ""].unique() 應回傳 ["abc"]。
        [2, 3, 2, 1].unique() 應回傳 [2, 3, 1]。
    ```
 */
extension Array where Element: Hashable {
    func unique() -> Self {
        var seenMap = [Element: Bool]()
        return filter { seenMap.updateValue(true, forKey: $0) == nil }
    }
}

extension Array where Element == String {
    func unique() -> Self {
        var seenMap = [Element: Bool]()
        return self.map { $0.trimmed() }
                   .filter {
                       seenMap.updateValue(true, forKey: $0) == nil && !$0.isEmpty
                   }
    }
}

// ✋ 下面內容為測試用，請勿修改，並且在此行上方完成這題。
arrayExtensionCheck(uniqueString: { $0.unique() }) { $0.unique() }
