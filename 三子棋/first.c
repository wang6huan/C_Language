#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("*************************************\n");
	printf("*******      1. play          *******\n");
	printf("*******      0. exit          *******\n");
	printf("*************************************\n");
}

void game()
{
	//�洢���� - ��ά����	
	char board[ROW][COL];
	//��ʼ������ - ��ʼ���ո�
	InitBoard(board, ROW, COL); //������������׵�ַ�����Կ���ԭ���������ַ�������

	//��ӡ���� - �����Ǵ�ӡ��������
	DisplayBoard(board, ROW, COL);
	char ret = 0; //������Ϸ״̬
	
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL); //�ı�Ԫ��
		DisplayBoard(board, ROW, COL); //�ٴδ�ӡ����Ԫ�غ�����
		//�ж������Ӯ
		ret = IsWin(board, ROW, COL);

		if (ret != 'C')
		{
			break;
		}

		//������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL); //�ٴδ�ӡ����Ԫ�غ�����
		//�жϵ�����Ӯ
		ret = IsWin(board, ROW, COL);

		if (ret != 'C')
		{
			break;
		}
		//1. ��Ϸ���� - C
		//2. ���ʤ�� - *
		//3. ����ʤ�� - #
		//4. ƽ�� - Q
		//���صĶ���char���� ���Ժ�������ֵ���Ϊchar
	}

	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}

	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}

	else
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}

int main()
{
	int input = 0;

	//���ŵ�ѭ������Ϊ��ϵͳʱ����ͱ仯Ϊ�룬ѭ����ʱ��ܿ�һ����ִ�кܶ�Σ����Ծͻ�һֱ������ͬ��ֵ
	srand((unsigned int)time(NULL)); //��д��ѭ��������Ϊֻ����һ�ξ���
	//����Ϊ�˷�ֹ�����ÿ���ظ�������ʹ��ϵͳʱ������ʼ��
	//��srand()�Ĳ���ֵ�̶���ʱ��rand()��õ���Ҳ�ǹ̶���
	//rand����ÿ�ε���ǰ�����ѯ�Ƿ���ù�srand(seed)���Ƿ��seed�趨��һ��ֵ�����û�У����ӵ�ֵ��Ĭ��Ϊ1��ֱ���� 1 ����ʼ�����ӣ������ɵ������ÿ�ξͻ��ظ���Ϊ�˷�ֹ���ɵ�������ظ���һ��ʹ��ʱ�����Ϊʱ�����ӣ�����ϵͳʱ������ʼ����ʹ��time���������ϵͳʱ�䣬���ķ���ֵΪ�� 00:00 : 00 GMT, January 1, 1970 ��������������������Ȼ��time_t������ת��Ϊ(unsigned)���ٴ���srand������
	
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
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input); //ֻ��ѡ��0�Ż�������0��Ϊ�治������
	return 0;
}