#include <stdio.h>
#include <string.h>

//��д������һ�� 1��100 �����������г��ֵ�����9
// ��λΪ9 �� ʮλΪ9  99������9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//����1/1-1/2+1/3-1/4+1/5 ...... + 1/99 - 1/100 ��ֵ����ӡ�����

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	double difference = 0.0;
//	for ( i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum += 1.0 / i;
//		}
//		else
//		{
//			sum -= 1.0 / i; //sum��û�� �ټ���ȥ��������
//		}
//	}
//	//sum -= difference;
//	printf("%lf\n", sum);
//	return 0;
//}

//��һ�ֽⷨ
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag; //�Ӽ�������
//	}
//
//	printf("%lf\n", sum);
//	return 0;
//}



//��10���������ֵ
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];  //max�����arr������ĵ�һ��ֵ��ã���������ﶼ�Ǹ��������0�ʹ���
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}


//����Ļ�����9*9�˷��ھ���

//int main()
//{
//	int i = 1;
//	n = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d ", i, j, i * j); //%2d�Ǵ�ӡ����λ���֣������ÿո���� �Ҷ���   %-2d�������
//		}
//		printf("\n");
//	}
//	return 0;
//}


//�����ֺͶ��ֲ��ҽ�����

//�ж�һ�����ǲ�������������


////����һ�������� ���˼��ĳ˷��ھ���
//void print_table(int n)
//{
//	int i = 0;
//	for ( i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for ( j = 1; j <= i ; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	
//	print_table(n);
//
//	return 0;
//}


////�ǵݹ�ʵ���ַ������ַ�������任�������ÿ⺯��
//
////ʵ��strlen
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')  //*str�ǽ⿪���� char���Ϳ���==
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;  //������strlen���±껥��
//	
//	while (left <= right)
//	{
//		char tmp = str[left]; //���鱾��Ҳ��ָ�� ͨ��ָ������ *(str + left) ��һ��ָ��ָ����һ��char
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr); //����arr��Ԫ�صĵ�ַ
//	printf("%s\n", arr);
//	return 0;
//}

//�ݹ�ʵ��

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')  //*str�ǽ⿪���� char���Ϳ���==
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	char tmp = *str; //�����һ������������滻'\0'
//	int len = my_strlen(str); //���ַ��������ǲ���'\0' ��ֵ��len
//	*str = *(str + len - 1); //��һ�� �滻 ���һ�� 
//	*(str + len - 1) = '\0'; //���һ����Ϊ'\0' ʹ�� �ַ������ȼ���1
//	if (my_strlen(str+1) >= 2) //�����ʱ�����һλ��'\0'���'\0'Ҳ��ǰ��һλ �����ַ�������-2�ˣ�������ֻʣ��0��1�Ͳ���Ҫ������
//	{
//		reverse_string(str + 1);// ��һλ ʹ���ַ������ȼ���1
//	}
//	*(str + len - 1) = tmp;//�����һλ'\0'�滻Ϊ����������ڵĵ�һλ
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr); //����arr��Ԫ�صĵ�ַ
//	printf("%s\n", arr);
//	return 0;
//}


//����һ�����֣���������ÿһ��ĺ�

//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	return n;
//}
//
//
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}


//�ݹ�ʵ��n��k�η�


//double Pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0 / (Pow(n, -k)); //�����η��ø��ž�����k>0 ����if���ĸ
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d %d", &n, &k);
//	Pow(n, k);  //�⺯����Сд�� pow
//	printf("%lf\n", Pow(n, k));
//	return 0;
//}