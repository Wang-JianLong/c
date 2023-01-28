#include <stdio.h>
// 258二进制为100000010，内存地址由高位向低位覆盖，即a处留下的是00000001=1，b处留下的是00000010=2
int main(void)
{
		char a = 0,b = 0;
		int *p = (int *)&b;
		*p = 258;
		printf("a = %d, b = %d \n",a,b);
		return 0;
}
