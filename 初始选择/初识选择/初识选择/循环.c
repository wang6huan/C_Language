#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
ѭ��
int main()
{
	int line = 0;
	while (line<30000)
	{
		printf("д����:%d��\n", line );
		line++;
	}
	if (line == 30000)
	{
		printf("��offer");
	}
	return 0;
}



c���Ժ���
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2); //�������
	//int num = num1 + num2;
	//�����ķ�ʽ���
	int sum = Add(num1, num2);
	printf("%d\n", sum);
	return 0;
}



//����
int main()
{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//.........................

	//���� - һ����ͬ����Ԫ�صļ���

	//10������1-10������
	int abc[10] = { 1,2,3,4,5,6,7,8,9,11 };
	//���������±�������
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", abc[i]);   //ѭ��ȫ����ӡ
		i++;
	}
	char ch[5] = { 'a','b','c' };//����ȫ��ʼ����ʣ���Ĭ��Ϊ0

	return 0;
}
 
int main()
{
	int a = 9 / 2;
	float b = 9 / 2; //��������
	float c = 9 / 2.0; 
	int a = 9 % 2; //��ѧ����mod(Ĥ)��������
	printf("%f\n", c);
	return 0;
}

λ�Ʋ�����
int main()
{
	int a = 3;
	int b = a << 1; //���Ʋ����� -- �ƶ����Ƕ�����λ,�������һλ����
	//int��4��bitλ 00000000000000000000000000000010
	printf("%d\n", b);
	return 0;
}


//λ������:
//& ��λ��
//| ��λ��
//^ ��λ���

//��ֵ������
int main()
{
	int a = 2;

	a = a + 5;
	a += 5;

	a = a - 3;
	a -= 3;

	a = a % 3;
	a %= 3;
	return 0;
}

// a+b;
// + ��2��������Ϊa&b ����Ϊ˫Ŀ������,��Ŀֻ��һ��������
// +a Ϊ��Ŀ����ֵ ����ѧ����һ�����Ӻſ�ʡ��
int main()
{
	//0 ��ʾ�٣���0������

	int a = 9;
	int b = 0;  //�ٱ���涨1
	printf("%d\n", !a); 

	if (a)
	{
		//���aΪ��,����
	}

	if (!a)
	{
		//���aΪ��,����
	}

	int c = 5;
	c = -c;
	c = +c;
	printf("%d\n", c);
	return 0;
}


int main()
{
	//sizeof��һ�������� �������ͺͱ����Ĵ�С(��ռ�ַ���
	int a = 10;
	printf("%d\n", sizeof(int));//�����Ͳ���ʡ��
	printf("%d\n", sizeof(a));
	//sizeof�������ſ���ʡ�ԣ����Բ��Ǻ���,���Ƽ�
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[0]));
	int sz = sizeof(arr) / sizeof(arr[0]);//������10��Ԫ������ռ�ַ� �� һ��Ԫ������ռ�ַ� == ����
	return 0;
}



