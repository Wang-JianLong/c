#include <stdio.h>
int main()
{
	char ch;
	printf("请输入你的评级：");
	scanf("%c",&ch);
	switch(ch){
		case 'A' : printf("您的评级是在九十分以上的A!!!\n"); break;
		case 'B' : printf("您的评级是在八十分以上的A!!!\n"); break;
		default: printf("请输入有效成绩!!!\n"); break;
	}
	return 0;
}
