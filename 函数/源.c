#include <stdio.h>
#include <string.h> //strcpy



//Ƶ������ʹ�õĺ������ٷ�дΪ�⺯��������Ҫ����ͷ�ļ�
//����׼�ˣ�Ҫ��Ȼд����ӡÿ���˶�д�Ĳ�һ��printf�����͹ٷ�����д��,��ֱ�����������������



//C���Գ��ú���

//IO����(�����������) printf scanf getchar putchar
//�ַ����������� strcmp strlen
//�ַ���������(�����ַ� ��дרСд �жϴ�Сд) toupper
//�ڴ�������� memcpy memcmp memset
//ʱ�����ں��� time
//��ѧ���� sqrt pow
//�����⺯��

//int main()
//{
//	//�ڶ����������ַ������ȣ���ʹ��strlen()����ֱ��������мǣ���ʹ��strlen()����ַ�������ʱ������ + 1 ��Ϊ\0��
//	//������ǵ�ַ
//	char arr1[20] = { 0 }; //{} ��[] �����������
//	char arr2[] = "hello huan";
//	strcpy_s(arr1, 20, arr2); //��arr2��ַ���Ƶ�arr1 ��20�ֽڿռ��11���ַ�����\0
//	printf("%s\n", arr1); //���ַ���%s��ӡarr1
//
//	return 0;
//}

//memory - ���� - �ڴ�
//memset - �ڴ�����

int main()
{
	char arr[] = "hello huan";
	memset(arr, 'x', 5); //ֱ�Ӳ����ڴ�ռ䣬��ϸ����������int value�������ַ�
	printf("%s\n", arr);
	return 0;
}