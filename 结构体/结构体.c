
#include <stdio.h>

//有助于数据结构
//结构体 描述复杂对象 可以让c语言创建一个新的类型

//来存放一组不同类型的数据
//struct 结构体名{
//结构体所包含的变量或数组
//};
//不能初始化

//创建一个学生
struct Stu
{
	char name[20]; //字符在数组中的存储是连续的,所以char数组能存中文
	int age;		//当然，如有需要也可以同时存入英文和中文；

					//总之，char类型一个字节用一个% c就可以表示，中文需要两个% c% c才能表示
	double score; // %lf 打印双精度浮点 ，单精度用%f
};

//创建一个书的类型
struct Book
{
	char name[20];
	float price;
	char id[30];
};
int main()
{
	
	struct Stu s = { "张三", 20, 85.5 };//结构体的创建和初始化
	printf("1: %s %d %lf\n", s.name, s.age, s.score);  //%s应该是打印char数组中所有数据
		//成员运算符"." 结构体变量.成员变量 点操作符使用
	struct Stu *ps = &s;   //结构体指针
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);//前面%对应的东西不要对应错误了
	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);//前面%对应的东西不要对应错误了
	                        // "->" 用法 结构体指针 -> 成员变量名
	return 0;

}

