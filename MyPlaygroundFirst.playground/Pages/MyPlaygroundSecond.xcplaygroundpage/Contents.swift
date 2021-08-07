//: [Previous](@previous)

import Foundation

var str = "Hello, playground"
//生成语法树：swift -dump-ast main.swift
//生成最简洁的SIL代码：swift -emit-sit main.swift
//生成LLVM IR代码：swift -emitir-ir main
//AT&T汇编->iOS模拟器
//ARM汇编->iOS真机
///常见汇编
//项目           AT&T                                                   Inter                                             说明
//寄存器命名     %rax                                                   rax
//操作数顺序     movq %rax %rdx                                         mov rdx,rax                                 将rax的值复制给rax
//常数、立即数   movq $3 %rax   movq $0x10 %rax                          mov rax,3    mov rax,0x10                   将3赋值给rax,将ox10赋值给rax
//内存赋值       movq $0xa 0x1ff7(%rip)                                 mov qword ptr [rip+0x1ff7],0xa              将oxa赋值给地址为rip+0x1ff7的内存空间
//取内存赋值    leaq -0x18(%rbp) %rax                                   lea rax,[rbp-0x18]                          将rbp-0x18这个地址赋值给rax
//jmp指令       jmp *%rdx   jmp 0x4001002   jmp *(%rax)                jmp rdx   jmp 0x4001002    jmp[rax]         call和jmp写法类似
//操作数长度    movl %eax %edx   movb $0x10 %al  leaw 0x10(%dx) %ax     mov edx,eax  mov al,0x10   lea axx,[dx + 0x10]  说明:  b=byte(8-bit) s=short(16-bit integer or 32-bit floating point)  w=word(16-bit)  l=long(32-bit integer or 64-bit floating point)   q=quad(64-bit)   t=ten bytes(80-biit floating point)
//: [Next](@next)

//: [上一页](@previous)

//: [下一页](@next)
