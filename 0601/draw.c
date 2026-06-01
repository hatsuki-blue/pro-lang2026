#include <stdio.h>

int main(void)
{
	int	x, y;	// 列番号（右方向の位置），行番号（下方向の位置）
	int	r = 10;		// サイズ
	int	n = 3;		// 間引きの周期

	for (y = 0; y < r; y++) {
		if (y % n == n - 1) continue;		// n行から１行を間引く
		for (x = 0; x < r; x++) { // 列ループ
			if (x > y) break;	// 斜め半分を切り落とす
			printf("#");
		}
		printf("\n");
	}

	return (0);
}
