#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char password[20] = { 0 };
	printf("请输入密码:");

	//转义字符也在ASCLL中哦
	scanf_s("%s", password, 20); //数组名字就是一个地址，所以不需要取地址&
	printf("请确认密码(Y/N):");

	//清理缓冲区
	getchar(); //处理\n   输入123456 空格 789 还是失败 scanf只拿到空格前123456 
	//c语言scanf的用法，输入的字符串不能包含空格  但是你用gets()时，带空格不会输入结束

	//它应该是读中文的前8个二进制转换ASCLL判断是否

	//清理缓冲区
	int tmp = 0;
	while ((tmp = getchar()) != '\n')//加()只是方便看
	{
		;
	}


	//getchar会返回EOF(-1)不是ASCLL，用int存
	int ch = getchar();//显示的时候，你就可以决定是显示65（%d） 还是显示 ‘A’（%c）
	if (ch == 'Y')
	{
		printf("确认成功");
	}
	else
	{
		printf("确认失败");
	}
	return 0;
}

//getchar scanf
//这两个输入函数都是从缓冲区那东西,检测缓冲区有东西就调用
//回车会触发scanf读取信息 123456\n它只会拿123456  \n并不会拿   之后getchar发现缓冲区有\n(回车) 


int main() 
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9') //ASCLL中 0为48 9为57
		{
			continue;
		}
		putchar(ch); //输出字符 能打印！ return是返回不能打印咯
	}
}



int main()
{
	int i = 1;//初始化

	while (i <= 10)//判断部分
	{
		printf("%d", i);

		i++;//调整部分
	}
	return 0;
}

//这个部分有可能会因为你写的代码越来越远，之后不好判断，于是for循环来啦