#define _CRT_SECURE_NO_WARNINGS 1


#include "game.h"

//初始化棋盘 - 把棋盘的元素都变空格 要不然都是随机值
void InitBoard(char board[ROW][COL], int row, int col) //数组传过来首地址
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



//DisplayBoard(char board[ROW][COL], int row, int col)  //只适用于3行3列 因为只打印出了3列'%c'和 '|'
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

	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入坐标:>");

		scanf_s("%d %d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//下棋 - 判断坐标是否占用 - 玩家输入坐标 1 1 时代表数组坐标 0 0 所以要 -1
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*'; //数组元素赋值
				break;
			}
			else
			{
				printf("坐标被占用,请重新输入\n");
			}
		}
		else
		{
			printf("非法坐标请重新输入\n");
		}

	}
}  


void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:>\n");

	while (1)
	{
		int x = rand() % row; //余上它的行列，余数不会超过除数666666
		int y = rand() % col;

		//判断占用
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
				return 0; //棋盘没满
			}
		}
	}

	return 1;//棋盘满了
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0]; //直接返回三个相连的，玩家胜利自然返回的是*，电脑反之
		}
	}

	//判断三列
	for ( i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}

	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') //其中一个元素不是空格，不是整个数组啊 SB！气死我了
	{
		return board[1][1];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//判断平局
	int ret = IsFUll(board, row, col); //棋盘满了返回1, 不满返回0
	if (ret == 1)
	{
		return 'Q';
	}

	return 'C';//继续游戏
}