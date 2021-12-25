//冒泡排序
#include<stdio.h>
void bubble_sort(int arr[], int sz)
{
	//确定趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		int flag = 1;//冒泡排序优化

		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		//此代码不是冒泡排序，但能实现排序过程
		//for (j = i + 1; j < sz; j++)
		//{
		//	if (arr[i] > arr[j])
		//	{
		//		int temp = arr[i];
		//		arr[i] = arr[j];
		//		arr[j] = temp;
		//	}
		//}
		if (flag == 1)//冒泡排序优化
		{
			break;
		}
	}
}
int main()
{
	//int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	//计算数组中元素个数
	//计算数组中元素个数必须放在函数之外 否则arr传参时传递的是数组首元素的地址，无论元素个数为何值，得到的sz始终等于1
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < 10; i++)
		printf("arr[%d] = %d\n", i, arr[i]);
	return 0;
}