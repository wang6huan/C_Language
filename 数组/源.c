
#include <stdio.h>
#include <string.h>


//一维数组

//int main()
//{
//	//数组创建
//	int arr[8];
//	char ch[5]; //元素个数里面要放常量表达式 c99语法支持变量 叫 变长数组 - 数组的大小是变量 vs2019不支持变长数组
//
//	//数组初始化 - 赋值
//	int a = 10;//初始化
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //完全初始化
//	int arr[10] = { 1,2,3,4,5 }; //为完全初始化 未初始化的数为0
//	int arr2[] = { 1,2,3,4,5, }; //未给定元素个数会根据初始化的内容来确定元素个数
//
//	char ch1[5] = { 'b', 'i', 't' };
//	char ch2[] = { 'b', 'i', 't' }; // 内存存储的数字十进制0 char类型输出按ascii就是\0 因为\0的ascii值是数字0
//	//字符0的ascii为 00110000 十进制48
//
//	char ch3[5] = "bit"; //b i t \0 0
//	char ch4[] = "bit"; // b i t \0
//
//	char ch5[] = "bit";
//	//4个元素 [b i y \0]
//	char ch6[] = { 'b','i','t' };
//	// [b i t] 打印出字符串没有识别到\0会乱码是打印字符串不是打印字符哦
//
//	
//
//	return 0;
//}

//int main()
//{
//	
//	int arr[10] = { 0 }; //叫不完全初始化 第一个元素初始化为0 剩下默认0   还没的元素是默认0和这个没关系
//	arr[4] = 5; //[] 是下标引用操作符
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]); //这个是数组元素个数的 用数组总整形大小处于一个元素整形大小
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


//数组在内存中怎么存在的，打印出它的地址看看

//int main()
//{
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]); //%p - 是按地址打印 - 十六进制打印
//	}
//
//	// 一维数组在内存中是连续存放的
//	// 随着数组下标的增长,地址是由低到高变化的！
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //字符数组大小
//
//	int* p = arr;//数组名是数组首元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++; //int类型指针增加4字节 跳过一个整形
//	}
//	return 0;
//}




//二维数组

//int main()
//{
//	//创建
//	int arr[3][4]; //没有初始化的时候内存空间放的都是乱的数字
//	char ch[3][4];
//	//初始化
//	int arr2[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 }; //f10监视看看
//	int arr3[3][4] = { 1,2,3,4,5,6,7 }; //不完全初始化 - 后面补0  字符数组补的是\0
//	int arr4[3][4] = { {1,2},{3,4},{5,6} }; //只初始化了三行中的前两列
//	int arr5[][4] = { {1,2},{3,4},{5,6} };  //行可以省略，列不能省略 根据arr2可以思考思考吧
//
//	//怎么打印出来呢
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr5[i][j]);
//		}
//		printf("\n");
//	}
//
//	//打印出地址
//	int arr[][4] = { {1,2}, {3,4}, {5,6} }; //我们必须知道一行有几个元素才能下一行，so列不能省略
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for ( i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//	//	}
//	//}
//
//	//二维数组在内存中也是连续存放的
//	//一行内部连续
//	//换行也是连续的
//	
//
//
//	//二维数组在内存存放和一维一个吊样
//
//
//	return 0;
//}



//数组传参

//void bubble_sort(int arr[], int sz) //形参arr本质上是指针
//{
//	//这个是错误的，在主函数先算好在传进来int sz = sizeof(arr) / sizeof(arr[0]);
//	//确定趟数
//	int i = 0;
//	for ( i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		for (int j = 0; j < sz - 1 - i ; j++) //还要多减一个i 因为每排序一次最后的那个被排序的数就不需要再动了
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//排序为升序 - 冒泡排序  思两两相邻的元素进行比较，并且可能的话需要交换！ 10个数字交换9趟 n个数字就是n-1次
//	bubble_sort(arr, sz); //数组传参是数组首元素地址
//	return 0;
//}


//数组名字是什么？
//数组名是数组首元素的地址
//但是有2个例外
//1 sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小单位是字节
//2 &数组名 - 数组名表示整个数组 - 取出的是整个数组的地址

void sum(int arr2[])
{
	//难道是因为这个是指针 所以取地址是自身的地址而不是数组的地址  那数组就特殊他本身就是地址，所以取自身就 还是搞不明白啊
	//打印元素地址又一样啦？ 打印数组地址就不一样
	printf("%p\n", &arr2[1]); //如果直接这样打印的是arr2里存放的地址 &arr2打印的是指针的地址吗 调试的时候就是指针类型 写难道数组是直接解引用的吗  看下面的说明数组的特殊性
	/*printf("%p\n", &arr + 1);*///只加了4位，只传了首地址，两个名字都指向同地址，所以就是传指针，你在操作的过程就是在弄指针，不要理解成数组，形参写成数组就是好看，写指针也行,好像不只是好看而已
}


int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr); //既然数组名是首元素地址那这个为什么还是40 这个时候数组名表示整个数组
	printf("%p\n", &arr[1]);
	sum(arr);

	//printf("%p\n", &arr);// 取出的是数组的地址
	//printf("%p\n", &arr + 1);//打印出加了40

	//printf("%p\n", arr); 
	//printf("%p\n", arr + 1);//打印出加了4

	//printf("%p\n", &arr[0]);



	//printf("%p\n", &arr[0]);
	//printf("%p\n", &arr);//数组名是首元素地址
	return 0;
}


//这是因为一个特殊的约定：对于一个数组名arr, arr == &arr
//
//但是在函数内部，你的两个函数原型其实参数都会被解释为指针，对于指针地址， & ca和 & pa不再有上面的规则，也就是说ca的值等于ga, 也等于& ga ，而再用& 取一层址，就不再等于了
//
//也就是说，你期望的是ca == ga, & ca == &ga，而实际上，由于数组名的特殊性， & ga == ga, 而指针ca != &ca
//
//因此 & ca != ca == ga == &ga



//void bubble_sort(int arr[], int sz) //形参arr本质上是指针
//{
//	//这个是错误的，在主函数先算好在传进来int sz = sizeof(arr) / sizeof(arr[0]);
//	//确定趟数
//	int i = 0;
//	int flag = 1;
//
//	for ( i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		for (int j = 0; j < sz - 1 - i ; j++) //还要多减一个i 因为每排序一次最后的那个被排序的数就不需要再动了
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//				flag = 0; //当第一次交换发生1次交换就赋值0
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	/*int arr[] = { 9,8,7,6,5,4,3,2,1,0 };*/
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//排序为升序 - 冒泡排序  思两两相邻的元素进行比较，并且可能的话需要交换！ 10个数字交换9趟 n个数字就是n-1次
//	bubble_sort(arr, sz); //数组传参是数组首元素地址
//	return 0;
//}
