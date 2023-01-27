// 将 函数指针作为返回值
#include <stdio.h>

int sub(int a,int b);
int add(int a,int b);
int calc(int (*)(int,int),	int, int);
int (*select(char))(int,int);

int sub(int a, int b)
{
		return a - b;
}

int add(int a, int b)
{
		return a + b;
}

int calc(int (*fp)(int,int),
				int a, int b)
{
		//return fp(a,b);
		return (*fp)(a,b);
}

int (*select(char op))(int, int)
{
	switch(op)
	{
			case '-':return sub;
			case '+':return add;
	}
			
}


int main()
{
		int num1,num2;
		char op;
		printf("请输入一个数学运算式 如 1+3 ：");
		scanf("%d%c%d",&num1,&op,&num2);
		int (*fp)(int, int) = select(op);
		printf("%d\n",fp(num1,num2));
		return 0;
}
