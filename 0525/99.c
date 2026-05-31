#include <stdio.h>

int main(void) {
    int i = 0;
    int j = 0;
    int result;

    for (i = 1; i <= 9; i++) {
        printf("%dの段：", i);
        for (j = 1; j <= 9; j++) {
            result = i * j;
            if (result < 10){
                printf("  %d", result);
            }else{
                printf(" %d", result);
            }
        }
        printf("\n");
    }
    
    return 0;
}
