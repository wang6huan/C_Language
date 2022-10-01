#include <stdio.h>
#include <string.h>

//你觉得的那里有问题，F9可以设置断点 F5直接跳到断点前面都调试完了，不用一直F10

//void test()
//{
//	int a = 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		test(); //F11可以进入函数内部
//		arr[i] = i + 1;
//	}
//
//	return 0;
//}


//void test2()
//{
//	printf("oil\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
////调用堆栈看的就是函数的调用逻辑
//int main()
//{
//	test();
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//你假设它第5000次会出问题，那怎么能直接不手动调试去查看跳到5000次
//		arr[i] = i + 1;//那就设置断点条件鼠标右击断点
//	}
//
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}




//实现代码
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	//1*2*3...*n
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	
//
//	for ( j = 1; j <= n; j++)
//	{
//		ret = 1; //刚刚就是ret没重置我重置成0了不愧是你啊 就是运行式错误(编译完运行出错)语法出错就编译不了
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}


//int main()
//{
//	int i = 0; //i的地址居然和arr[12]的地址一样,改变arr[12]就重置了i = 0就死循环了
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0 -9
//	for ( i = 0; i <= 12; i++) 
//	{
//		arr[i] = 0; //越界访问到i了，为什么可以越界后面而不能越界数组前
//		printf("raise oil\n");
//	}
//	//代码运行的结 果是什么?
//
//
//	//(1)为什么会这样 i和arr是局部变量放在栈区上
//	//栈区内存的使用习惯是:先使用高地址空间，再使用低地址空间
//	//(2)数组随着下标的增长地址是由低到高变化的 所以i会先在高地址而数组访问是由低到高就有巧合访问到i
//	//这是内存栈区和数据结构的栈没关系
//	//后创建i就在低地址 数组向高地址越界访问就访问不到i
//	//它一直在死循环没时间停下来报错非法访问内存
//	
//	//《c陷阱和缺陷》有提到
//	return 0;
//}



//预防发生错误

//通过编码的技巧
//模拟实现strcpy
//strcpy - 字符串拷贝

//代码写的不好

//void mystrcpy(char* dest, char* src)
//{
//	
//	
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void mystrcpy(char* dest, char* src)
//{
//	
//	
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}


//还可以优化,在c++官网可以看到原函数有保护指针和函数类型是char *

//void mystrcpy(char* dest, char* src)
//{
//
//	//即拷贝了/0又为假
//	while (*dest++ = *src++)//解引用++还是加指针里存放的地址，“*和++”两者优先级相同，需要按从右到左的顺序执行
//	{
//		;
//	}
//	
//}


//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello"; //最后一位/0也拷贝过来了
//	mystrcpy(arr1, arr2);
//
//	//strcpy(arr1, arr2);
//	printf("%s\n", arr1); //只打印/0前
//	return 0;
//}

