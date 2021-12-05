
#include<stdio.h>

#include<string.h>

int main()
{   //转义字符，转变了原来的意思
	printf("c:\\test\\test.c"); // \t相当于Tab-水平字符；
	printf("ab\ncd");

	return 0;
}

int main()
{
	printf("%s\n", "(are you ok??)");   /* ??) 解析成  ]  三字母词 在?前加\防止识别*/
	printf("%c\n", 'a');
	printf("%c\n", '\'');  //  \'打印 '

	printf("%s\n", "abc");
	printf("%s\n", "a");
	printf("%s\n", "\"");
	printf("%s\n", "'"); 
	printf("\a");  //警告，蜂鸣

	return 0;
} 

int main()       //     \ddd八进制   \xdd十六进制
{ 
	printf("%c\n", '\130'); //八进制130的十进制为88
	 //X   --  ASCLL码值是88
	printf("%c\n", '\101'); //A - 65 - 8进制为: 101
	printf("%c\n", '\x30'); //40 - '0'
	printf("%d\n", strlen("abc"));
	printf("%d\n", strlen("c:\test\328\test.c"));
	printf("%s\n", "c:\test\328\test.c");
	return 0;
}