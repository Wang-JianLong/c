#include <stdio.h>
#define NUM  10

int main()
{
		// 尝试用数组存放班级10名同学的成绩 并且计算平均值
		// int arr[NUM] = {10,23,45,56,67,678,34,43,34,34};
		//int arr[NUM];
		//int pj = 0;
		//for(int i = 0; i < NUM;i++)
		//{
		//	printf("请输入第%d位同学的成绩\n",i);
		//	scanf("%d",&arr[i]);
		//	pj += arr[i];	
		//}

		// 编译器自动判断数组容量、
		// int arr[] = {1,2};

		//printf("这十个同学的平均分数为 %d \n",pj/NUM);
		// int arr[NUM]; //  直接声明其中元素会出现错乱元素
		// 没有初始化的元素 为0
		int	arr[NUM] = {};	
		for (int i = 0; i < NUM; i++)
		{
				printf("%d\n",arr[i]);
		}

		printf("================\n");
		// c99 新特性 指定初始化
		int arr2[NUM] = {[3]=3,[6]=6};
		for (int i = 0; i < NUM; i++)
		{
				printf("%d\n",arr2[i]);
		}
		return 0;
}
