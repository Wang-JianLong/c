#include <stdio.h>

void quick_sort(int a[],int l,int r);

int main(void)
{
		int array[10] = {5,4,6,3,7,2,8,1,9,0};
		int i,length;
		length = sizeof(array)/sizeof(array[0]) - 1;
		quick_sort(array,0,length);	
		for (int j = 0; j < length; j++)
		{
				printf("%d\n",array[j]);
		}
		return 0;
}

void quick_sort(int array[],int l,int r)
{
	int i = l;
	int j = r;
	int temp;
	int pv = array[(l+r)/2];
	while(i <= j)
	{
		while(array[i] < pv)
		{
			i++;
		}
		while(array[j] > pv)
		{
			j--;
		}

		if(i <= j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
		}
	}	
	
	if(l < j)
	{
		quick_sort(array,l,j);
	}	

	if(i < r)
	{
		quick_sort(array,i,r);
	}
}


