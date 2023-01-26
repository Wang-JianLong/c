#include <stdio.h>

int main1()
{
		// 数组变量就是指针类型
		// 数组名其实是数组第一个元素的地址
		char str[15];
		printf("请输入Google的域名:");
		scanf("%s",str);
		str[14] = '\0';
		printf("数组的地址%p\n",str);
		printf("数组第一个元素的地址%p\n",&str[0]);
		printf("\nGoogle的域名:%s\n",str);
		return 0;
}

int main()
{
		int a[] = {1,2,3,4};
		float b[] = {1.0,2.0,3.0,4.0};
		char s[] = "1234";
		
		printf("a pointer ==> %p,	a[0] pointer ==> %p,	a[1] pointer ==> %p\n",a,&a[0],&a[1]);
		printf("b pointer ==> %p,	b[0] pointer ==> %p,	b[1] pointer ==> %p\n",b,&b[0],&b[1]);
		printf("s pointer ==> %p,	s[0] pointer ==> %p,	s[1] pointer ==> %p\n",s,&s[0],&s[1]);
		/*
		数组每个值的内存地址是连续的 中间相隔类型元素的字节大小 int 4  char 1  
		a pointer ==> 0x7ffe5f811d00,   a[0] pointer ==> 0x7ffe5f811d00,        a[1] pointer ==> 0x7ffe5f811d04
		b pointer ==> 0x7ffe5f811cf0,   b[0] pointer ==> 0x7ffe5f811cf0,        b[1] pointer ==> 0x7ffe5f811cf4
		s pointer ==> 0x7ffe5f811ceb,   s[0] pointer ==> 0x7ffe5f811ceb,        s[1] pointer ==> 0x7ffe5f811cec
		*/
		// 根据寻址获取a数组的第二个元素
		int *p = &a[2];
		//  p + 1 表示指向指针所在位置的下一个元素
		int *p2 = p + 1;
		printf("%d\n",*p2); // 2
		// 指针是怎么知道加1是指向下一个变量的呢？ 其实在定义指针的时候就声明了类型

		printf("a p = %d,	(p+1) = %d,		(p+2) = %d);\n",*a,*(a+1),*(a+2));
		printf("b p = %f, 	(p+1) = %f,		(p+2) = %f);\n",*b,*(b+1),*(b+2));
		return 0;
}

