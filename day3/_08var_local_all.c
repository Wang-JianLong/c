// 就近原则  同名局部变量会屏蔽全局变量
#include <stdio.h>
// 不要大量使用全部变量
/*
	- 占用内存
	- 污染命名空间
	- 提高耦合性
*/
void func();
void func()
{
		// 区分不同编译器 需要注明类型 不然警告 extern count; 
		extern int count; // 在这里告诉编译器 在后面会声明
		count++;
}

int count = 6; // 在使用该变量的函数后面才声明 会导致编译器报错

int main()
{
		func();
		printf("%d\n",count);
		return 0;
}
