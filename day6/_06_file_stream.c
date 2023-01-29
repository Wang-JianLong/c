#include <stdio.h>
/*
文件流
	- 标准输入stdin
	- 标准输出stdout
	- 标准错误输出stderr	

Linux Shell 重定向功能
	- 重定向标准输入使用 <
	- 重定向标准输出使用 >
	- 重定向标准错误输出使用 2>
*/
int main()
{
		fputs("标准输出流\n",stdout); 
		fputs("标准错误输出流\n",stderr); 
		return 0;
}
