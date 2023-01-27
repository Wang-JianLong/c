#include <stdio.h>
// 如何用指针 指向二维数组呢？
int main()
{
		int array[3][4] = {// array 本身是第一行数组的指针地址 = array[1]
			{1,2,3,4},
			{5,6,6,8},
			{9,10,11,12}	
		};
		// int **p = array;
		// 以下代码报错 
		/*
		for (int i = 0; i < 3;i++)
		{
			for (int j = 0; j < 4;j++)
			{
				// array + i  第几行的数组地址   j第几列的数组元素地址
				printf("%d  ",*(*(p+i)+j));	
			}
			printf("\n");
		}
		*/
		// 编译警告 但是根据打印信息来看 他们的跨度是不相同的 
		/*
		printf("array:%p	p:%p\n",array,p);
		printf("array+1:%p	p+1:%p\n",array+1,p+1);
		return 0;
		*/
		// 在c语言中  二维数组的列是多少 必须要声明 ( 跨度问题
		// 指针数组  这里 p 指向的是 一个四个元素的数组  p的跨度为4
		int (*p)[4] = array;	
		// 这样写也行 声明清楚
		// int (*p)[3][4] = array;

		for (int i = 0;i < 3;i++)
		{
				for (int j = 0;j < 4;j++)
				{
					printf("%d ",*(*(p+i)+j));
				}
				printf("\n");
		}
	
}

