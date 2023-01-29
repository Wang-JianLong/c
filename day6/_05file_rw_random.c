#include <stdio.h>
#include <stdlib.h>

int main()
{
		FILE *fp;
		if ((fp = fopen("hello.txt","a")) == NULL)
		{
			printf("文件打开失败");	
			exit(EXIT_FAILURE);
		}

		printf("指示器位置%ld\n",ftell(fp));
		fputc('F',fp);
		printf("指示器位置%ld\n",ftell(fp));
		rewind(fp);
		fputc('F',fp);
		fseek(fp,-5,SEEK_END); // 某些系统可能不支持SEEK_END位置
		// 以文本模式打开 只有seek_set是有意义的 传递的偏移量要么是0 要么是上一次对同一个文件调用ftell的返回值 
		printf("指示器位置%ld\n",ftell(fp));


		fclose(fp);
		return 0;
}
