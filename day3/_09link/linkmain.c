#include <stdio.h>

void a(void	);
void b(void	);
void c(void	);
// 使用static关键字可以变为internal只限制本文件访问
int count;
// 定义的全局变量 默认拥有external属性 文件默认跨文件访问 需要 extran 关键字
// 只有具有文件作用域的属性才可以使用这两个关键字
//  gcc linkmain.c link1.c link2.c link3.c
int main(void)
{
		a();
		b();
		c();
		a();
		printf("统计：%d\n",count);
		return 0;
}

/*
任何在代码块之外声明的标识符都具有文件作用域，作用范围是声明位置开始，到文件的结尾处都是可以访问的
函数名也具有文件作用域 函数名本身在代码块之外
*/

