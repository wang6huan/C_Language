#include <stdio.h>
//
//
////什么是语句，一个分号就是一个语句;
////; 空语句
//
////c语言如何表示真假 非0就是true
////0就是假
//
//
////语法结构
////if (表达式)
////{                    //只有一条语句也可以不打{}哦
////	;真就执行，非零
////}
//
//
//int main()
//{
//	int age = 60;
//
//	if (18)
//	{
//		printf("少年\n");
//	}
//	//这个是错误写法,当18 <= age时会变成1为true 1<26 又为true
//	/*else if (18 <= age < 26)
//	{
//		printf("青年\n");
//	}*/
//
//
//	//经量将age放在前面,对比更清晰
//	else if (age >= 18 && age < 26)
//	{
//		printf("青年\n");
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe");
//		else()
//			printf("haha");
////else跟最近的if匹配
//}
//
//
//if (condition)
//{
//	return x;
//}
//return y;
//
//if (condition)
//{
//	return x;
//}
//else
//{
//	return y;
//}
//
////两个意思一样,return返回给函数值然后结束，不会在执行下面的语句了
//
//if(1)
//if为1就执行,或者非零，因为判断为true就为1


//int main()
//{
//	int num = 3;
//
//	if (num = 5)
//	{
//		printf("%d", num = 6);
//	}
//	return 0;
//}
//
////重点
//int main()
//{
//	int num = 3;
//
//	//常量不能赋值
//	if (5 == num)//当少写等号直接就编译不过去，很好找错误如果num == 5 少写 num = 5那并没有错误但结果完蛋
//	{
//		printf("%d", num = 6);
//	}
//	return 0;
//}

//int main()
//{				//支持整形和常量表达式和ASCALL应该
//	int day = 0; //字符也可以,字符存储也是整形一种ASCALLL码值
//
//	scanf("%d", &day);
//	switch (day+1) //浮点型不行，要整形表达式,好像可以用有变量的表达式,case()中不行
//	{
//	case 1+9 : //必须常量表达式或常量，不能是变量
//		
//	case 2 :
//		switch (day)
//		{
//		default:
//			break;
//		}
//	case 3 :
//		
//	case 4 :
//		
//	case 5 :
//		printf("工作日\n");
//		break;
//	case 6 :
//		
//	case 7 :
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");//case中都不成立是执行
//		break;
//	}
//	//case决定入口 break决定出口
//	return 0;
//}

//int main()
//{
//	while (1)
//		printf("为非0就循环啦");
//
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			break;//在while循环中,break用于永久的终止循环，在if里面居然可以管理while
//		}
//		
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue; //作用为跳过本次循环continue后边的代码，然后回到判断句
//
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

	
////grtchar 从键盘获取一个字符   int 返回政协为ASCLL值 如果读取失败返回EOF (end of file 文件结束标志 -1) 你看看头文件里EOF怎么定义的，一般是可以的，因为字符对应的码不会是负数，但建议就用EOF，它存在的意义就是避免不必要的麻烦和意外
////和键盘中有个缓冲区,缓冲区是空的就等待 当输入 A 和回车 A\n 先打印A 然后回去打印\n相当于换行，会读取如何字符
//int main()
//{
//	int ch = 0;
//	//Ctrl + z - getchar读到了EOF
//	while ((ch = getchar() != EOF))//输入的字符没有报错就为1
//	{
//		putchar(ch); //打印字符和printf %c相似
//	}
//	return 0;
//}


int main()
{

}