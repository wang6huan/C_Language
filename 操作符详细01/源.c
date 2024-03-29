#include <stdio.h>

//算数操作符 
//int main()
//{
//	int a = 3 / 5;
//	printf("%d\n", a); //商为0余为3 值为0
//
//	float a = 6 / 5; //首先6 / 5是整数除法值为1 再放到 浮点数a里, 不是浮点数的问题
//	printf("%f\n", a); //值为 1.000000
//	
//	float a = 6 / 5.0; // 6 / 5.0 其中有浮点数 就是浮点数除法 5.0默认double类型 改5.0f就单精度
//	printf("%f\n", a); //值为 1.200000
//
//	int a = 7 % 3;// 不能摸小数
//}


//位移操作符


//int main()
//{
//	int a = 2;
//
//	int b = a << 1;
//
//	printf("%d\n", b);
//	return 0;
//}

//1. 算数右移
//右边丢弃，左边补原符号位

//2.逻辑右移
//右移丢弃，左边补0

//对于负数  内存存放的是二进制的补码
//整数的二进制表示形式：有三种
//原码：直接根据数值写出的二进制序列就是原码
//反码：原码的符号不变，其他位按位取反就是反码
// 补码：反码+1，就是补码

//int main()
//{
//	int a = -1;
//
//	int b = a >> 1;
//
//	printf("%d\n", b); //还是-1
//	//说明当前的右移操作符使用的是 算数右移
//	return 0;
//}


//位操作符 只能是整数  
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//// & - 按(二进制)位与   和&&相似二进制1和1 就是1 其他就是0
//	////00000000000000000000000000000011
//	////00000000000000000000000000000101
//	//
//	////00000000000000000000000000000001
//	//int c = a & b;
//	//printf("%d\n", c); //打印为 1 
//
//
//	// | - 按(二进制)位或 除了 0和0 其他都是1
//	//int c = a | b;
//	////00000000000000000000000000000011
//	////00000000000000000000000000000101
//
//	////00000000000000000000000000000111
//
//	//printf("%d\n", c);// 打印为 7
//
//
//	// ^ 按(二进制)位异或 相同为0 相异为1
//	int c = a ^ b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//
//	//00000000000000000000000000000110
//
//
//	//例子
//	int a = 3;
//	int b = 5;
//	//交换数据
//	//(1) 数据会溢出
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	//(2)
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b; 
//	printf("%d\n", c);// 打印为 7
//	return 0;
//}

//求一个数在内存中存储的二进制 1 的个数
//int main()
//{
//	int a = 13;
//	//用按位与 右移操作符移动a
//	//00000000000000000000000000001101
//	//00000000000000000000000000000001
//	//00000000000000000000000000000001
//	int count = 1;
//	int num = 0;
//	for (int i = 1; i <= 32; i++)
//	{
//		if ( (a & 1) == 1 )
//		{
//			num++;
//		}
//		a = a >> 1;
//	}
//	printf("整型内存中的二进制有%d个1", num);
//
//	return 0;
//} 



//赋值操作符 = 

//复合赋值符  +=  -=  *=  /=  %=  >>= <<=  &= |= ^=
//a = a >> 2;
//a >>= 2;

//单目操作符 ! - + &  sizeof  ~  ++  ==  *  (括号里放类型强制类型转换)

// ! 真变假 非零变0 假变真 0变1

// - 负数  a = -a

// + a = +a

// & 两个操作数就是双目操作符按位与

// sizeof 返回单位是字节 计算类型长度 sizeof(填计算的变量可以省略括号或者直接放类型不可省略括号) 所以说名sizeof是一个操作符不是函数 因为它可以省略括号
// int arr[10]   int [10]是数组类型所以  sizeof(int [10]) 为 40字节
//int main()
//{
//	short s = 5;
//	int a = 10;
//	
//	printf("%d\n", sizeof(s = a + 2));  //值为2 判断了表达式谁说了算打印出2
//	printf("%d\n", sizeof(s + a + 2));  //值为4  
//	printf("%d \n", s); //值为5 所以sizeof括号中放的表达式是不参与运算的
//} 


// ~ 内存中的二进制按位取反不管你符号位不符号位 被按位取反的那个数的内存还是没变的 除法自己给自己赋值

// ++ 如果是后置++就先使用后赋值    前置++先赋值后使用  

// *
//int main()
//{
//	int a = 10;
//	&a;  //& - 取地址操作符
//	printf("%p\n", &a); //打印16进制地址
//
//	int* pa = &a; //pa里用来存放地址 - pa就是一个指针变量
//	*pa = 20; //* - 解引用操作符 - 间接访问操作符
//	printf("%d\n", a); //打印出20
//	return 0;
//}


// (括号里放类型)    强制类型转换
//int main()
//{
//	int a = (int)3.14; //这样就不会报错了
//	
//	return 0;
//}


//关系操作符 > >= < <= != ==  

//比较两个字符串相等 不能使用 ==、


//逻辑操作符 

// && 逻辑与

// || 逻辑或 

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++; //当第一个a++的结果为0时后面就不用算了 所以后面不会运行
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	
//	a = 1, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++; //当第一个a++为真，后面就不用运算了
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	
//	return 0;
//}


// ? : 三目操作符   如果表达式1结果为真 表达式2的结果就计算 表达式3不计算 反之亦然
// b = (a > 5 ? 1 : -1); //如果a > 5 赋值1 否则 -1
// 表达式1为真 计算表达式2并为最终结果 否则计算表达式3的结果


// , 逗号表达式

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	// 从左向右依次计算,但是整个表达式的结果是最后一个表达式的结果
//	int d = (c = 5, a = c + 3, b = a - 4, c += 5);
//	
//	printf("%d\n", a);
//
//	// 从左向右依次计算,但是整个表达式的结果是最后一个表达式的结果
//	if (a = b + 1, c = a / 2, d > 0)
//	{
//
//	}
//
//	return 0;
//}


