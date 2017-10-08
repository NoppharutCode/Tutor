#include<stdio.h>

int main(){
	int amount;
	scanf("%d", &amount);
	int i,j;
	int inputs[amount];
	int looblike[amount];
	int counts[amount];
	int count=0;
	for(i=0;i<amount;i++){
		scanf("%d", &inputs[i]);
		counts[i] = 0;
		looblike[i] = 0;
	}

	int check;
	for(i=0;i<amount;i++){
		check=1;
		for(j=0;j<count;j++){
			if(inputs[i] == looblike[j]){
				check=0;
				break;
			}
		}
		looblike[j] = inputs[i];
		counts[j] += 1;
		if(check){
			count++;
		}
	}
	
	int temp;

	int swap;
	for(i=0;i<count-1;i++){
		swap = 0;
		for(j=0;j<count-1-i;j++){
			if(looblike[j] > looblike[j+1]){
				temp = looblike[j];
				looblike[j] = looblike[j+1];
				looblike[j+1] = temp;
				swap = 1;
				temp = counts[j];
				counts[j] = counts[j+1];
				counts[j+1] = temp;
			}
		}
		if(!swap){
			break;
		}
	}
	int maxValue = -1;
	for(i=0;i<count;i++){
		if(counts[i]>maxValue){
			maxValue=counts[i];
		}
	}
	int checkPrint=0;
	for(i=0;i<count;i++){
		if(counts[i] == maxValue){
			if(checkPrint!=0){
				printf(" ");
			}else{
				checkPrint = 1;
			}
			printf("%d",looblike[i]);
		}
	}	
	return 0;
} 
