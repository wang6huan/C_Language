
#include <stdio.h>
//单目操作符 ++ -- (类型) 
int main()
{
	int a = 10;
	int b = a++; 
	
	printf("%d\n", a);//先使用,再++ 应该是再;后变化
	printf("%d\n", b);

	//前置++ 先++, 后使用
	//int a = 10;
	//int b = ++a;

	int c = (int)3.14; //强制类型转换()里放一个类型,不推荐
	printf("%d\n", c);

	//逻辑操作符
	int d = 0; //0为假
	int e = 5; //非零为真
	int f = !d && e; // !强行变真假
	int g = d || e;
		
	printf("%d\n", f);
	printf("%d\n", g);

	//条件操作符(三目操作符)
	
	int a1 = 0;
	int a2 = 0;
	
	a1 > a2 ? a1 : a2;//当?号前面的成立, a1为函数则计算a1,整个表达式是a1的结果, 相当于if函数
		
	return 0;
}