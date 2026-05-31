#include <stdio.h>

int main(void) {
    int score;
    int max;
    int min;
    int count = 0;

    printf("終了するには数字以外の文字を入力してください。\n");

    while (1) {
        printf("数値 > ");
        if (scanf("%d", &score) != 1) { // scanfの戻り値が1でない場合にbreak
            break;
        }

        if (count == 0) { // 最初のデータで最大値、最小値を初期化
            max = score;
            min = score;
        } else { // 2個目以降のデータで最大値、最小値を更新
            if (score > max) {
                max = score;
            }
            if (score < min) {
                min = score;
            }
        }
        count = count + 1;
    }

    if (count > 0) {
        printf("\n最大値 = %d\n", max);
        printf("最小値 = %d\n", min);
    } else {
        printf("\nデータが入力されませんでした。\n");
    }

    return 0;
}
