#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//printf��ʹ����Ҫ����ͷ�ļ�<stdio.h>

int main()//����+������
{
	printf("hello world\n");//printfΪ�⺯��-�ڼ�����ϴ�ӡ����
	
	printf("%d\n", sizeof(char));//sizeof-�ؼ���-������-�������ͻ��߱�����ռ�ռ�Ĵ�С
	//sizeof�ĵ�λ���ֽ� byte���ֽڣ�=8bit
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));//C���Ա�׼��sizeof(long)>=sizeof(int)
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));//Ϊʲô����ô�����ΰ�����Ϊ�洢�ٵ������ô�Ŀռ���˷ѣ�����ô����Ϊ�˸���������ÿռ�

	return 0;//���������򷵻�һ������ֵ-��β��Ӧ �ڴ�֮��Ĵ��벻���� ����0������������˳���0�쳣return 1��������������ֹ
}

/*�����е�һЩ���ݣ�
  ��Щ���ݲ��ܱ�:Ѫ�ͣ��Ա�Բ����
  ��Щ����һ���ɱ�:���ʣ����䣬����*/
//C�����������:�����ͱ���

int main()
{
	int age = 19;
	double weight = 50.12;
	age = age + 1;//age�����¶�����������ʾage�ɱ�ģ������Ǳ���    // =�������¶������˼,==���ǵ��ڣ�����һ������һ��ʼ����ʲô���涼�����¶��壬�仯
 //������int age =20��
	printf("%d\n",age);//%d���������ʮ�����������ݵ�ʵ�ʳ������
	printf("%lf\n", weight);
	
	return 0;

	//�����ķ���
}
int a = 100;//�������ⲿ����Ϊȫ�ֱ���
int main()
{
	int a = 10;//�ֲ�����
	printf("%d\n", a);//���ֳ�ͻ������¾ֲ����ȣ����Ƽ�ȫ�ֺ;ֲ�����һ��
	
	return 0;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	scanf("%d %d", &a, &b);//scanf�����뺯��-��һ��%d������������a�У�&Ϊ�����ַ���ڶ�������b��
	c = a + b;
	printf("c=%d", c);  //�������������˼�����c=���ͣ�����Ϊc���Σ�������������
	return 0;
  }