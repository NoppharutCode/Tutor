#include<stdio.h>

int main(){
	int count = 0,
		num1,
		num2,
		num3;
		
	scanf("%d%d%d", &num1, &num2, &num3);
	
	while(num1 != 1){

		num1 /= 2;
		count++;
	}
	
	while(num2 != 1){

		num2 /= 2;
		count++;
	}
	
	while(num3 != 1){

		num3 /= 2;
		count++;
	}
	
	printf("%d", count);
	return 0;

}
