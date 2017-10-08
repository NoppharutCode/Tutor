#include<stdio.h>

int main(){
	char p1[4] = "ABC";
	char p2[5] = "BABC";
	char p3[7] = "CCAABB";
	int ansNum;
	int ans1=0,
		ans2=0,
		ans3=0,
		maxAns;
		
	scanf("%d", &ansNum);
	char ans[ansNum+1];
	scanf("%s", ans);
	int i;
	for(i=0;i<ansNum;i++){
		if(p1[i%3] == ans[i]){
			ans1 += 1;
		}
		if(p2[i%4] == ans[i]){
			ans2 += 1;
		}
		if(p3[i%6] == ans[i]){
			ans3 += 1;	
		}
	}
	
	maxAns=ans1;
	if(ans2 > maxAns){
		maxAns = ans2;
	}
	if(ans3 > maxAns){
		maxAns = ans3;
	}
	printf("%d\n", maxAns);
	if(ans1 == maxAns){
		printf("Adrian\n");
	}
	if(ans2 == maxAns){
		printf("Bruno\n");
	}
	if(ans3 == maxAns){
		printf("Goran\n");
	}
	
	return 0;
}

