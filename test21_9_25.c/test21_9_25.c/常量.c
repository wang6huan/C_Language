
#include<stdio.h>

#define MAX 10000 //可以在大括号内定义

//性别
enum Sex
{
	//这种枚举类型的变量的未来可能取值 之后赋值只能是这3个
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	//1- 字面常量
	 
	 3.14;  //浮点常量
	 10;//整型常量
		 'a'; //字符常量
	 "abcdef";//字符串常量

	//2- const修饰的常变量
	const int num = 10; //num是常变量，根还是变量 - 具有常属性（不能被改变的属性）原本是变量
	
	printf("num = %d\n", num);

	int arr[10] = [0]; //10个元素
	const int n = 30;
	int arr2[n] = [0]; //n是常变量，还是变量，不行

	//3- #define 定义的标识符常量
	int n = MAX;//MAX是标识符常量，不能改
	printf("%d\n", n);

	//4- 枚举常量
	//可以一一列举的常量

	enum Sex s = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);//输出默认0 1 2只能初始赋值改变，所以是常量
	return 0;

}