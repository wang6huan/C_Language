#include "game.h"


void menu() //��ӡ�˵�
{
	printf("*************************************\n");
	printf("********       1.play        ********\n");
	printf("********       0.exit        ********\n");
	printf("*************************************\n");
}

void game()
{
	char mine[ROWS][COLS] = {'0'};  //��Ų����׵���Ϣ�����ڼ���  ��ʱ����ֻ�е�һ��Ԫ�س�ʼ��Ϊ�ַ�0 ��Ӧascii 48����Ĭ������'\0' ��Ӧascii 0
	char show[ROWS][COLS] = {'*'};  //����Ų������Ϣ�������ӡ����
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	

	//����
	FinMine(mine, show, ROW, COL);
}


int main()
{
	srand((unsigned int)time(NULL)); //���������ʱ�����
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");//������������ֵʱ,ֻҪ����0���ͻ�һֱѭ��
			break;
		}
	} while (input); //��inputֵΪ1ʱ����ѭ����Ϸ

	return 0;
}