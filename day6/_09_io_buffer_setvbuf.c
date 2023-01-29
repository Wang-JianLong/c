#include <stdio.h>
#include <string.h>

/*
标准IO 提供的三种模式
	- 按块缓存 _IOFBF
		- 也称全缓存，即在填满缓冲区后才进行实际的设备读写操作
	- 按行缓存 _IOLBF
		- 在接收到 \n 操作符之前 先缓存在缓冲区
	- 不缓存   _IONBF
		- 允许直接读写设备上的文件
setvbuf
	- 参数 
		- stream FILE指针指定一个打开的数据流
		- buf 指定一个用户分配的缓冲区 为NULL的情况下函数在佛那个分配一个指定尺寸的缓冲区
		- mod 指定缓存模式
		- size 指定缓冲区的尺寸(字节)
*/

int main()
{
		char buffer[1024];
		// '\0'表示ASCII码值为0的字符。 在字符串中'\0'用作字符串的结束标志。 ‘\0’是字符串来结束标志位 对应ascii :00; ‘
		memset(buffer,'\0',sizeof buffer);	
		setvbuf(stdout,buffer,_IOFBF,1024);

		fprintf(stdout,"This Way\n");
		// 强制刷新缓冲区
		fflush(stdout);
		// 这一段如果是 _IOFBF 直至程序结束才会输出	
		fprintf(stdout,"请输入任意字符后才会显示该行字符\n");
		
		getchar();

		return 0;
						
}

