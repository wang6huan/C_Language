#include <stdio.h>
#include <string.h>

//字符串就是一串字符 - 用双引号括起来的一串字符

int main()
{
	//字符数组 - 数组是一组相同类型的元素
	// \0是字符串的结束标准
	/*char arr[] = "hello";*///存入字符数组
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0'};//内存后面是未知的，没有\0打印的字符串不停止乱码

	//求字符串长度
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));//打印出随机值，内存后面是什么不知道找到\0停止,\0很重要

	int len = strlen("abc");//string length
	// \0不算在字符串长度的！ 但是求字符串数组中元素算
	printf("%d\n", len);
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	return 0;
}