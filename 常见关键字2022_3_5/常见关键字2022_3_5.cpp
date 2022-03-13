

#include <iostream>

//int main()
//{
//	auto
//	//局部变量前有auto修饰，被省略掉了
//		
//	extern
//	//用于修饰外部变量
//
//	register 
//	//建议编辑器存放在寄存器中，只是建议
//		//寄存器比高级缓存快
//		//大量频繁使用的数据，建议放,有些聪明编辑器也会自己放
//
//		signed
//		// 有符号位
//		unsigned
//		//无符号位
//
//		static
//		//静态
//
//		union
//		//联合体(公用体)
//
//		void
//		//无-k空
//
//		volatile
//		//懂这个关键字代表c语言学的不错
//
//
//		define 和 include 是预处理指令,不是关键字
//
//		
//	return 0;
//}


//typedef //类型定义-重定义

//typedef unsigned int u_int; //将无符号int 改名为其他，将复杂类型简单化
//int main()
//{
//	unsigned int sum = 4;
//	u_int sum2 = 5;
//
//	return 0;


//static - 静态的
//static 修饰局部变量,改变了局部变量的生命周期(本质上改变了变量的存储类型)
//static 修饰全局变量,使得这个全局变量只能在自己所在的源文件内(.c)内部可以使用其他源文件不能使用！
//static 修饰函数,和修饰全局变量相似,使得函数只能在自己所在的源文件内部使用，不能在其他源文件内部使用
void test()
{
	static int a = 1; //局部变量auto代表创建和出局部销毁，但static没让它销毁，代表它的生命周期变长了
	//static修饰之后并没有变成全局变量

	a++;
	printf("%d", a); //字符串里面可以打出空格,字符串中%d是调用a，多个调用后面a要加逗号再打其他变量
}


int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}

/*
数据结构

栈区 存储 == 局部变量and函数的参数

堆区 存储 == 动态内存分配的！

静态区 存储 == 全局变量 和 static修饰的静态变量
*/



extern int g_val; //声明外部变量
//通常在前extern代表声明外部符号

extern int Add(int x, int y);
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d", sum);
}