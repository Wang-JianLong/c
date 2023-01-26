#include <stdio.h>

int main()
{
		int count = 1;
		while (count++)
		{
				if (count > 5)
				{
						goto Lable;
				}
		}

Lable: printf("count = %d \n",count);
		printf("%d\n",count);
		return 0;
}
