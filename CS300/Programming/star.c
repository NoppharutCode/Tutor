#include<stdio.h>

int main(){
	int num;
	scanf("%d", &num);
	int i,
		j;
	int average = num/2;
	int count=0;
	int round;
	if(num%2==0){
		round = num-1;
		average-=1;
	}else{
		round = num;
	}
	
	for(i=0;i<num;i++){

		for(j=0;j<round;j++){
			if(
				j == average + (count) ||
				j ==average - (count)
			){
				printf("*");
			}else{
				printf("-");
			}
			
		}

		if(num/2 <= i){
			count--;
		}else{
			count++;
		}
			if(num%2==0&& i== num/2 -1){
				count-=1;
		}
		printf("\n");
	}
}
