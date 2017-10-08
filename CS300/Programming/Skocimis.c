#include<stdio.h>

int main(){
	int num1, num2, num3;
	scanf("%d%d%d", &num1, &num2, &num3);
	if(num2 - num1 > num3 - num2){
		printf("%d", num2 - num1 -1);
	}else{
		printf("%d", num3 - num2-1);
	}
}
