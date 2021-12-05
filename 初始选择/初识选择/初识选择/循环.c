#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
循环
int main()
{
	int line = 0;
	while (line<30000)
	{
		printf("写代码:%d行\n", line );
		line++;
	}
	if (line == 30000)
	{
		printf("好offer");
	}
	return 0;
}



c语言函数
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2); //输入代码
	//int num = num1 + num2;
	//函数的方式解决
	int sum = Add(num1, num2);
	printf("%d\n", sum);
	return 0;
}



//数组
int main()
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//.........................

	//数组 - 一组相同类型元素的集合

	//10个整型1-10存起来
	int abc[10] = { 1,2,3,4,5,6,7,8,9,11 };
	//数组是用下标来访问
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", abc[i]);   //循环全部打印
		i++;
	}
	char ch[5] = { 'a','b','c' };//不完全初始化，剩余的默认为0

	return 0;
}
 
int main()
{
	int a = 9 / 2;
	float b = 9 / 2; //整数除法
	float c = 9 / 2.0; 
	int a = 9 % 2; //数学中是mod(膜)就是余数
	printf("%f\n", c);
	return 0;
}

位移操作符
int main()
{
	int a = 3;
	int b = a << 1; //左移操作符 -- 移动的是二进制位,左移最后一位补零
	//int有4个bit位 00000000000000000000000000000010
	printf("%d\n", b);
	return 0;
}


//位操作符:
//& 按位与
//| 按位或
//^ 按位异或

//赋值操作符
int main()
{
	int a = 2;

	a = a + 5;
	a += 5;

	a = a - 3;
	a -= 3;

	a = a % 3;
	a %= 3;
	return 0;
}

// a+b;
// + 有2个操作数为a&b 所以为双目操作符,单目只有一个操作符
// +a 为单目表正值 和数学法则一样，加号可省略
int main()
{
	//0 表示假，非0就是真

	int a = 9;
	int b = 0;  //假变真规定1
	printf("%d\n", !a); 

	if (a)
	{
		//如果a为真,做事
	}

	if (!a)
	{
		//如果a为假,做事
	}

	int c = 5;
	c = -c;
	c = +c;
	printf("%d\n", c);
	return 0;
}


int main()
{
	//sizeof是一个操作符 计算类型和变量的大小(所占字符）
	int a = 10;
	printf("%d\n", sizeof(int));//求类型不能省略
	printf("%d\n", sizeof(a));
	//sizeof后面括号可以省略，所以不是函数,不推荐
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[0]));
	int sz = sizeof(arr) / sizeof(arr[0]);//数组有10个元素类型占字符 ÷ 一个元素类型占字符 == 个数
	return 0;
}



