// 结构体指针
#include <stdio.h>

struct Book 
{
		char name[128];
};
 
int main()
{
		struct Book b1 = {.name = "C++ Primer Plus"}; 
		struct Book b2[2]; 

		struct Book *pt;
		pt = &b1;
		printf("%s\n",(*pt).name); // . 比解引用运算符优先
		printf("%s\n",pt -> name); // 结构体指针 -> 成员名
		pt = b2; // 直接等于数组名
		return 0;
}
