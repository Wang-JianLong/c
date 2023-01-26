#include <stdio.h>

int main()
{
		int a = 10;
		int *ap = &a;
		printf("%p\n",ap);
		printf("a = %d\n",*ap);
		return 0;
}
