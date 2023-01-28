// void *malloc(size_t  size);  
// malloc函数向系统申请分配size 字节的内存空间 返回该空间指针
// 注意 申请的空间数据随机的 没有初始化为0
// 可以被转换为任意类型的数据  调用失败 返回NULL size为0可能也是为Null 但是没有失败

// void free(void *ptr);
// 释放参数指向的内存空间 该内存空间必须是由malloc,calloc，或者realloc函数申请的 否则会导致未定义行为
// 参数为null不执行任意操作
// 不会修改参数的值 但是 该参数调用之后还是会指向原来的地方（变为非法空间）
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
		int *p;
		p =(int*) malloc(sizeof(int));
		if (p == NULL)
		{
				printf("分配内存失败!!\n");
				exit(1);
		}
		printf("请输入一个整数:");
		scanf("%d",p);
		printf("您输入的整数是 %d\n",*p);
		free(p);
		// 数据没有任何意义
		printf("您输入的整数是 %d\n",*p);
		return 0;
	
}	
