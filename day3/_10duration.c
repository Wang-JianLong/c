#include <stdio.h>
/*
具有文件作用域的变量处于静态存储区  函数 全局变量等 直到程序结束释放空间 
具有代码块作用域的变量属于自动存储区  在代码块结束时释放

储存类型

-- auto 代码块声明的变量默认类型
-- register 寄存器  被此修饰的变量有可能被存放于CPU的寄存器中 代码块作用域 自动存储期 空链接属性 无法通过取址运算符获得地址
-- static 连接属性变为internal 单文件共享  可以将局部变量修饰为静态局部变量修饰后属于 静态存储区
-- extran  对于具有文件作用域的标识符，extern加不加都可以
-- typedef 定义别名


int i = xxx; 在哪里都是定义
int i; 在局部变量为定义 全部变量为声明
https://www.zhihu.com/question/489049026
 */
typedef int ii;
void func(void);
int main()
{
		//register int c = 0;
		//printf("%p\n",&c);	

		for (int i = 0; i < 10; i++)
		{
			func(); // 会打印1~10 而不是传统的每次清空为1 	
		}
		return 0;
}

void func(void)
{
		static int count = 0;
		count++;
		printf("%d\n",count);
}


