#include<stdio.h>

int main(){
	int nums[5][4];
	int maxScore = -1,
		indexMaxScore,
		i;
	
	int tempNum;
	for(i=0;i<5;i++){
		scanf(
			"%d%d%d%d",
			&nums[i][0],
			&nums[i][1],
			&nums[i][2],
			&nums[i][3]
		);
	}

	for(i=0;i<5;i++){
		tempNum = nums[i][0] +  nums[i][1] +  nums[i][2] +  nums[i][3];
		if(maxScore < tempNum){
			maxScore = tempNum;
			indexMaxScore =i;
		}
	}	
	
	printf("%d %d",indexMaxScore+1, maxScore);
	return 0;
}
