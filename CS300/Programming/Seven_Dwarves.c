#include<stdio.h>

int main(){
	int nums[9],
		i,
		j,
		sum = 0;
	for(i=0;i<9;i++){
		scanf("%d", &nums[i]);
		sum += nums[i];
	}
	
	for(i=0;i<9;i++){
		for(j= i+1;j<9;j++){
			sum -= nums[i]+ nums[j];
			if(sum == 100){
				break;
			}
			sum += nums[i] + nums[j];
		}
		if(sum == 100){
			break;
		}
	}
	nums[i] = 0;
	nums[j] = 0;
	
	for(i=0;i<9;i++){
		if(nums[i] != 0){
			printf("%d\n",nums[i]);
		}
	}
	return 0;
}
