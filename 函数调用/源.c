#include <stdio.h>
#include <math.h>

//int is_prime(int n)
//{
//	int a = 0;
//	for ( a = 2; a <= sqrt(n); a++) //开平方不要写出< 而是<= 12×12就是它的因子
//	{
//		if (n % a == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	//100-200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			count++;
//			
//			printf("%d\n", i);
//		}
//		
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


//判断是闰年返回1不是返回0
//int is_leap_year(int n)
//{
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)); //真就返回1 假就返回0
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//		
//	}
//	return 0;
//
//}



//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2; //a[mid] 相当于 *(a + mid)    所以指针+1，并非加一个字节，而是加一个单元格    int指针地址直接＋4每四个字节往下数,有了数组的首元素地址,就可以按地址顺序往下读了
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}

//1.实参数组名代表一个固定的地址，或者说是指针型常量，因此要改变其值是不可能的。

//例如：a++; //语法错误，a是常量，不能改变

//2.形参数组名是指针变量，并不是一个固定的地址值，它的值是可以改变的。
// 要真正明白为何上述程序是正确的，那么要先明确：C++编译系统将形参数组名一律作为指针变量来处理！

//例如：void select_sort(int array[], int n)

//在编译时被解释为：void select_sort(int* array, int n)



//这个时候应该可以理解：实参数组名是一个地址值，而形参数组名被编译器解释为一个指针变量。
//int a[]在编译时被解释为int* a 所以不能挣扎了
int binary_search(int a[], int k) //错误error例子 //int a[]里面数组大小根本不重要
{	
	int sz = sizeof(a) / sizeof(a[0]); //仅仅穿过去首元素地址 
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	//int sz = sizeof(arr) / sizeof(arr[0]); //算元素个数
	//找到了就返回找到位置的下标
	//找不到返回-1 //不会和下标冲突 如果要找的那个数正好是零的话
	int ret = binary_search(arr, key);//能传参的只有数组名,能代表数组的只有数组名
	//数组arr传参,实际传递的不是数组的本身, 仅仅传过去了数组首元素的地址
	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了,下标是: %d\n", ret);
	}
	return 0;
}