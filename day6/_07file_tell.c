// 指示器
#include <stdio.h>
#include <stdlib.h>

/*
错误指示器 ferror
清除文件末尾指示器和错误指示器的状态
	- 注意只能检测出错 但是无法获取错误原因  
	- 大多数函数在出现错误时 会将错误原因记录在errno中
*/
int main()
{
		FILE *fp;
		char ch;
		if ((fp = fopen("output.txt","r")) == NULL)
		{
			fputs("文件打开失败	\n",stderr);
			exit(EXIT_FAILURE);
		}

		while(1)
		{
			ch = fgetc(fp);
			if (feof(fp))
			{
					break;
			}
			putchar(ch);
		}

		fputc('c',fp); // 只读模式打开 写入肯定出错
		clearerr(fp);

		if (ferror(fp))
		{
				fputs("出错了\n",stderr);
		}
		fclose(fp);
		return 0;
}
