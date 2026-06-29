#include <stdio.h>

int fib(int n){
    if (n == 0){    // 0番目は0
        return 0;
    }
    if (n == 1){    // 1番目は1
        return 1;
    }
    if (n > 1){     // nが1より大きいとき、再帰的に計算させる
        return fib(n - 1) + fib(n - 2);
    }
}

int main(void)
{
    int n;
    printf("n番目のフィボナッチ数を求めるよ\n");
    printf("n : ");
    scanf("%d", &n);
    printf("結果 : %d\n", fib(n));
    return 0;
}