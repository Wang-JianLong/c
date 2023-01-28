#include <stdio.h>

struct Date 
{
		unsigned int year;
		unsigned int month;
		unsigned int day;
};

struct User 
{
		char name[20];
		int age;
		struct Date date;
} user = {
	.name = "zhangsan",
	.age = 1,
	.date = {2023,1,28}
};


int main()
{
		printf("%s的生日是%u年%u月%u日\n",
						user.name,
						user.date.year,
						user.date.month,
						user.date.day);	
		// 结构体数组
		struct Date dates[2] = {{1,2,3},{4,5,6}};
		struct Date d1 = dates[0];

		printf("%u年%u月%u日\n",d1.year,d1.month,d1.day);
		return 0;
}
