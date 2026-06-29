#include <stdio.h>

int main(void)
{
	int a = 0, k = 1;
	do{
		printf("%d\n ", a);
		a += k;
		k = k + 2;
	} while(k < 12);
}