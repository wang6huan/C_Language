#include <stdio.h>

int main()
{
	char arr[1] = { 1 };

	int count = 2;
	
	arr[0] =  count + '1';
	printf("%c\n", arr[0]);
	printf("asciiÂë %d\n", arr[0]);
}