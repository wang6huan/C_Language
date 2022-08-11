#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;  //将棋盘全部初始化为 char set
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("---------------扫雷游戏----------------\n");
	//打印列号
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
			printf("%c ", board[i][j]);//你个************ 把i写成1 打印了九排第一排
		}
		printf("\n");
	}
	printf("---------------扫雷游戏----------------\n");
}


void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)//count为0停止
	{
		//生成随机的下标
		int x = rand() % row + 1; //1 - 9范围 
		int y = rand() % col + 1;  
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}



static int get_mine_count(char mine[ROWS][COLS], int x, int y) //static静态函数 只能用于当前原文件
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
			if (i == x && j == y) //在这个函数其实不要判断mine[x][y],因为mine[x][y]不是雷才会进入这个函数
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
	//1. 输入排查的坐标
	int win = 0;
	while (win < row * col - EASY_COUNT) 
	{
		printf("请输入要排查的坐标:>");
		scanf_s("%d%d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//2. 检查坐标处是不是雷
			if (mine[x][y] == '1')
			{
				//(1) 是雷 - 炸死了
				printf("很遗憾,菜");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//(2) 不是雷 - 统计坐标周围有几个雷 - 存储排查雷的信息去show数组 - 继续游戏
				int count  = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				//显示排查出的信息
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("请重新输入:>");
		}
	}

	if (win == row * col - EASY_COUNT) //要判断,因为被炸死了也会执行这个代码
	{
		printf("恭喜你排雷成功\n");
		DisplayBoard(mine, row, col);
	}

}

