#include <stdio.h>

int main()
{
	printf("请输入英文字符\n");
	int count = 0;
	while (getchar() != '\n'){
		count++;
	}
	
	printf("count = %d\n",count);
	return 0;
}
