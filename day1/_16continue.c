#include <stdio.h>
// 只会输出不能被二整除的数字
int main()
{
		for (int i = 0; i <= 100; i ++ )
		{
				if ( i % 2 == 0)
				{
						continue;
				}
				else
				{
						printf(" 输出 %d \n",i);
				}
		}
		return 0;	
}
