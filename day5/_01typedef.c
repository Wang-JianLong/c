// typedef 起别名
#include "stdio.h"

typedef int INT,*PIRINT;

int main()
{
		INT i = 10;
		PIRINT b,c;
		b = &i;
		c = b;
		printf("%d\n",*b);
		return 0;
}
