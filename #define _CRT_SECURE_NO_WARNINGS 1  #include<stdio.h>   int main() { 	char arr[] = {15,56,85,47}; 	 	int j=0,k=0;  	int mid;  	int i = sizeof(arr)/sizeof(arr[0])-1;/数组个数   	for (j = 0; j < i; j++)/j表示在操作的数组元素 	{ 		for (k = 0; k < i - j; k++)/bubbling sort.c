#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int main()
{
	char arr[] = {15,56,85,47};
	
	int j=0,k=0;

	int mid;

	int i = sizeof(arr)/sizeof(arr[0])-1;//数组个数


	for (j = 0; j < i; j++)//j表示在操作的数组元素
	{
		for (k = 0; k < i - j; k++)//第一个需要交换的次数为个数减一，第二个减二，以此类推。
		{
			if ((arr[k]) < (arr[k + 1]))
			{
				mid = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = mid;
			}
			
		}
	}
	for (j = 0; j <= i; j++)
	{
		printf("%d ", arr[j]);
	}
	
	
	}

	
