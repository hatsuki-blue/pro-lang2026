#include <stdio.h>

int div(int dividend, int divisor){ //割り算の計算
    int quotient = 0; //商の初期化
    while(dividend >= divisor){ // 割られる数が割る数以上の間繰り返す
        dividend -= divisor; // 割られる数から割る数を引く
        quotient++;
    }
    return quotient; //商を返す
}

int main(void)
{
    int dividend, divisor, quotient; //宣言
    while(1){
    printf("自然数 x,y >");
    scanf("%d %d", &dividend, &divisor); //入力
    quotient = div(dividend, divisor); //割り算の計算
    printf("%d / %d = %d\n", dividend, divisor, quotient); //結果の出力
    }
    return (0);
}