// 指针函数
// 注意 不要返回局部变量的指针
#include <stdio.h>

char *get_word(char c);
char *get_word(char c)
{
		switch(c)
		{
			case 'a':return "apple";	
			case 'b':return "banana";	
			case 'c':return "cat";	
			default: return "None";
		}
}

int main()
{
		char input;
		printf("请输入a,b,c 打印指定的物:");
		scanf("%c",&input);
		printf("%s\n",get_word(input));
		return 0;
}
