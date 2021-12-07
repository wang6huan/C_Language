
#include <stdio.h>
//单目操作符 ++ -- (类型) 
int main()
{
	int a = 10;
	int b = a++; printf("%d\n", a);//先使用,再++ 应该是再;后变化

	printf("%d\n", b);

	//前置++ 先++, 后使用
	//int a = 10;
	//int b = ++a;

	int c = (int)3.14; //强制类型转换()里放一个类型,不推荐
		printf("%d\n", c);
	return 0;
}