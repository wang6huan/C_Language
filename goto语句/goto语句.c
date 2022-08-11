#include <stdio.h>
#include <stdlib.h> //system
#include <string.h> //strcmp



//goto 语句 理论上没有必要的语句
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("hehe\n");
//
//	goto flag; //去flag的地方跳转乱跳 goto去哪里
//	//一个代码goto语句多那就容易乱，跳来跳去
//	return 0;
//}

//关机程序
//只要运行起来，电脑就在一分钟内关机，如果输入：我是猪，就取消关机

//int main()
//{
//	char input[20] = { 0 };
//	//关机 cmd关机
//	//shutdown -s -t 60  设置 时间 60秒
//	//shutdown -a 取消关机
//
//	//c语言关机 函数 system() 意思是 执行系统命令
//	system("shutdown -s -t 60");
//
//again:
//	printf("请注意,你的电脑在一分钟内关机,如果输入我是猪就取消关机\n");
//	scanf("%s", input); //数组名本来就是一个地址，所以不用取地址了
//	if (strcmp(input, "我是猪") == 0)//不能用等号比 ，应该用strcmp() string compare字符串比较 
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//不用goto语句

int main()
{
	char input[20] = { 0 };

	system("shutdown -s -t 60");

	while (1)
	{
		printf("请注意,你的电脑在一分钟内关机,如果输入90胖子就取消关机\n");
		scanf_s("%s", input, 20); //数组名本来就是一个地址，所以不用取地址了 scanf_s后面应该是字节大小20个char 20B
		if (strcmp(input, "我是胖子") == 0)//不能用等号比 ，应该用strcmp() string compare字符串比较 
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}


//goto语句真正适合的场景
//在多重循环中,用break跳出太麻烦时候
int main()
{
	for ()
	{
		for ()
		{
			for ()
			{
				if (disaster)//灾难发生
				{
					goto error;
				}
			}
		}
	}
	error:
	return 0;
}

//goto语句再厉害 也 只能在一个函数范围内跳转 不能跨函数

void test()
{
flag:
	printf("test\n");
}

int main()
{
	goto flag; //不能跨函数
	return 0;
}

