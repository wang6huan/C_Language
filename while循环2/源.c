#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char password[20] = { 0 };
	printf("����������:");

	//ת���ַ�Ҳ��ASCLL��Ŷ
	scanf_s("%s", password, 20); //�������־���һ����ַ�����Բ���Ҫȡ��ַ&
	printf("��ȷ������(Y/N):");

	//��������
	getchar(); //����\n   ����123456 �ո� 789 ����ʧ�� scanfֻ�õ��ո�ǰ123456 
	//c����scanf���÷���������ַ������ܰ����ո�  ��������gets()ʱ�����ո񲻻��������

	//��Ӧ���Ƕ����ĵ�ǰ8��������ת��ASCLL�ж��Ƿ�

	//��������
	int tmp = 0;
	while ((tmp = getchar()) != '\n')//��()ֻ�Ƿ��㿴
	{
		;
	}


	//getchar�᷵��EOF(-1)����ASCLL����int��
	int ch = getchar();//��ʾ��ʱ����Ϳ��Ծ�������ʾ65��%d�� ������ʾ ��A����%c��
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("ȷ��ʧ��");
	}
	return 0;
}

//getchar scanf
//���������뺯�����Ǵӻ������Ƕ���,��⻺�����ж����͵���
//�س��ᴥ��scanf��ȡ��Ϣ 123456\n��ֻ����123456  \n��������   ֮��getchar���ֻ�������\n(�س�) 


int main() 
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9') //ASCLL�� 0Ϊ48 9Ϊ57
		{
			continue;
		}
		putchar(ch); //����ַ� �ܴ�ӡ�� return�Ƿ��ز��ܴ�ӡ��
	}
}



int main()
{
	int i = 1;//��ʼ��

	while (i <= 10)//�жϲ���
	{
		printf("%d", i);

		i++;//��������
	}
	return 0;
}

//��������п��ܻ���Ϊ��д�Ĵ���Խ��ԽԶ��֮�󲻺��жϣ�����forѭ������