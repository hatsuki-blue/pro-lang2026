#include <stdio.h>
#include <math.h>

void plot(int input){
        int log_out = log(input);   //logの計算
        while(log_out > 0){     //logの値が0になるまで空白を出力
                printf(" ");
                log_out--;
        }
        printf("*\n");  //* *を出力
}

int main(void){
    int input = 1;  //初期化
    while(input < 300){ //300までの値を出力
        plot(input);
        input = input + 15; //15ずつ増加
    }
    return 0;
}