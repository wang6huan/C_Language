
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
int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}

int main()
{
	//strlen(); - 求字符串长度
	//递归
	int len = my_strlen("abc");//"abc"就是char数组所以传过去的就是首字符的地址
	printf("%d\n", len);

	return 0;
}
