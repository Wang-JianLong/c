
# C语言
> 注意 只会记录重要部分
* day1 数据类型与分支结构
* day2 数组与指针
* day3 函数、作用域、快排
* day4 内存、堆栈、宏、结构体
* day5 typedef、枚举、共用体、字节
* day6 文件IO、ERROR、缓冲区 
## Hello World

创建 helloworld.c
```java
#include <stdio.h>

int main(){
	printf("Hello World\n");
	return 0;
}
```

编译 gcc helloworld.c -o test  
运行 ./test 

## 数据类型

* 数据类型
  - 基本类型
    - 整数
    - 浮点
    - 字符
    - 布尔
    - 枚举
  - 指针类型
  - 构造类型
    - 数组
    - 结构
    - 联合
  - 空类型
