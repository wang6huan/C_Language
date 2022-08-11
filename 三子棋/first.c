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
	//存储数据 - 二维数组	
	char board[ROW][COL];
	//初始化棋盘 - 初始化空格
	InitBoard(board, ROW, COL); //传递了数组的首地址，可以控制原来的数组地址里的内容

	//打印棋盘 - 本质是打印数组内容
	DisplayBoard(board, ROW, COL);
	char ret = 0; //接受游戏状态
	
	while (1)
	{
		//玩家走
		PlayerMove(board, ROW, COL); //改变元素
		DisplayBoard(board, ROW, COL); //再次打印数组元素和棋盘
		//判断玩家输赢
		ret = IsWin(board, ROW, COL);

		if (ret != 'C')
		{
			break;
		}

		//电脑走
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL); //再次打印数组元素和棋盘
		//判断电脑输赢
		ret = IsWin(board, ROW, COL);

		if (ret != 'C')
		{
			break;
		}
		//1. 游戏继续 - C
		//2. 玩家胜利 - *
		//3. 电脑胜利 - #
		//4. 平局 - Q
		//返回的都是char类型 所以函数返回值设计为char
	}

	if (ret == '*')
	{
		printf("玩家赢了\n");
	}

	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}

	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}

int main()
{
	int input = 0;

	//不放到循环是因为按系统时间最低变化为秒，循环的时间很快一秒能执行很多次，所以就会一直重置相同的值
	srand((unsigned int)time(NULL)); //不写到循环里是因为只调用一次就行
	//不过为了防止随机数每次重复，常常使用系统时间来初始化
	//当srand()的参数值固定的时候，rand()获得的数也是固定的
	//rand函数每次调用前都会查询是否调用过srand(seed)，是否给seed设定了一个值，如果没有，种子的值就默认为1，直接用 1 来初始化种子，那生成的随机数每次就会重复，为了防止生成的随机数重复，一般使用时间戳作为时间种子，采用系统时间来初始化，使用time函数来获得系统时间，它的返回值为从 00:00 : 00 GMT, January 1, 1970 到现在所持续的秒数，然后将time_t型数据转化为(unsigned)型再传给srand函数。
	
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
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input); //只有选择0才会跳出非0都为真不会跳出
	return 0;
}