#include <stdio.h>

int main()
{
		// int sum = 100;
		// int *p = &sum;
		// int **pp = &p;
		// printf("%d\n",**pp);
		char *cBooks[3] = {
			"C Primer",
			"C 专家编程",
			"C 程序设计"	
		};
		// 指针字符串
		char **wjlbook = &cBooks[0];
		printf("wjlbook %s\n",*wjlbook);

		char **wjlLoves[2];
		wjlLoves[0] = &cBooks[0];
		wjlLoves[1] = &cBooks[1];
		printf("wjlLoves[0]: %s\n",*wjlLoves[0]);
		printf("wjlLoves[1]: %s\n",*wjlLoves[1]);
		return 0;
}
