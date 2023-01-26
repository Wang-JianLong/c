#include <stdio.h>

int main()
{
	for (int i = 1; i <= 9; i ++)
	{
		for (int j = 1; j <= i; j++)
		{
			// ％-2d说明数字宽度为2，向左对齐，不够2在后面补空格，大于二则全部打印不截断。
			printf(" %d * %d = %-2d  ",j,i,j*i);
		}	
		printf("\n");
	}	
	return 0;
}


