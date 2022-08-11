#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;  //������ȫ����ʼ��Ϊ char set
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("---------------ɨ����Ϸ----------------\n");
	//��ӡ�к�
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);//���************ ��iд��1 ��ӡ�˾��ŵ�һ��
		}
		printf("\n");
	}
	printf("---------------ɨ����Ϸ----------------\n");
}


void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)//countΪ0ֹͣ
	{
		//����������±�
		int x = rand() % row + 1; //1 - 9��Χ 
		int y = rand() % col + 1;  
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}



static int get_mine_count(char mine[ROWS][COLS], int x, int y) //static��̬���� ֻ�����ڵ�ǰԭ�ļ�
{
	/*return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';*/
		
	int count = 0;

	for (int i = x - 1; i <= x + 1 ; i++)
	{
		for (int j = y - 1; j <= y + 1; j++)
		{
			if (i == x && j == y) //�����������ʵ��Ҫ�ж�mine[x][y],��Ϊmine[x][y]�����ײŻ�����������
			{ 
				continue;
			}
			else if (mine[i][j] == '1')
			{
				count++;
			}
		}
	}

	return count;
}



void FinMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	//1. �����Ų������
	int win = 0;
	while (win < row * col - EASY_COUNT) 
	{
		printf("������Ҫ�Ų������:>");
		scanf_s("%d%d", &x, &y);
		//�ж�����Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//2. ������괦�ǲ�����
			if (mine[x][y] == '1')
			{
				//(1) ���� - ը����
				printf("���ź�,��");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//(2) ������ - ͳ��������Χ�м����� - �洢�Ų��׵���Ϣȥshow���� - ������Ϸ
				int count  = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				//��ʾ�Ų������Ϣ
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("����������:>");
		}
	}

	if (win == row * col - EASY_COUNT) //Ҫ�ж�,��Ϊ��ը����Ҳ��ִ���������
	{
		printf("��ϲ�����׳ɹ�\n");
		DisplayBoard(mine, row, col);
	}

}

