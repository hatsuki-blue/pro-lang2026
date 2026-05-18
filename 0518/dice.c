#include <stdio.h>		// printf(), getchar() に必要
#include <stdlib.h>		// rand() に必要
#include <time.h>		// time() に必要

int main(void)
{
	srand(time(NULL));  // 乱数の初期化
	int	x, y;	// サイコロの出目（1〜6）が入るよ
	int	z;	// 出目の合計が入るよ
	int yosou;	// 予想

	while (1) {
		x = rand()%6 + 1;	// 1〜6 の乱数
		y = rand()%6 + 1;	// 同上
		printf("予想を入力してください（丁なら0,半なら１,-1で終了）> ");
		scanf("%d", &yosou);
				if (yosou == -1) {
			printf("終了します\n");
			break;
		}

		printf("%d, %d の ", x, y);

		z = x + y;
		if (z % 2 == 0) {
			printf("合計は %d で丁です。\n", z);
			if (yosou == 0) {
				printf("当たり!!!!!\n");
			} else {
				printf("外れ.....\n");
			}
		} else {
			printf("合計は %d で半です。\n", z);
			if (yosou == 1) {
				printf("当たり!!!!!\n");
			} else {
				printf("外れ.....\n");
			}
		}

		getchar();	// [Enter]キーの入力を待つ
	}
	return (0);
}