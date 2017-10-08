#include<stdio.h>

int main(){
	int nums[4],
		i,
		j;
	
	for(i=0;i<4;i++){
		scanf("%d", &nums[i]);
	}
	int tempNum;
	int index;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i!=j && nums[i] > nums[j]){
				tempNum = nums[j];
				nums[j] = nums[i];
				nums[i] = tempNum;
			}
		}
	}
	

	printf("%d",nums[1] * nums[3]);

}
