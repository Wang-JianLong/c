#include <stdio.h>
#include <stdlib.h>

int main()
{
		FILE *fp;
		char *ch;
		if((fp = fopen("hello.txt","r")) == NULL)
		{
			printf("open_file failed!!!\n");
			exit(EXIT_FAILURE);
		}
		// feof 函数用于检测文件的末尾指示器（end-of-file indicator）是否被设置。		
		while (!feof(fp))
		{
			fgets(ch,1024,fp);			
			printf("%s !\n",ch);
			// 为什么最后一行会输出两次
			// 如果在读取字符的过程中遇到 EOF，则 eof 指示器被设置；
			// 如果还没读入任何字符就遇到这种 EOF，则 s 参数指向的位置保持原来的内容，函数返回 NULL。
		}
		fclose(fp);
		if((fp = fopen("hello.txt","a")) == NULL)
		{
			printf("open_file failed!!!\n");
			exit(EXIT_FAILURE);
		}

		fputs("读取完毕\n",fp);
		fclose(fp);
		return 0;
}
