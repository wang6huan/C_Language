#include <stdio.h>
#include <string.h> //strcpy

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[ ] = "abc";
//	
//	strcpy(arr1, arr2);
//	//����ƶ���strcpy�Ͽ��Կ���������������Ϊ char* �Ͳ���
//
//	return 0;
//}

//�Զ��庯���Ϳ⺯��һ����, ������,����ֵ���ͺͺ��������������Լ�����

//int main()
//{
//	int a = 50;
//	int b = 80;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}
//
//int get_max(int x, int y)
//{
//	return  (x > y) ? (x) : (y);
//}


////�����������͵ĵط�д��: void, ��ʾ��������������κ�ֵ��Ҳ����Ҫ����
////��������,��ֵ��x,y�ı��x, y
//void Swap(int x, int y) //��ʽ���� == �β�
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ: a=%d b=%d\n", a, b);
//	Swap(a, b);  ��ʵ���ݵĲ�������ʵ��
//	printf("������: a=%d b=%d\n", a, b);
//	//дһ�����������������α���ֵ
//	return 0;
//}


//int main()
//{
//	int a = 10;//4���ֽڵĿռ�
//
//	int* pa = &a;//pa����һ��ָ�����
//	*pa = 20;
//
//	printf("%d", a);
//	return 0;
//}


void Swap(int* pa, int* pb)//��ʽ���� == �β�   //��ָ����
{
	int* pc = NULL;
	//"*"������������ָ��ָ��ı���ֵ��������ʵ�������øñ����ĵ�ַ�����⡱���ǰѸõ�ַ��Ӧ�Ķ����⿪��������������һ������һ�����Ǿ��Ǹñ�����ֵ�ˣ����Գ�Ϊ�������á��� Ҳ����˵���������Ƿ����ڴ��ַ�ж�Ӧ�Ķ���
	//int c = 0;
	pc = pa;
	printf("%d\n", *pc);
	pa = pb;
	pb = pc;
	*pa = 10;
	*pb = 20;//Ҫ�ı����ʵ�β����β�
				//������*p ������*pԶ�̿��������ַ��ֵ
	//c = *pa; //������ *pa == a�� ����*pa �����ڿ��� a��ַ�����
	//printf("%d\n", c);
	//*pa = *pb; //pa = pb ���Ա��pa���� int b �˴�ӡ�������� b b  
	//*pb = c;
	
	
	
}

int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰ: a=%d b=%d\n", a, b);
	Swap(&a, &b);//��ʵ���ݵĲ�������ʵ��
	printf("������: a=%d b=%d\n", a, b);
	//дһ�����������������α���ֵ
	return 0; //return ֻ�ܷ���һ��ֵ
}



//int main()
//{
//	int a = 50;
//	int b = 80;
//	int max = get_max(a, b);
//	int max = get_max(2 + 5, 3); //ʵ��Ҫ����ȷ��ֵ���Դ��䳣���ͱ��ʽ������
//	int max = get_max(2 + 5, get_max(4, 7)); //ʵ����ȷ��ֵ�����ú���Ƕ��
//	printf("%d\n", max);
//	return 0;
//}
//
//int get_max(int x, int y) //����ֻ�Ƕ���x,yֻ����ʽû�пռ��,ֻ���ڵ���(ʵ����)��˲�俪�ٿռ�,Ȼ���������������ͷſռ�
//{
//	return  (x > y) ? (x) : (y);
//}


