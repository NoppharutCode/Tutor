#include<stdio.h>

int main(){
	int num1,num2;
	scanf("%d%d", &num1, &num2);
	int result = 0;
	if(num2<0){
		num2 *= -1;
	}
	result = num2/num1;
	
	if(num2%num1 != 0){
		result+=1;
	}
	
	printf("%d", result);
}
