#include <stdio.h>
#include <stdlib.h>
// 数组指针起别名
typedef int (*PTR_TO_ARRAY)[3]; // int (*p)[3];
// 函数指针别名  
typedef int (*PTR_TO_FUN)(void); // int (*pf)(void);


// 给结构体起别名
typedef struct User 
{
		int age;
} USER,*PUSER;

int pfunc()
{
		printf("pfunc...\n");
}

int main()
{
		USER *user;
		user = (PUSER)malloc(sizeof(USER));
		user->age = 12;
		printf("user age %d\n",user->age);

		PTR_TO_ARRAY p;
		int a[3] = {1,2,3};

		p = &a;
		printf("%d\n",*(*p+1));

		PTR_TO_FUN pf;
		//pf = pfunc;
		//pf();
		pf = &pfunc;
		(*pf)();
		return 0;
}
