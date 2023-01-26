#include <stdio.h>
#include <string.h>

int main()
{
		// 根据数组就是指针的形式 可以这样定义字符串
		char *str = "I LOVE YOU!"; 
		int i,len;
		len = strlen(str);
		for (i = 0; i< len;i++)
		{
				printf("%c",str[i]);
		}
		printf("\n");
		return 0;
}
