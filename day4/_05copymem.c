#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
		// void* memcpy(void* s, const void* ct, size_t n) //将字符串ct中的n个字符拷贝到s中。返回s。
		int *p1 = NULL;
		int *p2 = NULL;
		p1 = (int *)malloc(sizeof(int)*4);
		p2 = (int *)calloc(5,sizeof(int));
		if (p1 == NULL || p2 == NULL)
		{
				printf("%s\n","failed");
		}
		p1[0] = 1;
		p1[1] = 2;
		p1[2] = 3;
		p1[3] = 4;
		
		memcpy(p2,p1,sizeof(int) * 4);
		p2[4] = 5;	
		for (int i = 0; i < 5; i++)
		{
				printf("%d  ",p2[i]);
		}	
		putchar('\n');

		free(p1);
		free(p2);
		return 0;
}
