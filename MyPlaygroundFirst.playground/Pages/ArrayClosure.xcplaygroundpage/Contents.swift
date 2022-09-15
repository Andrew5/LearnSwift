//: [Previous](@previous)

import Foundation

//map闭包函数的功能就是对数组中的每一项进行遍历，然后通过映射规则对数组中的每一项进行处理，最终的返回结果是处理后的数组（以一个新的数组形式出现）。当然，原来数组中的元素值是保持不变
let family = [1,2,3,4,5]
var familyMap = family.map{(item:Int) -> String in
    return "结果是\(item)"
}
family
familyMap
let nums = [1,2,3,4,5]
let newNums = nums.map { (num) -> Int in
    let a = num * num
    print("结果是\(a)")
    return a
}



//可选的可选参数使用起来非常混乱，但这就是 flatMap() 出现的地方：它不仅执行转换，随后将返回的内容展平，因此“可选的可选参数”变为“可选的”。
//它会将双重可选值变为单个可选值。最终，我们不在乎外部可选或内部可选是否存在，仅在乎其中是否存在值
//flatMap 会降低数组维度，过滤nil值：但是每次操作只执行一种功能，优先执行过滤 nil的操作
//在没有明确指定原数组为:[Any]的情况下，会将 [String] 处理为 [String.Element]，里面的元素由 String 降为 Character
let number: String? = "开始97"
// 使用 flatMap 展平了一次，result 为 Int?
let result = number.flatMap { Int($0) }//降低数组维度
let arr = [[[1,1,1],2],[3,4], nil, nil]
// 优先处理nil值
let arr1 = arr.compactMap{ $0 }
let arr2 = arr.compactMap{ $0 }.flatMap{ $0 }
print(arr1, arr2, separator: "\n")
// [[[1, 1, 1], 2], [3, 4]]
// [[1, 1, 1], 2, 3, 4]

// 转化为 [Int?] 因为内部元素可能不符合转化规则
let strings = ["1", "2", "fish"]
let a = strings.map {Int($0)}
let b = strings.compactMap {Int($0)}
print(a)
print(b)
// [Optional(1), Optional(2), nil]
// [1,2]

//初始化一个数组如下
 var array1 : [String] = [String]()
// 在声明一个Array类型的时候可以使用下列的语句之一
var stuArray1:Array<String>
var stuArray2: [String]
// 声明的数组需要进行初始化才能使用，数组类型往往是在声明的同时进行初始化的
// 定义时直接初始化
//var arrayarray = ["why", "lnj", "lmj"]
// 先定义,后初始化
var arrayarray : Array<String>
arrayarray = ["why", "lnj", "lmj"]

let level = ["A", "B", "C"]
let map = level.map{$0}
let flatMap = level.flatMap{$0}
let compactMap = level.compactMap{$0}

//Filter就是一个漏勺，就是用来过滤符合条件的数据的,而在数组中的Filter用来过滤数组中的数据，并且返回新的数组，新的数组中存放的就是符合条件的数据
let heightOfPerson = [170,180,190,200]
let heightOfPersonFilter = heightOfPerson.filter{(height:Int) -> Bool in
    return height > 180
}
heightOfPerson
heightOfPersonFilter
let numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]
//筛选偶数值
let evens = numbers.filter{$0 % 2 == 0} //等同于
let even = numbers.filter{(num) -> Bool in
      num % 2 == 0
}
numbers
evens
even
let array = [1,2,3,4]
let filteredArray = array.filter{$0 > 2}//$0代表闭包的第n+1个参数（这里代表数组中的元素）
print(filteredArray)//[3, 4]
// filter方法参数是一个闭包，闭包返回值是Bool类型，当满足筛选条件的时闭包才有返回值，filter返回值是一个<T>的泛型数组
let filteredArray1 = array.filter{(newParams) -> Bool in
    newParams % 2 == 0
}
filteredArray1
// 👆等同于👇
var tempArr = [Int]()
for s in array {
    if s > 2 {
    tempArr.append(s)
    }
}
print(tempArr)
//筛选奇数值
let odds = numbers.filter{$0 % 2 == 1} //等同于
let odd = numbers.filter{(num) -> Bool in
      num % 2 == 1
}
odd
odds

