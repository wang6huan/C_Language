
#include<stdio.h>

#define MAX 10000 //�����ڴ������ڶ���

//�Ա�
enum Sex
{
	//����ö�����͵ı�����δ������ȡֵ ֮��ֵֻ������3��
	MALE,
	FEMALE,
	SECRET
};

int main()
{
	//1- ���泣��
	 
	 3.14;  //���㳣��
	 10;//���ͳ���
		 'a'; //�ַ�����
	 "abcdef";//�ַ�������

	//2- const���εĳ�����
	const int num = 10; //num�ǳ������������Ǳ��� - ���г����ԣ����ܱ��ı�����ԣ�ԭ���Ǳ���
	
	printf("num = %d\n", num);

	int arr[10] = [0]; //10��Ԫ��
	const int n = 30;
	int arr2[n] = [0]; //n�ǳ����������Ǳ���������

	//3- #define ����ı�ʶ������
	int n = MAX;//MAX�Ǳ�ʶ�����������ܸ�
	printf("%d\n", n);

	//4- ö�ٳ���
	//����һһ�оٵĳ���

	enum Sex s = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);//���Ĭ��0 1 2ֻ�ܳ�ʼ��ֵ�ı䣬�����ǳ���
	return 0;

}