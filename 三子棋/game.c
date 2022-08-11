#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"

//��ʼ������ - �����̵�Ԫ�ض���ո� Ҫ��Ȼ�������ֵ
void InitBoard(char board[ROW][COL], int row, int col) //���鴫�����׵�ַ
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}



//DisplayBoard(char board[ROW][COL], int row, int col)  //ֻ������3��3�� ��Ϊֻ��ӡ����3��'%c'�� '|'
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if (i < row-1)
//		{
//			printf("---|---|---\n");
//		}
//		
//	}
//}



void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for ( j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col-1)
			{
				printf("|");
			}
			else if(j = col - 1)
			{
				printf("\n");
			}
		}
		if (i < row-1)
		{
			int j = 0;
			for ( j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
		
	}
}


void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("�����:>\n");
	while (1)
	{
		printf("����������:>");

		scanf_s("%d %d", &x, &y);
		//�ж�����Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//���� - �ж������Ƿ�ռ�� - ����������� 1 1 ʱ������������ 0 0 ����Ҫ -1
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*'; //����Ԫ�ظ�ֵ
				break;
			}
			else
			{
				printf("���걻ռ��,����������\n");
			}
		}
		else
		{
			printf("�Ƿ���������������\n");
		}

	}
}  


void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("������:>\n");

	while (1)
	{
		int x = rand() % row; //�����������У��������ᳬ������666666
		int y = rand() % col;

		//�ж�ռ��
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}


int IsFUll(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0; //����û��
			}
		}
	}

	return 1;//��������
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//�ж�����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0]; //ֱ�ӷ������������ģ����ʤ����Ȼ���ص���*�����Է�֮
		}
	}

	//�ж�����
	for ( i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}

	//�ж϶Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') //����һ��Ԫ�ز��ǿո񣬲����������鰡 SB����������
	{
		return board[1][1];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//�ж�ƽ��
	int ret = IsFUll(board, row, col); //�������˷���1, ��������0
	if (ret == 1)
	{
		return 'Q';
	}

	return 'C';//������Ϸ
}