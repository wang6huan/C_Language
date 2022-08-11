#include <stdio.h>
#include <string.h> //strcpy



//频繁大量使用的函数被官方写为库函数，调用要引用头文件
//更标准了，要不然写个打印每个人都写的不一样printf函数就官方帮你写了,你直接用这个函数进行了



//C语言常用函数

//IO函数(输入输出函数) printf scanf getchar putchar
//字符串操作函数 strcmp strlen
//字符操作函数(操作字符 大写专小写 判断大小写) toupper
//内存操作函数 memcpy memcmp memset
//时间日期函数 time
//数学函数 sqrt pow
//其他库函数

//int main()
//{
//	//第二个参数：字符串长度，可使用strlen()函数直接求出，切记，在使用strlen()求出字符串长度时，勿忘 + 1 因为\0吧
//	//数组就是地址
//	char arr1[20] = { 0 }; //{} 和[] 的区别后面有
//	char arr2[] = "hello huan";
//	strcpy_s(arr1, 20, arr2); //将arr2地址复制到arr1 有20字节空间放11个字符包含\0
//	printf("%s\n", arr1); //以字符串%s打印arr1
//
//	return 0;
//}

//memory - 记忆 - 内存
//memset - 内存设置

int main()
{
	char arr[] = "hello huan";
	memset(arr, 'x', 5); //直接操着内存空间，仔细看函数介绍int value好像是字符
	printf("%s\n", arr);
	return 0;
}