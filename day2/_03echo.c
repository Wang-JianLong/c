#include <stdio.h>

int main()
{
		int n,i;
		printf("请输入字符的个数:");
		scanf("%d",&n);

		char str[n + 1];
		printf("请开始输入字符:");
		getchar();// 读取掉第七行在控制台缓冲区的 "\n"	

		for ( i = 0; i < n; i ++){
				scanf("%c",&str[i]);
		}

		str[n] = '\n';

		printf("您输入的字符是%s\n",str);
		return 0;
}
