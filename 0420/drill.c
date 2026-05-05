#include <stdio.h>
#include <stdlib.h>	// rand() を使うために必要

int main(void)
{
	int	x, y, z;	// 問題の数値 z = x/y;
	int	a;		// ユーザが入力する答案の数値
    int i = 0; //初期化
    int s = 0;
    int p; //正答率

	printf("💩計算ドリル\n");	// タイトルを表示

	while (i < 10) {
		x = rand()%100 + 1;	// 1〜100の乱数を設定
		y = rand()%10 + 1;	// 1〜10の乱数を設定
        i = i + 1;     //カウンターを＋1する
        printf("第%d問\n", i);
		printf("♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪♪\n");
		printf("%d 個の💩をもらいました．\n", x);
		printf("%d 人で山分けしましょう．\n", y);
		printf("一人分は何個ですか？ > ");

// ====== 適切なコードを追加し，プログラムを完成しなさい ======
		scanf("%d", &a);
		z = x / y;	
		if (a == z) {
			printf("正解!\n");
            s = s + 1; //正答数カウンターを＋1する
		} else {
			printf("不正解..．正解は%dです．\n", z);
		}
// ====== ここまで ======

	}

    p = s * 100 / i; //正答率計算
	printf("\nおしまい．\n");
    printf("正答数は%d\n" ,s);
    printf("誤答数は%d\n" ,i-s);
    printf("正答率は%d,％\n" ,p);
    if (s == 10) {
        printf("congratulations!\n");
    }
    return (0);
}