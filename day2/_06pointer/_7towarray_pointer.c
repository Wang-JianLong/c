#include <stdio.h>
// C 语言中没有真正的二维数组 是通过线性扩展的方式实现的
// int array[][..] = {};     *(array+1) = array[1] 
int main()
{
		int a[][2] = {{1,2},{3,4},{5,6}};
		// array 的值是地址 代表着 这个二维数组的第一个数组的地址(数组指针） 不是数组元素的地址
		printf("array:%p\n",a);
		printf("array+1:%p\n",a+1);// array + 1 代表这个二维数组的第二个数组的地址
		printf("*(*array):%d\n",*(*a));
		printf("*((*array+1)):%d\n",*(*(a+1)));// array + 1 代表这个二维数组的第二个数组的地址
		/*
				array:0x7ffe8754d9e0
				array+1:0x7ffe8754d9e8
				*(*array):1
				*((*array+1)):3
		*/
		printf("a[1] == &a[1][0] && a[1] == *(a+1) :%d\n",a[1] == &a[1][0] && a[1] == *(a+1));
		printf("a[1][1] == *(*(a+1)+1) :%d\n",a[1][1] == *(*(a+1)+1));
}	
