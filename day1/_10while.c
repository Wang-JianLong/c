#include <stdio.h>

int main()
{
	 int a,i;
	 a = 0;
	 i = 0;
	 while (i <= 100){
		a += i;
		i += 1;
	 }
	 printf("a = %d \n",a);
	 return 0;
}

