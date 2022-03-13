

#include <stdio.h>


//#define 定义常量和宏


//define 是预处理指令
// 1 define 定义常量

//#define min 1000
//
//
//int main()
//{
//	printf("%d", min);
//	return 0;
//}


//define 定义宏
#define ADD(X,Y) X+Y
int main()
{
	printf("%d", 4 * ADD(2, 3)); //答案是11  ADD是替换2+3 所以是4*2+3
	return 0;
}

//如果想4 * (2+3) 
#define ADD(X,Y) (X+Y) //就行了

//但假如 X Y 是一个表达式    用((X)+(Y))先让两方各自算完再加法
