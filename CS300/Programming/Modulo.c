#include<stdio.h>

int main(){
	int nums[10],
		count[10],
		i,
		j,
		check,
		diff = 0;
	for( i = 0 ; i < 10 ;i++){
		count[i] = -1;
	}		
	for( i = 0 ; i < 10 ;i++){
		scanf("%d", &nums[i]);
	}
	
	for(i = 0 ; i < 10 ;i++){
		check = 1;
		for(j = 0 ; j < diff; j++){
			if(count[j] == nums[i]%42){
				check = 0;
				break;
			}
		}
		if(check == 1){
			count[diff] = nums[i]%42; 
			diff +=1;
		}
	}
	
	printf("%d", diff);
	return 0;
}
