#include <stdio.h>
// const int * p = ...
// 常量指针所指向的地址是可以修改的 ，
// 但是 通过常量指针解指针 修改地址所 指向变量的值是不允许的


// int * const p = ...
// 如果想要让指针不可修改 可以让 让 const 关键字换位置
// 那么它所指向的值就可以通过解引用修改了
// 如果指向的是 const 修饰的变量 那么也不可以通过解引用修改

// 两者结合   const int * const p = &...
int maina()
{
		const int num = 100;
		int a = 10;	
		// 禁止修改的
		const int *p = &num;
		//*p = 101;
		p = &a;
		//*p = 11;
		printf("%d\n",*p);
		return 0;
}

int main()
{
		const int num = 100;
		int a = 10;	
		int * const p = &a;
		// 禁止修改指向地址
		// p = &a;
		*p = 11;
		printf("%d\n",*p);
		printf("%d\n",a);
		return 0;
}
