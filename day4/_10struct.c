#include <stdio.h>

struct User
{
		char name[12];
		char pw[12];
		unsigned short int age;
}; // 注意分号
// 声明时定义 全局变量
/*
 
struct User
{
		char *name;
		char *pw;
		unsigned short int age;
} user;
*/

int main()
{
		// struct User user;
		// printf("请输入用户名:");
		// scanf("%s",user.name);
		// printf("请输入密码:");
		// scanf("%s",user.pw);
		// printf("请输入年龄:");
		// scanf("%d",&user.age);
		// printf("====================\n");
		// printf(" username %s \n",user.name);		
		// printf(" password %s\n",user.pw);		
		// printf(" age %d\n",user.age);		


		// 初始化结构体
		struct User u1 = {
				"zhangsan",
				"12345678",
				12
		};
		printf("%s\n",u1.name);

		// 只初始化某一项
		struct User u2 = {.age = 12 };
		printf("%d\n",u2.age);
		return 0;
}
