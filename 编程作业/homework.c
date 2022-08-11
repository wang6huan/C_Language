#include <stdio.h>
#include <string.h>

//编写程序数一下 1到100 的所以整数中出现的数字9
// 个位为9 和 十位为9  99有两个9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5 ...... + 1/99 - 1/100 的值，打印出结果

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	double difference = 0.0;
//	for ( i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			sum += 1.0 / i;
//		}
//		else
//		{
//			sum -= 1.0 / i; //sum又没变 再减回去不就行了
//		}
//	}
//	//sum -= difference;
//	printf("%lf\n", sum);
//	return 0;
//}

//另一种解法
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag; //加减交替了
//	}
//
//	printf("%lf\n", sum);
//	return 0;
//}



//求10个整数最大值
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];  //max最好是arr数组里的第一个值最好，如果数组里都是负数那输出0就错了
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}


//在屏幕上输出9*9乘法口诀表

//int main()
//{
//	int i = 1;
//	n = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-2d ", i, j, i * j); //%2d是打印出两位数字，不够拿空格填充 右对齐   %-2d是左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}


//猜数字和二分查找讲过了

//判断一个数是不是素数讲过了


////输入一个数就是 几乘几的乘法口诀表
//void print_table(int n)
//{
//	int i = 0;
//	for ( i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for ( j = 1; j <= i ; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	
//	print_table(n);
//
//	return 0;
//}


////非递归实现字符串中字符的排序变换，不能用库函数
//
////实现strlen
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')  //*str是解开引用 char类型可以==
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;  //可以用strlen求下标互换
//	
//	while (left <= right)
//	{
//		char tmp = str[left]; //数组本身也是指针 通过指针类型 *(str + left) 下一个指针指向下一个char
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr); //数组arr首元素的地址
//	printf("%s\n", arr);
//	return 0;
//}

//递归实现

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')  //*str是解开引用 char类型可以==
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	char tmp = *str; //存起第一个变量最后再替换'\0'
//	int len = my_strlen(str); //求字符串长度是不算'\0' 赋值给len
//	*str = *(str + len - 1); //第一个 替换 最后一个 
//	*(str + len - 1) = '\0'; //最后一个变为'\0' 使得 字符串长度减少1
//	if (my_strlen(str+1) >= 2) //逆序的时候从下一位到'\0'你的'\0'也提前了一位 总新字符串长度-2了，当长度只剩下0，1就不需要再逆序
//	{
//		reverse_string(str + 1);// 下一位 使得字符串长度减少1
//	}
//	*(str + len - 1) = tmp;//将最后一位'\0'替换为这个生命周期的第一位
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr); //数组arr首元素的地址
//	printf("%s\n", arr);
//	return 0;
//}


//输入一串数字，计算数字每一项的和

//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	return n;
//}
//
//
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}


//递归实现n的k次方


//double Pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0 / (Pow(n, -k)); //负数次方用负号纠正当k>0 调用if算分母
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf_s("%d %d", &n, &k);
//	Pow(n, k);  //库函数是小写的 pow
//	printf("%lf\n", Pow(n, k));
//	return 0;
//}