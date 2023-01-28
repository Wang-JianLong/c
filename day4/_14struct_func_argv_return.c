#include <stdio.h>

struct User 
{
		char name[20];
		int age;
};

struct User get_input(struct User u);

int main()
{
		struct User u1,u2;
		printf("请输入用户信息：");	
		u1 = get_input(u1);
		printf("====================\n");
		printf("用户名:%s  用户年龄:%d \n",u1.name,u1.age);
		return 0;
}

struct User get_input(struct User u)
{
		printf("请输入 username:");
		scanf("%s",u.name);
		printf("请输入 age:");
		scanf("%d",&u.age);
		return u;
}
/*
 
		struct Test
		{
				int x;
				int y;
		} t1, t2;
		
		t1.x = 1;
		t1.y = 2;

		t2 = t1;
		printf("%d %d\n",t1.x,t2.y);
*/
