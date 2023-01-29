// 位域 位段 位字段
#include <stdio.h>
/*
一个字节 
|1|1|1|0|1|0|1|1|
|   a   | b | c |

c 语言并没有规定一个字节的尺寸 （圆滑
定义 可寻址的数据存储单位，其尺寸必须可以容纳运行环境的基本字符集的任何成员
*/

int main()
{
		struct Test 
		{
				unsigned int a:1;
				unsigned int b:1;
				unsigned int c:2;
				// 位域成员可以没有名称 只要给出数据类型和位宽即可
				// 一般强迫症塞位置
				// 位域是字节的一部分 无法取址运算
		};
		
		struct Test test;
		test.a = 0;
		test.b = 1;
		test.c = 2;
		
		printf("a %d \n",test.a);	
		printf("b %d \n",test.b);	
		printf("c %d \n",test.c);	

		//printf("a addr %d \n",&test.a);	
		//printf("b addr %d \n",&test.b);	
		//printf("c addr %d \n",&test.c);	

		printf("sizeof %d\n",sizeof(test)); // 4
		return 0;
}