// [] 下标引用操作符
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	     //这是定义数组大小的语法格式，不是下标引用操作符
//
//	printf("%d\n", arr[4]); // [] - 下标引用操作符
//	//[] 的操作数是  arr ，4 两个操作数 一个数组名 一个索引值 缺一不可
//	//3 + 5; 也是加法操作符有两个操作数
//	return 0;
//}

//函数定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test()
//{
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	//函数调用操作符
//	int ret = Add(a, b);// () - 函数调用操作符 这是3个操作数
//
//	test(); //只有一个操作数 test
//
//}

//结构成员访问操作符
// .
// ->

//结构体
// int float char short
//double long

//书: 书名, 书号, 定价
//人: 名字, 年龄, 性别 

//自己创造一个自定义类型 和mysql有点像
//struct Book
//{
//	//结构体的成员(成员变量)
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	//int num = 10;
//	//结构体变量名.成员名
//	struct Book b = {"C语言", "C2022810", 55};
//	
//	struct Book * pb = &b;
//	//结构体指针 -> 成员名
//
//	                   // pb没解引用 也可以写成(*pb).name
//	printf("书名: %s\n", pb -> name);
//	printf("书号: %s\n", pb -> id);
//	printf("定价: %d\n", pb -> price);
//
//	//printf("书名: %s\n", b.name);//和数据库很像
//	//printf("书号: %s\n", b.id);
//	//printf("定价: %d\n", b.price);
//	return 0;
//}





// 表达式求值
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a + b * 7; //表达式的求值的顺序一部分是由操作符的优先级和结合性决定
//	//有些表达式的操作数在求值的过程中可能需要转换为其他类型
//
//	return 0;
//}
//
////整型提升
////如何进行提升 - 整形提升是按照变量的数据类型的符号位来提升的
//
//
//int main()
//{
//	char a = 3;// (注意内存运算的是补码,内存存的也是补码)
//	//00000000000000000000000000000011
//	//00000011 - a
//
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//
//	char c = a + b; //按符号位提升
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010	
//	//100000010 - c
//	printf("%d\n", c); //打印%d是打印的整型,char类型不够所以要整型提升
//	
//	//11111111111111111111111110000010 - 补码
//	//11111111111111111111111110000001 - 反码
//	//10000000000000000000000001111110 - 原码
//	// -126 
//
//	//CPU内的整型运算器的操作数的字节长度一般是int 类型的字节长度，即四个字节。
//	//因此即使是两个char（ char类型为一个字节）类型的数相加，在CPU相应的运算器件中也很难直接进行相加，这时候就要进行整型提升到四个字节才能进行相加计算。
//	
//	//如何进行提升 - 整形提升是按照变量的数据类型的符号位来提升的
//
//	//发现a和b都是char类型的, 都没有达到一个int的大小
//	//这里就会发生整型提升
//	printf("%d\n", c);
//	
//	return 0;
//} 

//整型提升例子
//int main()
//{
//	//sizeof里面的表达式一般不参与运算感觉有点假,但是类型是最终类型you know
//	//sizeof（）这是一个运算符，并不是一个函数，其作用是用来得到一个变量或者类型在本环境下所占用的内存字节数，这个是编译时期就已经被编译器计算出来，不会再运行时来决定，基本不会占用太大内存，也不会影响运行速度（其影响基本可以忽略）
//	char c = 1;
//	printf("%u\n", sizeof(c));//1 
//	printf("%u\n", sizeof(+c));// 4 达不到整型大小的4字节就整型提升
//	printf("%u\n", sizeof(-c));// 4
//	//%d是输出有符号位整数，%u是输出无符号位整数，sizeof输出的就是无符号位
//	return 0;
//}
//




//算术转换
//不同类型运算向精度高的大的转换

//int main()
//{
//	int a = 4;
//	float f = 4.5f;
//	a + f;
//	return 0;
//}


//int main()
//{
//	int a = 4;
//	int b = 5;
//	//int c = a + b * 7;//优先级决定了计算顺序
//	int c = a + b + 7;//优先级不起作用,结合性决定了顺序
//	return 0;
//}

//不能写成问题表达式

//表达式1
//a * b + c * d + e * f
//这个表达式就有两种计算方式

//表达式2
// c + --c
// 加好左操作数的值是在--c前准备好和--c之后准备好，不知道

//代码3-非法表达式
//int main()
//{
//	int i = 10;
//	i = i-- - --i * (i = -3) * i++ + ++i;
//	printf("i = %d\n", i);
//	return 0;
//}
//在不同编译器产生不同结果，猪队友

//代码4
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun(); //这个编译器是 2-3*4
//	printf("%d\n", answer);//输出多少
//	return 0;
//}

//垃圾代码5
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);//每个编译器计算顺序不同
//	printf("%d\n", ret);
//	return 0; 
//}
//用汇编语言看 
//寄存器: eax ebx ecx edx ebp esp





//数组作业
//实现init() 初始化数组为0
//实现print() 打印数组的每个元素
//实现reverse() 函数完成数组元素的逆置

//void init(int arr[], int sz)
//{
//	for ( int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		arr[left] = arr[left] ^ arr[right];
//		arr[right] = arr[left] ^ arr[right];
//		arr[left] = arr[left] ^ arr[right];
//		right--;
//	}
//		
//	
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}




//交换数组
//交换一样大小的数组内容
int main()
{
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };

	int sz = sizeof(arr1) / sizeof(arr1[0]);
	
	for (int i = 0; i < sz; i++)
	{
		int change = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = change;
	}
	
	return 0;
}