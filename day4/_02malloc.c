#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p  = NULL;
	int num;
	printf("请输入待录入整数的个数:");
	scanf("%d",&num);

	p = (int *)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++)
	{
		printf("请输入第%d个要录入的整数:",i+1);
		scanf("%d",&p[i]);
	}
	printf("输入的整数依次为:");
	for (int i = 0; i < num; i++)
	{
			printf("%d  ",p[i]);
	}
	putchar('\n');

	free(p);
	return 0;
}
