
#include<stdio.h>

//C语言提供的关键字 为什么int return都能直接用啊,
//1.c语言提供的,不能自己创建关键字
//2.变量名不能是关键字
int main()
{
	//auto 是自动的 - 每个局部变量都是auto修饰的
	{
		auto int a = 10; //自动创建,自动销毁 - 自动变量
		//auto 省略掉了
		//auto 新的c语言语法中也有其他用法 - 暂时不考虑
	}

	return 0;
}