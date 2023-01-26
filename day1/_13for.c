#include <stdio.h>

int main()
{
	// C99 之后支持表达式1间定义变量  编译是添加 -std=c99
	int count;
	for (count = 0; count < 10; count ++)
	{
		printf("count %d \n",count);
	}
	// 分号之间的可以用逗号隔开 执行多个表达式
	int i,j;
	for (i = 0,j = 10; i <= j; i ++,j--)
	{
		printf("i =  %d, j = %d \n",i,j);
	}
	return 0;
}
