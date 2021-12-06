
#include <stdio.h>

int main()
{
	int a[] = { 1, 2, 8, 9, 3 };
	
	for (size_t i = 0; i < sizeof(a)/sizeof(int); i++)
	{
		printf("%d\n", a[i]);
	}
	
	return 0;
}

//复习一下,C语言没有C#的 可以用数组中的所有元素的字节大小除当前类型的字节大小.Length
//还有printf print println ,print + \n == println 但printf是写"%d""%s"这些 print 是直接写一个数就会输出它的含义,需要字符串在加""中间用+连接 而printf是在""里和外用,对应 在""里的东西会直接按字符串输出
//以后可不要偷懒了,每天都要写啊,为了可以幸福生活