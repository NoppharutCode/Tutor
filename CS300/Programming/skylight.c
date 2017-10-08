#include<stdio.h>
#include <math.h>
int main(){
	int n,m;
	int L,K;
	int c;
	int i,j;
	scanf("%d%d%d%d%d",&n,&m,&L,&K,&c);
	int num[n][m];
	for(i= 0; i<n;i++){
		for(j=0;j< m;j++){
			scanf("%d",&num[i][j]);
		}
	}
	
	int money = 0;
	
	money += c*L*K;
	for(i= 0; i<n;i++){
		for(j=0;j<m;j++){
			money += num[i][j];
		}
	}
	printf("%d", (int)ceil(money/(c*1.0)));
	return 0;
}
