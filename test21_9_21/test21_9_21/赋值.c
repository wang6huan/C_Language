#include<stdio.h>
int a = 13;
int main()
{
	int a = 10;
	a = 12;
	{
		a = 16;
		int a = 11;
		
		printf("%d\n", a);
		a = 17;
	}
	
	
	
	printf("%d\n", a);
    return 0;
}//�κα����������ض��壬������һ��������ͬ�����ɸ�ֵ