# c语言内存布局规律 
[由高到低]
		局部变量
		动态申请的内存空间
		全局变量【未初始化】
		静态变量【未初始化】
		静态变量【初始化】
		全局变量【初始化】
		字符串常量
		函数

---------------------------------
高地址   -> 命令行参数和环境变量
---------------------------------
		栈
---------------------------------
		 -> 未使用的内存空间
---------------------------------
		堆
---------------------------------
		bss段
---------------------------------
		数据段
---------------------------------
低地址	代码段	
---------------------------------

* 代码段
> Text segment  通常是指用来存放程序执行代码的一块内存区域。
这部分区域的大小在程序运行前就已经确定，并且内存区域通常属于只读。
在代码段中 也有可能包含一些只有只读的常数变量，例如字符串常量等
* 数据段 
> Initialized data segment 通常用来存放已经初始化的全局变量和局部静态变量
* bss 段
> Bss segment 通常是指用来存放程序中未初始化的全局变量的一块内存区域 BSS是英文
Started by Symbol 的简称，这个区段中的数据在程序运行前将被自动初始化为0
* 堆
> 是用于存放进程运行中被动态分配的内存段，它的大小并不固定，可动态扩展或缩小。当进程调用
malloc等函数分配内存时，新分配的内存就被添加到堆上；当利用free等函数释放内存时，被释放的内存
从堆中被剔除。



# 堆和栈的区别
* 申请方式
	- 堆手动
	- 栈自动
* 释放如上
* 生存周期
	- 堆 由动态内存申请到程序员主动释放 不同函数均可访问
	- 栈 由函数调用开始到函数结束返回结束 函数之间的局部变量不能互相访问
* 发展方向
	- 堆 和其他区段一样 都是由低地址向高地址发展
	- 栈 是由高地址向低地址发展
    - 栈向什么方向增长取决于操作系统与CPU的组合---来自知乎