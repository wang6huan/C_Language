#include <stdio.h>
#include <string.h> //strcpy

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[ ] = "abc";
//	
//	strcpy(arr1, arr2);
//	//鼠标移动到strcpy上可以看到函数返回类型为 char* 和参数
//
//	return 0;
//}

//自定义函数和库函数一样有, 函数名,返回值类型和函数参数，都需自己设置

//int main()
//{
//	int a = 50;
//	int b = 80;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}
//
//int get_max(int x, int y)
//{
//	return  (x > y) ? (x) : (y);
//}


////函数返回类型的地方写出: void, 表示这个函数不返回任何值，也不需要返回
////出问题了,赋值给x,y改变的x, y
//void Swap(int x, int y) //形式参数 == 形参
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前: a=%d b=%d\n", a, b);
//	Swap(a, b);  真实传递的参数，叫实参
//	printf("交换后: a=%d b=%d\n", a, b);
//	//写一个函数交换两个整形变量值
//	return 0;
//}


//int main()
//{
//	int a = 10;//4个字节的空间
//
//	int* pa = &a;//pa就是一个指针变量
//	*pa = 20;
//
//	printf("%d", a);
//	return 0;
//}


void Swap(int* pa, int* pb)//形式参数 == 形参   //传指调用
{
	int* pc = NULL;
	//"*"的作用是引用指针指向的变量值，引用其实就是引用该变量的地址，“解”就是把该地址对应的东西解开，解出来，就像打开一个包裹一样，那就是该变量的值了，所以称为“解引用”。 也就是说，解引用是返回内存地址中对应的对象。
	//int c = 0;
	pc = pa;
	printf("%d\n", *pc);
	pa = pb;
	pb = pc;
	*pa = 10;
	*pb = 20;//要改变的是实参不是形参
				//解引用*p 含义是*p远程控制这个地址的值
	//c = *pa; //解引用 *pa == a了 控制*pa 就是在控制 a地址里的数
	//printf("%d\n", c);
	//*pa = *pb; //pa = pb 可以变成pa控制 int b 了打印出来就是 b b  
	//*pb = c;
	
	
	
}

int main()
{
	int a = 10;
	int b = 20;
	printf("交换前: a=%d b=%d\n", a, b);
	Swap(&a, &b);//真实传递的参数，叫实参
	printf("交换后: a=%d b=%d\n", a, b);
	//写一个函数交换两个整形变量值
	return 0; //return 只能返回一个值
}



//int main()
//{
//	int a = 50;
//	int b = 80;
//	int max = get_max(a, b);
//	int max = get_max(2 + 5, 3); //实参要有明确的值可以传输常量和表达式，变量
//	int max = get_max(2 + 5, get_max(4, 7)); //实参明确的值可以用函数嵌套
//	printf("%d\n", max);
//	return 0;
//}
//
//int get_max(int x, int y) //函数只是定义x,y只是形式没有空间放,只有在调用(实例化)的瞬间开辟空间,然后生命周期销毁释放空间
//{
//	return  (x > y) ? (x) : (y);
//}


