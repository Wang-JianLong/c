#include <stdio.h>
// #define NULL ((void *)0)
// 在多数操作系统中  地址0是不被使用的地址 意味着该指针不指向任何东西
int main()
{
		int *p1;
		int *p2 = NULL;	
		printf("%d\n",*p1);
		printf("%d\n",*p2);
		return 0;
}


