#include <stdio.h>//printf
#include <Windows.h>//Sleep
#include <string.h>//strlen 和 strcmp 都属于字符串函数
#include <stdlib.h>//rand 生成随机数 srand
#include <time.h> //time
#include <math.h> //sqrt

//int main()
//{
//	char arr1[] = "welcome to huan!!!!!!";// \0也在里面
//	//如果用sizeof用法，得减2，sizeof算的是所占内存字节数，包括\0
//	char arr2[] = "#####################";
//	int left = 0;
//	int right = strlen(arr1) - 1; //strlen 求字符串长度 \0前的
//
//	while (left <= right)//当left 和right相等时还要再替换一边
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//		Sleep(1000); //睡眠一秒，Sleep函数单位毫秒，Windows引用
//		system("cls");//清空屏幕
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	//假设正确的密码是字符串"123456"
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);//数组名字本来就是地址所以不用取地址
//		//if (password == "123456")//两个字符串的比较不能使用==, 应该使用strcmp专门比较字符串， 这种写法是在比较两个字符串首字符地址
//		if (strcmp(password, "123456") == 0)//将password 和 "123456"同时传给strcmp,它会比较如果正确返回0 当0对于0时if函数执行 strcmp（a，b）函数，如果返回值<0则表示a<b;返回值>0则表示a>b;返回值=0则表示a=b 比较的是ASCLL码的值 从前往后一个字节一个字节比abcder 和 abccacacac  前3相等第四个dASCLL大 那整个就大 对应位置
//		{
//			printf("登录成功\n");
//			break;//可跳出当前循环语句和switch，if语句没有专门跳出的。你为什么要跳if语句？？？
//		}
//		else
//		{
//			printf("密码错误,重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码都错误，退出程序\n");
//	}
//}



//1,自动生成一个1-100之间的随机数
//2,猜数字
//3,游戏可以一直玩，除非退出
//void menu()
//{
//	printf("**************************************\n");
//	printf("***************  1. play  ************\n");
//	printf("***************  0. exit  ************\n");
//	printf("**************************************\n");
//}

//void game()//猜数字实现
//{
//	//时间一直在变化，时间戳   时间戳就是一个数字换算来的可以百度
//	//srand((unsigned int)time(NULL));//当srand变化rand跟着变化  time函数要参数不想用扔个空指针
//	                //time函数的返回类型是time_t 其实是 _int64整型 srand需要unsigned int值 所以强制转换
//	int ret = rand()&100 + 1;//rand函数返回一个0 - 32767，伪随机(return0之后再次启动项目随机数和上次项目一样)，调用rand还要调用srand 设置一个起点
//				//余数在0-99 再＋1 就是1-100
//	int guess = 0;
//	printf("请猜数字:>");
//	scanf("%d", &guess); //空格和制表符，是空白符。空白字符会使scanf()函数在读操作中略去输入中的一个或多个空白字符。
//	while (1)
//	{
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜，猜对了");
//			break;
//		}
//	}
//
//}

//先生成主框架，dowhile,
//int main()
//{
//
//	int input = 0;
//	srand((unsigned int)time(NULL)); //需要在rand之前调用，整个项目执行一次就行了,调用多次不够随机
//	do//先直接执行
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误,重新选择\n");
//			break;
//		}
//
//	} while(input);
//
//	return 0;
//}

////写代码将三个整数按从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		
//		int tmp = b;
//		b = c;
//		c = tmp;     //可以将这些代码变一个函数直接调用
//	}
//
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//求两个数最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int max = m > n ? n : m;
//
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("%d", max);
//			break;
//		}
//		max--;
//	}
//	return 0;
//}


//辗转相除法

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n); //当m<n m%n=m  辗转相除法m赋值n n 赋值m n % m = t
//	int t = 0;
//	while (t = m % n) // m%n == 0正好停止
//	{
//		m = n;
//		n = t;
//		
//	}
//
//}
//最大公约数倍乘(应该是自身加自身)， 于m n取余数,同时为0
//最小公倍数 = m*n/最大公约数


//输出闰年1000-2000

//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//1. 被4整除,不能被100整除是闰年
//		//2. 能被400整除是闰年
//		if ( ( y % 4 == 0 && y % 100 != 0 ) || y % 400 == 0)
//		{
//			printf("%d", y);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}


//打印100-200素数
//素数 == 质数 只能被1和本身整除
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//除了本身和1能被除就不行所以是 2 到 本身-1
//		//判断i是否为素数 2到i-1之间的数字去试除i，看看能不能整除
//		int j = 0;
//		int flag = 1; //假设i是质数
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0; //i进来这个循环就代表它不是质数
//				break;
//			}
//		}
//		//两种可能跳出来，一种是j<i 和除完j=i
//		//if (i == j)
//		//{
//		//	printf("%d\n", i);
//		//}
//		if (flag == 1)//flag==0的时候不会打印当时的i
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("一共有:%d个素数", count);
//	return 0;
//}


//优化
//int mian()
//{
//	int count = 0;
//	int i = 0;
//
//	//  m/a = b  非质数能被整除 排除1 开平方后自身也排除 其他如果不能能整除就是质数
//	//  m = a*b
//	//假如m是非质数那 2到自身开平方就有个数能除它
//	
//	//a和b中一定至少有一个数字是<=开平方m的
//
//	//sqrt - 是开平方函数
//	for (i = 101; i <= 200; i+=2) //再优化 偶数不可能是质数 所以排除偶数从101开始＋2 数据少一半
//	{
//		int j = 0;
//		int flag = 1; 
//		for (j = 2; j <= sqrt(i); j++) //假设它不是质数那因子最小为2，可以排除51-100，再优化就是这个开平方
//		{
//			if (i % j == 0)
//			{
//				flag = 0; 
//				break;
//			}
//		}
//		
//		if (flag == 1)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("一共有:%d个素数", count);
//	return 0;
//}