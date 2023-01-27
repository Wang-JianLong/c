#include <stdio.h>
// void 指针  通用类型指针 可以指向任意数据类型指针
// 无法直接解引用 编译器不知道类型数据
// 需要指针强制类型转换
int main()
{
		int num = 1024;
		int *pi = &num;	
		char *s = "123 qwe";
		char *ps = s;
		void *pv = pi;
			
		printf("%p\n",pv);
		printf("%p\n",pi);
		printf("%d\n",*((int *)pv));
		pv = ps;
		printf("%s\n",(char *)pv);

		return 0;
}
