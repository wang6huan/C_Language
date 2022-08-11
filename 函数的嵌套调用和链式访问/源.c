#include <stdio.h>
#include <string.h>

//void Add(int* p)
//{
//	(*p)++;
//}


//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//
//	Add(&num);
//	printf("%d\n", num);//1
//
//	Add(&num);
//	printf("%d\n", num);//1
//
//	return 0;
//}





//函数的嵌套调用和链式访问 函数不能在函数里面定义(不能嵌套定义)

//void test3()
//{
//	printf("huan\n");
//}
//
//void test2()
//{
//	test3();
//}
//
//
//int main()
//{
//	test2();
//	return 0;
//}



//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	//链式访问
//	printf("%d\n", strlen("abc"));
//
//
//	char arr1[20] = { 0 };
//	char arr2[] = "huan";
//	//strcpy(arr1, arr2); //copy并返回arr1
//	//printf("%s\n", arr1);
//
//	printf("%s\n", strcpy(arr1, arr2)); //strcpy将arr2复制到arr1并返回
//
//	printf("%d", printf("%d", printf("%d", 43))); //printf打印并返回打印在屏幕上的字符个数
//
//	return 0;
//}


//函数的声明和定义
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//代码从前往后执行,在这里要声明一下 - 告知
//	int Add(int, int);
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//	return;
//}
//
////函数定义在后面就要声明， 定义是更有力的声明，一般声明在头文件，现在是在源文件
//int Add(int x, int y)
//{
//	return x + y;
//}


#include "add.h"
#include "sub.h"

int main()
{
	int a = 10;
	int b = 20;

	int c = Add(a, b);
	int c = Sub(a, b);

	printf("%d", c);
	return 0;
}
//1因为会产生重复定义的问题！
//2从软件工程的角度，代码的实现不会写在头文件里面。
//因为它违背了隐蔽细节的原则，也就是我们需要暴露的是接口而不是细节。
//你不需要告述别人的代码是如何实现的，你只要提供接口就行啦。
//头文件就是c语言的接口。
//因为你想调用别人的接口只需要include别人的头文件，再连接或动态的调用别人的库就行啦。
//3从编译的角度，你如果写在头文件里面，改一次代码，和这个头文件有关嗯文件都要重新编译，这对大型项目来说非常耗时的。
//4亲测对于小型工程这样是可行，但是还是要养成主体函数写在.c 里，然后在.h 里面声明，接着在再include.h

//总结一下，ifndef可以解决编译阶段发生的重复定义问题，但不能解决链接阶段发生的重复定义问题，所以不要在头文件中作具体定义！
//
//当然以上所说都是在头文件中进行了定义的情况，如果没有在头文件中作定义，而只是声明的话，
//那么，要是不讲就的话，哪怕不写ifndef都是可以的，因为只有重复定义会报错，重复声明是不会报错的。

//1、头文件：头文件的作用在于编译时，会在#include<*.h>位置处展开，
//所以如果有多个.c文件include同一个头文件（很常见），如果头文件编写时不进行处理，出现重复定义是不可避免的。
//尤其是当一个项目分成多个模块的时候。

//2、一般，把函数、变量、结构体、类等放在.c或者.cpp文件中，编译生成.o、.dll等给其他文件使用。
//
//3、头文件一般放函数、变量、类的声明。
//
//4、不允许被其他文件使用的函数用static定义，否则默认为extern
//
//5、一般不要在头文件中定义变量、函数、类，否则容易产生重复定义。
//
//6、要使用其他模块（文件）定义的函数、变量等，直接包含其头文件。

//全局变量extern可以在其他源程序中使用; 全局变量static只能在本程序中使用。
//全局变量是使用相同的内存块在整个类中存储一个值。
//全局变量既可以是某对象函数创建, 也可以是在本程序任何地方创建。
//全局变量是可以被本程序所有对象或函数引用。