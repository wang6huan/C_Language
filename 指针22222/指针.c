
#include <stdio.h>

//ָ����������ŵ�ַ�ģ�ָ���С��32λƽ̨��4�ֽڣ���64λƽ̨��8�ֽ�
//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));//4
//	printf("%d\n", sizeof(pc));//4
//	printf("%d\n", sizeof(pf));//4
//	return 0;
//}


//ָ�����͵�����
//1. ָ�����;�����:ָ������õ�Ȩ���ж��
//2. ָ�����;�����,ָ����һ��,���߶�Զ(����)

//int main()
//{
//	//int a = 0x11223344; //�ڴ��һ���ֽڻ��44 ������������
//	//char* pa = &a;
//	//*pa = 0;
//
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + 1) = 1;
//	}
//	return 0;
//}


//Ұָ�� - ָ���λ�ò���֪


//int main()
//{
//	//�����p����һ��Ұָ��
//	int* p;//p��һ���ֲ���ָ�����,�ֲ���������ʼ���Ļ�,Ĭ�������ֵ
//	*p = 20;//�Ƿ������ڴ���
//
//
//	//2.Խ�����
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = 1;
//		p++; //��11��Խ����,�Ƿ�����,����Ұָ����
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//�����ֲ�����a�Ѿ��ͷ�
//
//	return 0;
//}

//��α���Ұָ��
//1.��ʼ�� ��֪����ʼ��ʲô��ʱ�������NULL
//int* p = NULL;//NULL��ͷ�ļ� include<stdio.h> ����0
//2.С��ָ��Խ��
//3.ָ��ָ��ռ��ͷż�ʱ��NULLָ��0x00000000 ��ָ��
//4.ָ��ʹ��֮ǰ���һ��
//if (p != NULL);



//ָ�������
//ָ�� + - ����
//ָ�� - ָ��
//ָ��Ĺ�ϵ����

//int main()
//{
//#define N_VALUES 5
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)//ָ��Ĺ�ϵ���㣬ָ��ȴ�С
//	{
//		*vp++ = 0;//��ʹ�ú�++ ����ָ�������
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)//ָ��ȽϹ�ϵ����
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//ָ���ȥָ��

//int main()
//{
//	//&��ָ��һ�������ĵ�ַ����Ҳ��ָ����Խ⿪�����ַ*������
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//ָ���ָ��õ�����ָ��֮���Ԫ�ظ���
//
//	char c[5];
//	printf("%d\n", &arr[9] - &c[0]);//��ͬ���͵�ָ�벻���������Ϊ��֪����int*�ĸ�������char*�ĸ���
//	return 0;
//}

//����������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//ָ�������
int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}

int main()
{
	//strlen(); - ���ַ�������
	//�ݹ�
	int len = my_strlen("abc");//"abc"����char�������Դ���ȥ�ľ������ַ��ĵ�ַ
	printf("%d\n", len);

	return 0;
}
