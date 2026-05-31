#include <stdio.h>

int main(void) {
    int n;
    int sum = 0;

    printf("非負整数 n > ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("総和 Sn = %d\n", sum);

    return 0;
}
