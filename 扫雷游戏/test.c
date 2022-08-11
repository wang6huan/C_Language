#include "game.h"


void menu() //打印菜单
{
	printf("*************************************\n");
	printf("********       1.play        ********\n");
	printf("********       0.exit        ********\n");
	printf("*************************************\n");
}

void game()
{
	char mine[ROWS][COLS] = {'0'};  //存放布置雷的信息，用于计算  此时棋盘只有第一个元素初始化为字符0 对应ascii 48其他默认数组'\0' 对应ascii 0
	char show[ROWS][COLS] = {'*'};  //存放排查出的信息，方便打印出来
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	

	//排雷
	FinMine(mine, show, ROW, COL);
}


int main()
{
	srand((unsigned int)time(NULL)); //让随机数随时间随机
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");//当她输入其他值时,只要不是0，就会一直循环
			break;
		}
	} while (input); //当input值为1时继续循环游戏

	return 0;
}