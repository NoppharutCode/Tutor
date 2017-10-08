#include<stdio.h>

int main(){
	long num1, num2, minNum, divNum;
	long i;
	scanf("%ld%ld", &num1, &num2);
	
	if(num1 < num2){
		minNum = num1;
	}else{
		minNum = num2;
	}
	
	for(i=1;i<=minNum;i++){
		if(num1% i == 0 && num2% i==0 ){
			divNum = i;
		}
	}
	printf("%ld", divNum);
}
