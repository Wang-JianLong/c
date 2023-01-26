#include <stdio.h>

int main()
{
	int count;
	count = -1;
	do
	{
		count ++;
	}while(getchar() != '\n');

	printf("count = %d\n",count);
	return 0;
}
