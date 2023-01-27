#include <stdio.h>

int main()
{
		int array[][2] = {{1,2},{3,4}};
		printf("%s\n","int array[][2] = {{1,2},{3,4}}; ");
		// 初始化一个数组指针
		int (*p)[2] = array; // 如果array 是一维数组 的话 需要取址
		printf("**array: %d\n",**array);
		printf("*(*array+1): %d\n",*(*array + 1));
		printf("*(*(array+1)): %d\n",*(*(array + 1)));
		printf("*(*(array+1)+1): %d\n",*(*(array + 1)+1));

		printf("**p: %d\n",**p);
		printf("*(*p+1): %d\n",*(*p+1));
		return 0;
}

