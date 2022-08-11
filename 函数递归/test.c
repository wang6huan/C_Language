#include <stdio.h>
//
////int main()
////{
////	printf("huan\n");
////	main();//死递归 会报错stack(栈)溢出
////	return 0;
////}
//
////接受一个整型值(无符号),按照顺序打印它的每一位，列如：输入1234，输出1 2 3 4
////1234%10 =            4
////1234/10 = 123%10 = 3
////123/10 = 12%10 = 2
////12/10 = 1%10 = 1
////1/10 =       0
//
//void print(unsigned int n)
//{
//	if (n > 9)  //满足条件递归 什么时候停止
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
////                    必要条件
////递归书写的两个条件 1存在限制条件，当满足这个限制条件的时候，递归便不再继续
////                   2每次递归调用后越来越接近这个限制条件
//
//
//
//int main()
//{
//	unsigned int num = 0; //无符号位整型
//	scanf_s("%u", &num); //输入   %u就是unsigned int 存入num的内存空间里
//	print(num); //自己定义函数叫print函数可以打印参数部分数字的每一位
//
//	return 0;
//}
//
//
////当满足两个条件必要条件不一定对 如下
//
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);  //报错栈溢出   栈区放局部变量和函数形参 等临时空间，临时变量 
//		              //堆区         动态内存分配 malloc/free calloc realloc等等数据结构常用的
//					  //静态区       全局变量  静态变量
//	}
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}

//写递归代码的时候：
// 1 不能死递归，都有跳出条件，每次递归逼近跳出条件
// 2 递归层次不能太深

//#include <string.h>
//
////int my_strlen(char* str)
////{
////	int count = 0; //'\0'是一个ascii控制字符,是转义字符
////	while (*str != '\0') //字符可以==比较 字符串不行==对比的是内存地址
////	{
////		count++;
////		str++; //char地址加1  如果是int地址自动加4
////	}
////	return count;
////}
//
//
//int my_strlen(char* str) //内存地址你看的是16进制，一位就占2进制4位
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1); //str++是后置++ ， ++str可以用但不提倡在这个生命周期内改变了str不太好
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "huan";
//	//['h'] ['u'] ['a'] ['n'] ['\0']
//	printf("%d\n", my_strlen(arr));
//	//模拟实现一个strlen函数
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//
//	int i = 0;
//	int ret = 1;
//	//迭代
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret + i;
//	}
//	printf("%d", ret);
//
//	return 0;
//}


//int Fac(int n)
//{
//	if (n > 1)
//	{
//		return n * Fac(n - 1);
//	}
//	else if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		printf("%s", "n不能<1");
//		return 0;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Fac(n);
//
//	printf("%d\n", ret);
//	return 0;
//}
//有一些功能可以用迭代的方式来实现，也可以使用递归

//求第n个斐波那契数

//int count = 0;
//递归可以求解，效率太低
//int Fib(int n)
//{
//	if (n == 3) //第三个斐波那契数计算机计算的次数
//	{
//		count++; 
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2); //重复大量的计算
//	}
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n < 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (int i = 2; i < n; i++)
//		{
//			
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//	
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//	
//	return 0;
//}

//汉诺塔 1 3 7    2的n次方减一递归  有点难理解

//青蛙跳台阶 一次可以跳1个或2个台阶   n个台阶有几次跳法 自己写

int Jump(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>1)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	
	printf("%d", Jump(n));
	return 0;
}