#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//	
//	return 0;
//}

//1 计算n的阶乘
//2 计算1!-10!的和
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf_s("%d", &n);
//	int y = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		printf("y = %d\n", y *= i);
//		printf("sum = %d\n", sum += y);
//	}
//
//	return 0;
//}


			//二分查找

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	
	int k = 7;	//要查找的数字
		
				//在arr这个有序的(满足等差数列好像就是有序)数组中查找k(7)的值
	int sz = sizeof(arr) / sizeof(arr[0]);	//数组的元素个数 sizeof算的是总字节,arr[0]是第一个元素站4字节

	int left = 0;	//左下标 0
	int right = sz - 1;		//右下标 总数-1
		
	while (left <= right)
	{
		int mid = (left + right) / 2; //两个下标中间的值,查找的中间值，不停的改变
		if (arr[mid] < k)
		{
			left = mid + 1;		//mid没有==k 自身也要排除
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了下标为:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}


