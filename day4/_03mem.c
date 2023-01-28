#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
		int *p;
		p = (int *)malloc(sizeof(int)*5);
		memset(p,0,sizeof(int) * 5);
		for(int i = 0;i < 5; i++)
		{
				printf("%d ",p[i]);
		}
		putchar('\n');
		free(p);
		return 0;
}

/*
 // 注意一个char占用一个字节
//mem  按照字符数组的方式操作对象。
void* memcpy(void* s, const void* ct, size_t n) //将字符串ct中的n个字符拷贝到s中。返回s。
void* memmove(void* s, const void* ct, size_t n) //功能与memcpy类似，不同的是在对象重叠时，memmove仍能正确执行。
int memcmp(const void* cs, const void* ct, n) //将cs的前n个字符与ct比较，返回值同strcmp
void* memchr(const void* cs, int c, size_t n) //返回一个指针，指向c在cs中第一次出现的位置。如果在cs的前n个字符中找不到c，返回NULL。
void* memset(void* s, int c, size_t n) //将s中的前n个字符置为c，返回s。 
*/
