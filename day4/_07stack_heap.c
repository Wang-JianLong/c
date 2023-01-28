#include <stdio.h>
#include <stdlib.h>

// 栈  从高到底
// 堆 从低到高
int main(void )
{
		int *p1 = NULL;
		int *p2 = NULL;
		p1 = (int *)malloc(sizeof(int));
		p2 = (int *)malloc(sizeof(int));

		printf("stack: %p --> %p\n",&p1,&p2);
		printf("heap: %p --> %p\n",p1,p2);
		/*
		   stack: 0x7ffc5a691918 --> 0x7ffc5a691910
		   heap: 0x5582727c42a0 --> 0x5582727c42c0
		 */
		// p1 = (int *)realloc(p1, 2 * sizeof(int));
		p1 = (int *)realloc(p1, 20 * sizeof(int));
		// 此时内存地址没有变化
		printf("heap: %p --> %p\n",p1,p2);
		// 内存地址改变
		free(p1);
		free(p2);
		return 0;
}