//在swift的数组中使用Reduce闭包函数来合并items, 并且合并后的Value,递归式地将序列中的元素合并为一个元素
//Reduce 的基础思想是将一个序列转换为一个不同类型的数据，期间通过一个累加器（Accumulator）来持续记录递增状态
//$0 代表累加器，初值等于 initial
//$1 代表遍历数组得到的一个元素
let salary = [1000,2000,3000,4000,5000,6000]
let sumSalary = salary.reduce(0){(sumSalaryTemp:Int,salaryItems:Int) -> Int in
    return sumSalaryTemp + salaryItems
}
salary
sumSalary

var languages = ["Swift", "OC", "java"]
let r = languages.reduce("_", {$0 + $1}) //等同于
let r1 = languages.reduce("_") { (result, next) -> String in
    print("result: \(result)")
    print("next: \(next)")
    return result + next
}
r
r1
//仅传入计算符号 "+" "*" 作为一个 combinator 函数是有效的
[0, 1, 2, 3, 4].reduce(0, +)
[1, 2, 3, 4].reduce(1, *)
//反转数组
[1, 2, 3, 4, 5].reduce([Int](), { [$1] + $0 })

// 初始序列（即 [0,1,2,3,4]）被重复访问了三次之多
[0, 1, 2, 3, 4].map({ $0 + 3}).filter({ $0 % 2 == 0}).reduce(0, +)

// 可用 reduce 完全替换实现，极大提高执行效率：
[0, 1, 2, 3, 4].reduce(0, { (ac, r) in
    if (r + 3) % 2 == 0 {
        return ac + r + 3
    } else {
        return ac
    }
})

// for-loop 版本
var ux = 0
for i in 0...100000 {
    if (i + 3) % 2 == 0 {
      ux += (i + 3)
    }
}

// 初始值为 Int.max，传入闭包为 min：求两个数的最小值
// min 闭包传入两个参数：1. 初始值 2. 遍历列表时的当前元素
// 倘若当前元素小于初始值，初始值就会替换成当前元素
// 示意写法： initial = min(initial, elem)
[1, 5, 2, 9, 4].reduce(Int.max, min)

//unique：剔除列表中重复的元素。最好的解决方式是使用集合（Set）
[1, 2, 5, 1, 7].reduce([], { (a: [Int], b: Int) -> [Int] in
    if a.contains(b) {
        return a
    } else {
        return a + [b]
    }
})
// prints: 1, 2, 5, 7

//sort
let Arr = [13, 45, 27, 80, 22, 53]
// 完整
let sort1 = Arr.sorted { (a: Int, b: Int) -> Bool in
    return a < b
}
// 简略
let sort2 = Arr.sorted { $0 < $1 }
// 极简
let sort3 = Arr.sorted(by: <)

//数组去重
extension Array {
    // 去重
    //该函数的参数filter是一个带返回值的闭包，传入模型Element，返回一个E类型
    func filterDuplicates<E: Equatable>(_ filter: (Element) -> E) -> [Element] {
        var result = [Element]()
        for value in self {
            //调用filter，获得需要用来判断的属性E
            let key = filter(value)
            //此处利用map函数 来将value类型数组转换成E类型的数组，以此来判断key是否已经存在，如不存在则将value添加进result
            if !result.map({filter($0)}).contains(key) {//需要遵循Equatable,才能使用数组的contains函数来判断是否已经存在
                result.append(value)
            }
        }
        return result
    }
}
let arrayTest = [1,2,2,3,4,3]
print("元素\(arrayTest[1])")
arrayTest.filterDuplicates({$0})//闭包的第一个参数


//总结
//map 和 compactMap 返回的元素不改变原先的类型
//在嵌套 map 的情况下，flatMap 会将 String 降维至 Character
//map闭包不能return nil，而flatmap可以
//在不是嵌套 map 的情况下
//若原序列是 String 序列，不指定类型或指定为[String]：flatMap 将元素处理成 Character
//指定[Any]类型，flatMap 与 map、compactMap 一致，不改变原先类型。

//: [Next](@next)
