#include <stdio.h>
// 数组在main 中定义 size占 20个字节 但是作为函数参数
// 在该函数中只会将第一个内存地址传进去 这就是优化
void getarray_size(int b[5]);

void getarray_size(int b[5])
{
		printf("b size %d\n",sizeof(*b));
}

int  main()
{
		int a[5] = {1,2,3,4,5};
		printf("a size %d\n",sizeof(a));
		getarray_size(a);
		return 0;
}
