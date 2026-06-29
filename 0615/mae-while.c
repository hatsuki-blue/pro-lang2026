#include <stdio.h>

int main(void)
{
	int a = 0, k = 1;
	while(k < 12){
		printf("%d\n ", a);
		a += k;
		k = k + 2;
	}
}