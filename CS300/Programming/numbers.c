#include<stdio.h>

int main(){
	int num;
	scanf("%d", &num);
	int nums[num];
	int i,j;
	for(i=0;i<num;i++){
		scanf("%d", &nums[i]);
	}
	int temp;
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			if(i!=j&& nums[i] < nums[j]){
				temp = nums[j];
				nums[j] = nums[i];
				nums[i] = temp;
			}
		}
	}
	
	j=0;
	for(i=0;i<num;i++){
		if(nums[i]!=0){
			printf("%d",nums[i]);
			break;
		}else{
			j+=1;
		}
	}
	for(i=0;i<j;i++){
		printf("%d",nums[i]);
	}
	for(i=j+1;i<num;i++){
		printf("%d", nums[i]);
	}
	
	return 0;
}
