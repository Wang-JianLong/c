// 左值就是一个可被存储的单元，右值就是一个可被读取的数据。
// 左值用 location value 更好理解 是用来装东西的可改变的
// 左值还是必须可以被改变的 https://fishc.com.cn/thread-69833-1-1.html

#include <stdio.h>

int main()
{
		char str[] = "I LOVE YOU"; // 注意声明方式不是 char *str
		int count = 0;
		// 赋值 出一个左值
		char *target = str;

		//while (*str++ != '\0')// 这样写编译器会报错 因为不符合 左值定义
		// *str 是一个值 *str++ 就好比 0x122e++  常量是不可自加的  赋值 给一个变量之后 让变量加加
		//_4poninter_strlen.c:13:15: error: lvalue required as increment operand
		int i = 0;
		// 优化 不让指向野指针
		while (*(target+i) != '\0')
		{
				count++;
				i++;
		}
		printf("count = %d\n",count);
		return 0;
}
// 数组名只是一个地址  而指针是一个左值
