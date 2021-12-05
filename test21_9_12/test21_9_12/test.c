#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//printf的使用需要引用头文件<stdio.h>

int main()//整型+主函数
{
	printf("hello world\n");//printf为库函数-在计算机上打印东西
	
	printf("%d\n", sizeof(char));//sizeof-关键字-操作符-计算类型或者变量所占空间的大小
	//sizeof的单位是字节 byte（字节）=8bit
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));//C语言标准：sizeof(long)>=sizeof(int)
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));//为什么搞这么多整形啊，因为存储少的数字用大的空间更浪费，搞这么多是为了更合理的利用空间

	return 0;//结束函数或返回一个函数值-首尾呼应 在此之后的代码不运行 返回0代表程序正常退出非0异常return 1代表函数非正常终止
}

/*生活中的一些数据：
  有些数据不能变:血型，性别，圆周率
  有些数据一定可变:工资，年龄，体重*/
//C语言如何描述:常量和变量

int main()
{
	int age = 19;
	double weight = 50.12;
	age = age + 1;//age被重新定义啦，答案显示age可变的，所以是变量    // =号是重新定义的意思,==才是等于，所以一个变量一开始等于什么后面都能重新定义，变化
 //掰正了int age =20了
	printf("%d\n",age);//%d是用来输出十进制整型数据的实际长度输出
	printf("%lf\n", weight);
	
	return 0;

	//变量的分类
}
int a = 100;//大括号外部定义为全局变量
int main()
{
	int a = 10;//局部变量
	printf("%d\n", a);//名字冲突的情况下局部优先，不推荐全局和局部名称一致
	
	return 0;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	scanf("%d %d", &a, &b);//scanf是输入函数-第一个%d（整数）放入a中（&为区域地址）第二个放入b中
	c = a + b;
	printf("c=%d", c);  //这个函数内容意思是输出c=整型，整形为c整形？？？？？？？
	return 0;
  }