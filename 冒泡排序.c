//ð������
#include<stdio.h>
void bubble_sort(int arr[], int sz)
{
	//ȷ������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������Ĺ���
		int j = 0;
		int flag = 1;//ð�������Ż�

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
		//�˴��벻��ð�����򣬵���ʵ���������
		//for (j = i + 1; j < sz; j++)
		//{
		//	if (arr[i] > arr[j])
		//	{
		//		int temp = arr[i];
		//		arr[i] = arr[j];
		//		arr[j] = temp;
		//	}
		//}
		if (flag == 1)//ð�������Ż�
		{
			break;
		}
	}
}
int main()
{
	//int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	//����������Ԫ�ظ���
	//����������Ԫ�ظ���������ں���֮�� ����arr����ʱ���ݵ���������Ԫ�صĵ�ַ������Ԫ�ظ���Ϊ��ֵ���õ���szʼ�յ���1
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	int i = 0;
	for (i = 0; i < 10; i++)
		printf("arr[%d] = %d\n", i, arr[i]);
	return 0;
}