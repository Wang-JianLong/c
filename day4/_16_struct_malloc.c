#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct User 
{
		char name[20];
		int age;
};

int main(void)
{
		struct User *u1;	
		u1 = (struct User *)malloc(sizeof(struct User *));
		if (u1 == NULL) 
		{
			printf("分配内存失败!!");	
		}
		// 结构体指针的成员变量字符串这样赋值
		strcpy(u1->name,"zhangsan"); 
		u1->age = 12;

		printf("%d   %s\n",u1->age,u1->name);
		free(u1);
		return 0;

}
