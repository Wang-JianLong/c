#include <stdio.h>
#include <stdlib.h>

// void *calloc(size_t m,size_t size);
// 动态申请m个长度为size的连续内存空间  初始化为0
int main()
{
		char *s = NULL;
		s = (char *)calloc(5,sizeof(char));
		if (s == NULL)
		{
				printf("申请失败!!");
				exit(1);
		}
		s[0] = 'a';
		s[1] = 'b';
		s[2] = 'c';
		s[3] = 'd';
//		s[4] = '\0';
		printf("%s\n",s);
		free(s);
		return 0;
}
