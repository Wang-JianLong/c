// fgetc 和 getc  
/*
	将读取到的unsigned char 类型转换为int 类型并返回
    读取文件遇到错误返回EOF(-1)'
    * fget 是函数
	* getc 是宏实现的
	- 宏会产生较大的代码量 但是避免了函数调用的堆栈操作，所以速度比较快
	- 由于getc是宏实现的，对其参数可能有不止一次的调用 所以不能使用带有副作用(side effects)的参数	
*/
// fputc 和 putc
// 读写整个字符串 fgets fputs
#include <stdio.h>
#include <stdlib.h>

int main()
{
		FILE *p1;
		FILE *p2;
		char ch;

		if ((p1 = fopen("hello.txt","r")) == NULL)
		{
				printf("打开文件失败!!\n");
				exit(EXIT_FAILURE);
		}
		
		if ((p2 = fopen("hello.tt","w+")) == NULL)
		{
				printf("打开文件失败!!\n");
				exit(EXIT_FAILURE);
		}

		while((ch = fgetc(p1)) != EOF)
		{
				fputc(ch,p2);
		}	

		fclose(p1);
		fclose(p2);
		return 0;
}
