#include <stdio.h>

int sign(int input){
	if(input > 0) //正の整数
	    return 1;
	if(input < 0) //負の整数	
	    return -1;
	if(input == 0) //0
	    return 0;
}
int main(void)
{
	int input, output; //宣言
	while(1){
		printf("整数 > ");
		scanf("%d", &input);	//入力
		output = sign(input);	//関数の呼び出し
		if(output > 0){
			printf("%+d\n", output); //正の整数
		}
		else{
			printf("%d\n", output); //負の整数と0
		}
	}
	return (0);
}

