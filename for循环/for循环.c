#include <stdio.h>

int main()
{
	
	for (int i = 1; i <=10; i+=2)
	{
		//if (i == 5)
		//{
		//	break;
		//}
		if (i == 5)
		{
			continue; // 不会像while死循环
		}
		i = 5;  //不要在for循环体内修改循环变量，这个会死循环
		i++;
		printf("%d     ", i);
		for (int j = 0; j < 10; i++)//循环体内改变循环变量这些都不可取
		{
			printf("hehe\n");
		}
	}
	return 0;
}


//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++) //建议写出开区间 i < 10 而不是 i <= 9 ,因为这样更容易读正好循环10次
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//int main()
//{
//	for ( ; ; )// 可以省略，判断部分省略就恒为真，慎重省略
//	{
//		printf("hehe\n");//此时死循环
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++) //省略有问题, 第二次执行的时候j已经是3了，没有重新赋值0
//		{
//			printf("hehe\n");//共打印3次
//		}
//	}
//	return 0;
//}
//
//
//int main()
//{
//	for (int x = 0, int y = 0; ; )//int x = 0; 好像要写循环外面，之前都写错了坏习惯
//	{
//
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)  //这个判断句中 k = 0是赋值，表达式结果为0假
//	{
//		k++; //循环0次 判断句为表达式赋值0假
//	}
//	return 0;
//}
