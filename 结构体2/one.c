
#include <stdio.h>

//���飺һ����ͬ���͵�Ԫ�صļ���

//�ṹ�壺Ҳ��һЩֵ�ļ��ϣ�����ֵ�����Ϳ��Բ�ͬ

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	//��Ա����
//	struct B sb;
//	char name[20]; //����
//	int age; //����
//	char id[20];
//} s1, s2; //s1��s2Ҳ�ǽṹ�����
////s1,s2��ȫ�ֱ���
//
//int main()
//{
//	//s�Ǿֲ�����
//	struct Stu s = { {'w', 20, 3.14 }, "����", 30, "20200534"}; //����
//	
//    //�ṹ���Ա��ô������
//	//������ . ->
//
//	printf("%c\n", s.sb.c); //%c�ǵ����ַ����
//	printf("%s\n", s.id);
//
//	// -> ���÷�
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c); //sb����ָ��������.������
//	return 0;
//}



//�ṹ�崫��

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	//��Ա����
//	struct B sb;
//	char name[20]; //����
//	int age; //����
//	char id[20];
//};
//
//void print1(struct Stu t) //�β�t�����s������
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//
//void print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//
//int main()
//{
//	//s�Ǿֲ�����
//	struct Stu s = { {'w', 20, 3.14 }, "����", 30, "20200534" }; //����
//	//дһ��������ӡs������
//	print1(s);// ��ֵ����
//
//	print2(&s);//���ṹ�����s�ĵ�ַ��ȥ
//	//��ַ����
//
//	//print2���ŵ�,(1)��һ��ָ���С�Ĳ�����ȥЧ�ʸ�,(2)����ֱ��ͨ��ָ��ı�s
//	
//	//��������ʱ,��������Ҫѹջ�ģ�����ṹ�����ϵͳ�����ʹ������½�
//	return 0;
//}

//�������õĲ���ѹջ

//ջ����һ�����ݽṹ
//�Ƚ��ĺ��,������ȳ�    ����ѧ��һ��㰡

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

//ÿһ����������
//�������ڴ��ջ���Ͽ���һ��ռ�

int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	c = Add(a, b);

	return 0;
}