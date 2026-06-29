#include <stdio.h>

int power(int x, int y){
    if (y == 0){ // 0乗のときは1を返す
        return 1;
    }
    if (y > 0){ // 正の整数乗のとき、再帰的に計算させる
        return x * power(x, y - 1);
    }
}

int main(void)
{
    int x, y;
    printf("x^y : ");
    scanf("%d %d", &x, &y);
    printf("結果 : %d\n", power(x, y));
    return 0;
}