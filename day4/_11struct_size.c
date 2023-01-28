#include <stdio.h>
// 编译器对结构体的成员进行了内存对齐 让cpu进行更快的读取
// 对齐前    a -> 一个字节  b ->  四个字节  c -> 一个字节 
// 对齐后    a -> 四个个字节  b ->  四个字节  c -> 四个字节 
/*
对齐前	|a|b|b|b|b|c| 
对齐后	|a| | | |b|b|b|b|c| | | |
调整后  |a|c| | |b|b|b|b|
*/
int main()
{
		struct A {
				char a;
				int b;
				char c;
		} a = {'x',520,'0'};

		printf("%d\n",sizeof(a)); // 12
		return 0;
}
