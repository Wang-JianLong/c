// signed 和 unsigned
#include <stdio.h>
#include <math.h>
int main()
{
	unsigned int a;
	a = 2;
	printf("%d\n",a);
	printf("%u\n",a);
	
	int powint = pow(2,32)-1;
	printf("powint = %d\n",	powint );
	return 0;
}

/*
signed类型的储存单元中左边第一位表示符号位。
	- 0 正数
	- 1 负数 此符号位可以参与计算
一个32位 (4个字节 一个字节八个比特位)的整型变量，除去符号位 只有32个比特位

补码 
	- 正数的补码就是该数字的二进制形式
	- 负数
		1. 获取该值的绝对值的二进制
		2. 按位取反(除了符号位)  0->1  1->0 
		3. 然后将值加一
[取值范围](https://blog.csdn.net/qq_52911954/article/details/125528446)
		
*/
