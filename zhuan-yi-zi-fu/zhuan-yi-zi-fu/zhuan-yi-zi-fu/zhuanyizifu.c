
#include<stdio.h>

#include<string.h>

int main()
{   //ת���ַ���ת����ԭ������˼
	printf("c:\\test\\test.c"); // \t�൱��Tab-ˮƽ�ַ���
	printf("ab\ncd");

	return 0;
}

int main()
{
	printf("%s\n", "(are you ok??)");   /* ??) ������  ]  ����ĸ�� ��?ǰ��\��ֹʶ��*/
	printf("%c\n", 'a');
	printf("%c\n", '\'');  //  \'��ӡ '

	printf("%s\n", "abc");
	printf("%s\n", "a");
	printf("%s\n", "\"");
	printf("%s\n", "'"); 
	printf("\a");  //���棬����

	return 0;
} 

int main()       //     \ddd�˽���   \xddʮ������
{ 
	printf("%c\n", '\130'); //�˽���130��ʮ����Ϊ88
	 //X   --  ASCLL��ֵ��88
	printf("%c\n", '\101'); //A - 65 - 8����Ϊ: 101
	printf("%c\n", '\x30'); //40 - '0'
	printf("%d\n", strlen("abc"));
	printf("%d\n", strlen("c:\test\328\test.c"));
	printf("%s\n", "c:\test\328\test.c");
	return 0;
}