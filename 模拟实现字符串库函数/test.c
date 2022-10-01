#include <stdio.h>
#include <string.h>
#include <assert.h>//assert
                    
//void my_strcpy(char* dest, const char* src)//const防止数据被更改
//{
//	assert(src != NULL);//断言
//	assert(dest != NULL);//断言
//	while (*dest++ = *src++)//用const防止写反出错
//	{
//		;
//	}
//}


//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);//(1)目标空间的起始地址，（2）源空间的起始地址
//	printf("%s\n", arr1);
//	return 0;
//}


int main()
{
    //1
   /* int num = 10;
    int* p = &num;
    *p = 20;

    printf("%d\n", num);
    return 0;*/



    //const修饰指针

    //2
    ////const 修饰变量,这个变量就被称为常变量,不能被修改
    //const int num = 10;
    ////num = 20;//报错
    //
    ////num被改了,寄,怎么解决通过指针被修改了
    //const int* p = &num;//限制*p
    ////const修饰指针变量的时候
    ////const如果放在*的左边,修饰的是*p,表示指针指向的内容,是不能通过目前p指针来改变的
    ////指针p指向的地址可以修改,但是不能修改解引用&num的内容
    //int n = 100;
    //p = &n;

    const int num = 10;
    //可以用指针修改
    int const* const p = &num; //既不能改变*p的值也不能换指向

    //int* const p = &num;
    //const修饰指针变量的时候
    //const 如果放在*的右边，修饰的是指针变量p,表示指针变量不能被改变
    //但是指针的内容,可以被改变
    //*p = 20;
    int n = 100;

    int** p2 = &p;
    *p2 = &n;
    **p2 = 20;
    
    //int const* const p = &num; //既不能改变*p的值也不能换指向
    printf("%d\n", num);
    printf("%d\n", n);
    return 0;
}