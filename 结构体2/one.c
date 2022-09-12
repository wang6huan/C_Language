
#include <stdio.h>

//数组：一组相同类型的元素的集合

//结构体：也是一些值的集合，但是值的类型可以不同

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	//成员变量
//	struct B sb;
//	char name[20]; //名字
//	int age; //年龄
//	char id[20];
//} s1, s2; //s1和s2也是结构体变量
////s1,s2是全局变量
//
//int main()
//{
//	//s是局部变量
//	struct Stu s = { {'w', 20, 3.14 }, "张三", 30, "20200534"}; //对象
//	
//    //结构体成员怎么访问呢
//	//操作符 . ->
//
//	printf("%c\n", s.sb.c); //%c是单个字符输出
//	printf("%s\n", s.id);
//
//	// -> 的用法
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c); //sb不是指针所以用.就行了
//	return 0;
//}



//结构体传参

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	//成员变量
//	struct B sb;
//	char name[20]; //名字
//	int age; //年龄
//	char id[20];
//};
//
//void print1(struct Stu t) //形参t获得了s的内容
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//
//void print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//
//int main()
//{
//	//s是局部变量
//	struct Stu s = { {'w', 20, 3.14 }, "张三", 30, "20200534" }; //对象
//	//写一个函数打印s的内容
//	print1(s);// 传值调用
//
//	print2(&s);//传结构体变量s的地址过去
//	//传址调用
//
//	//print2的优点,(1)传一个指针大小的参数过去效率高,(2)可以直接通过指针改变s
//	
//	//函数传参时,参数是需要压栈的，如果结构体过大，系统开销就大，性能下降
//	return 0;
//}

//参数调用的参数压栈

//栈，是一种数据结构
//先进的后出,后进的先出    你软考学过一点点啊

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

//每一个函数调用
//都会在内存的栈区上开辟一块空间

int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	c = Add(a, b);

	return 0;
}