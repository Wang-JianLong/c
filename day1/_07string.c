#include <stdio.h>

int main()
{
	//char name[6] = {'w','j','l','n','b','\0'};
	//char name[6] = "wjlnb\0";
	// 定义过程中编译器自动计算
	char name[] = "wjlnb\0";
	printf("%s\n",name);
	return 0;
}
