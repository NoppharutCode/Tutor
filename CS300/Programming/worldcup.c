#include<stdio.h>

int main(){
	char teamName[4][21];
	int scoreTeam[4][4];
	int resultScore[4];
	int i,
		j;
	for(i=0;i<4;i++){
		resultScore[i] = 0;
		scanf("%s", teamName[i]);
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d", &scoreTeam[i][j]);
		}
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(i!=j){
				if(scoreTeam[i][j] > scoreTeam[j][i]){
					resultScore[i] += 3;
				}else if(scoreTeam[i][j] == scoreTeam[j][i]){
					resultScore[i] += 1;
				}
			}
		}
	}
	
	for(i=0;i<4;i++){
		printf("%d\n", resultScore[i]);
	}
	
	return 0;
}
