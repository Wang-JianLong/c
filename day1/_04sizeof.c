#include <stdio.h>
/*
sizeof 用于获得数据类型或者表达式的长度
		- sizeof( object ) /  sizeof object
		- sizeof(type_name)
*/
int main()
{
	int a = 123;
	printf("a sizeof = %d\n",sizeof a);
	printf("a sizeof = %d\n",sizeof(a));
	printf("int sizeof = %d\n",sizeof(int));
	printf("long int sizeof = %d\n",sizeof(long int));
	printf("short sizeof = %d\n",sizeof(short));
	printf("float sizeof = %d\n",sizeof(float));
	printf("double sizeof = %d\n",sizeof(double));
	printf("long double sizeof = %d\n",sizeof(long double));
	printf("_Bool sizeof = %d\n",sizeof(_Bool));
	printf("char sizeof = %d\n",sizeof(char));
	printf("long int sizeof = %d\n",sizeof(long int));
	return 0;
}
/*
a sizeof = 4
a sizeof = 4
int sizeof = 4
long int sizeof = 8
short sizeof = 2
float sizeof = 4
double sizeof = 8
long double sizeof = 16
_Bool sizeof = 1
char sizeof = 1
long int sizeof = 8
*/
