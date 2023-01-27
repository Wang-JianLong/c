// 将函数指针作为方法参数
#include <stdio.h>
int sub(int a,int b);
int add(int a,int b);
int calc(int (*fp)(int,int),
				int a, int b);

int sub(int a, int b)
{
		return a - b;
}

int add(int a, int b)
{
		return a + b;
}


int calc(int (*fp)(int,int),
				int a, int b)
{
		//return fp(a,b);
		return (*fp)(a,b);
}

int main()
{
		//int result = calc(add,1,2);
		int result = calc(&add,1,2);
		printf("%d\n",result);
		return 0;
}
