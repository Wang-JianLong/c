#include <stdio.h>
// 在C语言中 非0值 就是TRUE 0就是FALSE
int main()
{
	printf("请输入您的密码：");
	int i;
	scanf("%d",&i);
	if ( i == 123456)
	{
		printf("登录成功\n");
	}else if (i == 111111){
		printf("普通用户登录成功\n");
	}else {
		printf("登录失败!!!\n");
	}
	return 0;
}

int luoji()
{
	int a,b;
	a = 3;
	b = 3;
	(a = 0) && (b = 5);
	printf("a = %d,b = %d \n",a,b);
	(a = 1) || (b = 5);
	printf("a = %d,b = %d \n",a,b);
	return 0;
}
