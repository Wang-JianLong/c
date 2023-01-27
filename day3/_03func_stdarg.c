#include <stdio.h>	
#include <stdarg.h>	

int sum(int a,...);
// a 代表参数的数量
int sum(int a,...)
{
		int i,sum = 0;
		va_list vap; // 定义列表
		va_start(vap,a); // 初始化
		for (i = 0; i < a;i++)
		{
				sum += va_arg(vap,int);// 根据类型取值
		}

		va_end(vap);// 结束列表
		return sum;
}

int main()
{
		printf("%d\n",sum(10,1,2,3,4,5,6,7,8,9,10));
		return 0;
}
