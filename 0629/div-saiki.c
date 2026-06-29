#include <stdio.h>

int div(int x, int y){
    if (y == 0){ // 0で割るときは-1を返す
        return -1;
    }
    if (x < y){ // xがyより小さいときは0を返す
        return 0;
    }
    if (x >= y){ // xがy以上のとき、再帰的に計算させる
        return div(x - y, y) + 1;
    }
}
int main(void)
{
    int x, y;
    printf("x/y : ");
    scanf("%d %d", &x, &y);
    printf("結果 : %d\n", div(x, y));
    return 0;
}