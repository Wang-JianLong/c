// 内联函数 inline 关键字修饰
#include <stdio.h>
int square(int);
// 编译时添加参数 gcc file  -O 才会优化  
// 现在的编译器会自动优化为内联函数
inline int square(int x)
{
		return x * x;
}

int main()
{
		int i = 1;
		while(i <= 100)
		{
			printf("%d的平方是%d\n",i - 1,square(i++));
		}
		return 0;
}
