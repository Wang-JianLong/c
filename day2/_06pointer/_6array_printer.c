// 数组指针
// 之前的  int array[] = {};  int *p = array;   
// p所代表的是数组的第一个元素的地址 不能代表整个数组的指针
#include <stdio.h>

int main()
{
		int temp[] = {1,2,3,4,5};

		// 以下三个都是数组第一个元素的地址
		printf(" temp %p\n",temp);
		printf(" &temp %p\n",&temp);
		printf(" &(temp[0]) %p\n",&(temp[0]));

		int (*p1)[5] = &temp;	
		
		for (int i = 0; i < 5; i++)
		{
				printf("%d\n",*(*p1+i));
		}
		return 0;
}
