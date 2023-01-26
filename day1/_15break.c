#include <stdio.h>
int main()
{
	char ch;
	while (1)
	{
		if ((ch = getchar()) != '\n')
		{
				printf("%c\n",ch);	
		}
		else
		{
				printf("再见\n");
				break;
		}
	}
	return 0;
}
