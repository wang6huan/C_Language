#include <stdio.h>
#include <math.h>

//int is_prime(int n)
//{
//	int a = 0;
//	for ( a = 2; a <= sqrt(n); a++) //��ƽ����Ҫд��< ����<= 12��12������������
//	{
//		if (n % a == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	//100-200֮�������
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			count++;
//			
//			printf("%d\n", i);
//		}
//		
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


//�ж������귵��1���Ƿ���0
//int is_leap_year(int n)
//{
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)); //��ͷ���1 �پͷ���0
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//		
//	}
//	return 0;
//
//}



//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2; //a[mid] �൱�� *(a + mid)    ����ָ��+1�����Ǽ�һ���ֽڣ����Ǽ�һ����Ԫ��    intָ���ֱַ�ӣ�4ÿ�ĸ��ֽ�������,�����������Ԫ�ص�ַ,�Ϳ��԰���ַ˳�����¶���
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}

//1.ʵ������������һ���̶��ĵ�ַ������˵��ָ���ͳ��������Ҫ�ı���ֵ�ǲ����ܵġ�

//���磺a++; //�﷨����a�ǳ��������ܸı�

//2.�β���������ָ�������������һ���̶��ĵ�ֵַ������ֵ�ǿ��Ըı�ġ�
// Ҫ��������Ϊ��������������ȷ�ģ���ôҪ����ȷ��C++����ϵͳ���β�������һ����Ϊָ�����������

//���磺void select_sort(int array[], int n)

//�ڱ���ʱ������Ϊ��void select_sort(int* array, int n)



//���ʱ��Ӧ�ÿ�����⣺ʵ����������һ����ֵַ�����β�������������������Ϊһ��ָ�������
//int a[]�ڱ���ʱ������Ϊint* a ���Բ���������
int binary_search(int a[], int k) //����error���� //int a[]���������С��������Ҫ
{	
	int sz = sizeof(a) / sizeof(a[0]); //��������ȥ��Ԫ�ص�ַ 
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] > k)
		{
			right = mid - 1;
		}
		else if (a[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	//int sz = sizeof(arr) / sizeof(arr[0]); //��Ԫ�ظ���
	//�ҵ��˾ͷ����ҵ�λ�õ��±�
	//�Ҳ�������-1 //������±��ͻ ���Ҫ�ҵ��Ǹ�����������Ļ�
	int ret = binary_search(arr, key);//�ܴ��ε�ֻ��������,�ܴ��������ֻ��������
	//����arr����,ʵ�ʴ��ݵĲ�������ı���, ��������ȥ��������Ԫ�صĵ�ַ
	if (-1 == ret)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ���,�±���: %d\n", ret);
	}
	return 0;
}