#include <stdio.h>

int main(void)
{
	int hexadecimal = 0; //初期化
	while(1){ //繰り返し処理
		printf("16進数 > ");
		scanf("%X", &hexadecimal);
		printf("10進数 > ");
		printf("%d\n\n",hexadecimal);
	}
	return (0); // 返り値
}
