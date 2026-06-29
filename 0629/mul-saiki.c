#include <stdio.h>

int mul(int x, int y){
    if (y == 0){    // *0のときは0を返す
        return 0;
    }
    if (y > 0){     // yが正の整数のとき、再帰的に計算させる
        return mul(x, y - 1) + x;
    }
}
int main(void)
{
    int x, y;
    printf("x*y : ");
    scanf("%d %d", &x, &y);
    printf("結果 : %d\n", mul(x, y));
    return 0;
}