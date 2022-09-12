
#include <stdio.h>

//指针是用来存放地址的，指针大小在32位平台是4字节，在64位平台是8字节
//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));//4
//	printf("%d\n", sizeof(pc));//4
//	printf("%d\n", sizeof(pf));//4
//	return 0;
//}


//指针类型的意义
//1. 指针类型决定了:指针解引用的权限有多大
//2. 指针类型决定了,指针走一步,能走多远(步长)

//int main()
//{
//	//int a = 0x11223344; //内存第一个字节会存44 慢慢慢慢往下
//	//char* pa = &a;
//	//*pa = 0;
//
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + 1) = 1;
//	}
//	return 0;
//}


//野指针 - 指向的位置不可知


//int main()
//{
//	//这里的p就是一个野指针
//	int* p;//p是一个局部的指针变量,局部变量不初始化的话,默认是随机值
//	*p = 20;//非法访问内存了
//
//
//	//2.越界访问
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = 1;
//		p++; //第11次越界了,非法访问,就是野指针了
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//次数局部变量a已经释放
//
//	return 0;
//}

//如何避免野指针
//1.初始化 不知道初始化什么的时候可以用NULL
//int* p = NULL;//NULL在头文件 include<stdio.h> 就是0
//2.小心指针越界
//3.指针指向空间释放及时置NULL指向0x00000000 空指针
//4.指针使用之前检查一下
//if (p != NULL);



//指针的运算
//指针 + - 整数
//指针 - 指针
//指针的关系运算

//int main()
//{
//#define N_VALUES 5
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)//指针的关系运算，指针比大小
//	{
//		*vp++ = 0;//先使用后++ 就是指针加整数
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)//指针比较关系运算
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//指针减去指针 

//int main()
//{
//	//&是指向一个变量的地址，它也是指针可以解开这个地址*解引用
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//指针减指针得到的是指针之间的元素个数
//
//	char c[5];
//	printf("%d\n", &arr[9] - &c[0]);//不同类型的指针不能相减，因为不知道是int*的个数还是char*的个数
//	return 0;
//}

//计数器方法
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//指针相减法
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}

//int main()
//{
//	//strlen(); - 求字符串长度
//	//递归
//	int len = my_strlen("abc");//"abc"就是char数组所以传过去的就是首字符的地址
//	printf("%d\n", len);
//
//	return 0;
//}


//指针相加可以但没什么意义


//指针的关系运算
  
//!!!允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许与指向第一个元素之间的那个内存位置的指针进行比较




//指针和数组

//int main()
//{
//	int arr[10] = { 0 };
//	
//	printf("%p\n", arr); //数组名是数组首元素的地址
//	printf("%p\n", &arr[0]);
//	
//	//结果一样
//	
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p <==> %p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* p = arr;
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);//p[2] --> *(p+2)
//
//	//[]是一个操作符  2和arr是两个操作数
//	//a+b
//	//b+a
//
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]);
//	//arr[2] 编译--> *(arr+2) --> *(arr+2) --> 2[arr]
//	
//	//arr[2] <==> *(arr+2) <==> *(p+2) <==> *(2 + p) <==> *(2+arr) == 2[arr]
//	//2[arr] <==> *(2+arr)
//	return 0;
//}


//二级指针

//int main()
//{
//	int a = 10;
//	int* pa = &a; //pa是指针变量
//	 
//	//ppa就是一个二级指针变量
//	int** ppa = &pa; //pa也是变量, &pa取出pa在内存中的起始地址
//	//解引用两次找到a 
//	
//	//*ppa == pa
//	//*pa == a
//	//**ppa == a
//
//	int*** pppa = &ppa;//三级指针 以此类推 用的少
//	return 0;
//}


//指针数组
//int main()
//{
//	int arr[10];//整型数组 - 存放整型的
//	char ch[5];//字符数组 - 存放字符
//	//指针数组 - 存放指针的数组
//	int* parr[5];//整形指针数组
//	char* pch[5];
//
//	return 0;
//}
