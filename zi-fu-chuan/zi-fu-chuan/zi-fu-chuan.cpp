#include <stdio.h>
#include <string.h>

//�ַ�������һ���ַ� - ��˫������������һ���ַ�

int main()
{
	//�ַ����� - ������һ����ͬ���͵�Ԫ��
	// \0���ַ����Ľ�����׼
	/*char arr[] = "hello";*///�����ַ�����
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0'};//�ڴ������δ֪�ģ�û��\0��ӡ���ַ�����ֹͣ����

	//���ַ�������
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));//��ӡ�����ֵ���ڴ������ʲô��֪���ҵ�\0ֹͣ,\0����Ҫ

	int len = strlen("abc");//string length
	// \0�������ַ������ȵģ� �������ַ���������Ԫ����
	printf("%d\n", len);
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	return 0;
}