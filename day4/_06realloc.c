/*
void* realloc(void* p, size_t size) 
// 将p指向的对象的长度修改为size。返回指向新分配内存区域的指针。
// 重分配成功旧内存会被自动释放，p变成了野指针。
// realloc失败的时候，返回NULL,原来的内存不改变，不会释放也不会移动。
// 假如原来的内存后面还有足够多剩余内存的话，realloc的内存=原来的内存+剩余内存,realloc还是返回原来内存的地址。
// 假如原来的内存后面没有足够多剩余内存的话，realloc将申请新的内存，然后把原来的内存数据拷贝到新内存里，原来的内存将被free掉,realloc返回新内存的地址。
// 如果size为0，效果等同于free(p),这里需要注意的是只对指针本身进行释放，例如对二维指针**a，对a调用realloc时只会释放一维，使用时谨防内存泄露。
// 传递给realloc的指针必须是先前通过malloc(), calloc(), 或realloc()分配的。
// 传递给realloc的指针可以为NULL，等同于malloc(size)。
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
		int i,num;
		int count = 0; 
		int *p = NULL; // 这里必须初始化为NULL realloc会默认作为malloc使用

		do 
		{
			printf("请输入一个整数，输入-1表示结束:");
			scanf("%d",&num);
			count++;

			p = (int *)realloc(p,count * sizeof(int));
			if (p == NULL)
			{
					printf("程序出错!!!\n");
					exit(1);
			}
			if (num == -1 ){ break;}
			p[count - 1] = num;
		}
		while(num != -1);
		
		for (i = 0;i < count - 1;i++)
		{
				printf("%d  ",p[i]);
		}
		putchar('\n');
		free(p);
		return 0;
}
