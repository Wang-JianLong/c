#include <stdio.h>
#include <stdlib.h>
/*
标准IO 提供的三种模式
	- 按块缓存 _IOFBF
		- 也称全缓存，即在填满缓冲区后才进行实际的设备读写操作
	- 按行缓存 _IOLBF
		- 在接收到 \n 操作符之前 先缓存在缓冲区
	- 不缓存   _IONBF
		- 允许直接读写设备上的文件

	- 参数 
		- stream FILE指针指定一个打开的数据流
		- buf 指定一个用户分配的缓冲区 为NULL的情况下函数在佛那个分配一个指定尺寸的缓冲区
		- mod 指定缓存模式
		- size 指定缓冲区的尺寸(字节)
*/
int main()
{
		FILE * fp;
		if ((fp = fopen("output.txt","w")) == NULL)
		{
				perror("错误是");
				exit(EXIT_FAILURE);
		}
		fputs("这是一段话\n",fp);
		fflush(fp);
		getchar();// 阻塞函数
		fclose(fp);
		return 0;
}
