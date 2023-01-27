#include <stdio.h>

int main(void)
{
		int i = 100;
		{	
				// 两个i处于不同的作用域
				int i = 10;
				{
						int i = 1;
						printf("%d\n",i);
				}
				{
						int i = 0;
						printf("%d\n",i);
				}
				printf("%d\n",i);
		}
    	printf("%d\n",i);
		return 0;
}
 
