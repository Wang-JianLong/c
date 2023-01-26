#include <stdio.h>

int main()
{
	int a;
	float b;
	double c;
	char f;
	a = 10;
	b = 10.0;
	c = 12.00;
	f = 'F';
	printf("a %d\n",a);
	printf("b %.3f\n",b);
	printf("c %3.11f\n",c);
	printf("f %c\n",f);
	return 0;
}

