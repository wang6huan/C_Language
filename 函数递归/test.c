#include <stdio.h>
//
////int main()
////{
////	printf("huan\n");
////	main();//���ݹ� �ᱨ��stack(ջ)���
////	return 0;
////}
//
////����һ������ֵ(�޷���),����˳���ӡ����ÿһλ�����磺����1234�����1 2 3 4
////1234%10 =            4
////1234/10 = 123%10 = 3
////123/10 = 12%10 = 2
////12/10 = 1%10 = 1
////1/10 =       0
//
//void print(unsigned int n)
//{
//	if (n > 9)  //���������ݹ� ʲôʱ��ֹͣ
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
////                    ��Ҫ����
////�ݹ���д���������� 1���������������������������������ʱ�򣬵ݹ�㲻�ټ���
////                   2ÿ�εݹ���ú�Խ��Խ�ӽ������������
//
//
//
//int main()
//{
//	unsigned int num = 0; //�޷���λ����
//	scanf_s("%u", &num); //����   %u����unsigned int ����num���ڴ�ռ���
//	print(num); //�Լ����庯����print�������Դ�ӡ�����������ֵ�ÿһλ
//
//	return 0;
//}
//
//
////����������������Ҫ������һ���� ����
//
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);  //����ջ���   ջ���žֲ������ͺ����β� ����ʱ�ռ䣬��ʱ���� 
//		              //����         ��̬�ڴ���� malloc/free calloc realloc�ȵ����ݽṹ���õ�
//					  //��̬��       ȫ�ֱ���  ��̬����
//	}
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}

//д�ݹ�����ʱ��
// 1 �������ݹ飬��������������ÿ�εݹ�ƽ���������
// 2 �ݹ��β���̫��

//#include <string.h>
//
////int my_strlen(char* str)
////{
////	int count = 0; //'\0'��һ��ascii�����ַ�,��ת���ַ�
////	while (*str != '\0') //�ַ�����==�Ƚ� �ַ�������==�Աȵ����ڴ��ַ
////	{
////		count++;
////		str++; //char��ַ��1  �����int��ַ�Զ���4
////	}
////	return count;
////}
//
//
//int my_strlen(char* str) //�ڴ��ַ�㿴����16���ƣ�һλ��ռ2����4λ
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1); //str++�Ǻ���++ �� ++str�����õ����ᳫ��������������ڸı���str��̫��
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "huan";
//	//['h'] ['u'] ['a'] ['n'] ['\0']
//	printf("%d\n", my_strlen(arr));
//	//ģ��ʵ��һ��strlen����
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//
//	int i = 0;
//	int ret = 1;
//	//����
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret + i;
//	}
//	printf("%d", ret);
//
//	return 0;
//}


//int Fac(int n)
//{
//	if (n > 1)
//	{
//		return n * Fac(n - 1);
//	}
//	else if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		printf("%s", "n����<1");
//		return 0;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Fac(n);
//
//	printf("%d\n", ret);
//	return 0;
//}
//��һЩ���ܿ����õ����ķ�ʽ��ʵ�֣�Ҳ����ʹ�õݹ�

//���n��쳲�������

//int count = 0;
//�ݹ������⣬Ч��̫��
//int Fib(int n)
//{
//	if (n == 3) //������쳲����������������Ĵ���
//	{
//		count++; 
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2); //�ظ������ļ���
//	}
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n < 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (int i = 2; i < n; i++)
//		{
//			
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//	
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//	
//	return 0;
//}

//��ŵ�� 1 3 7    2��n�η���һ�ݹ�  �е������

//������̨�� һ�ο�����1����2��̨��   n��̨���м������� �Լ�д

int Jump(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>1)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	
	printf("%d", Jump(n));
	return 0;
}