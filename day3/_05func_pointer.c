// 函数指针
// 指针函数 int *p();   函数指针  int (*p)();
#include <stdio.h>

int square(int x);
	
int square(int x)
{
		return x*x; 
}

int main()
{
		int sum;
		int (*fp)(int);
		// 被注释的写法都可以  括号写提高可读性 知道这是一个函数指针
		printf("请输入一个整数:");
		scanf("%d",&sum);
		// 指针指向该函数
		// 参数返回值相同
		//fp = square;
		fp = &square;
		//printf(" %d \n",(*fp)(sum));
		printf(" %d \n",fp(sum));
		return 0;
}
