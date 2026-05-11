#include <stdio.h>

int main(void)
{
	int decimal = 0; //初期化
	while(1){ //繰り返し処理
		printf("10進数 > ");
		scanf("%d", &decimal);
		printf("16進数 > ");
		printf("%X\n\n",decimal);
	}
	return (0);
}

