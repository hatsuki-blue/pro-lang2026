#include <stdio.h>

int main(void)
{
	int a = 0, k = 1;
    	for(k = 1; k <= 9; k = k + 2){
		printf("%d\n ", a);
		a += k;
	}
}