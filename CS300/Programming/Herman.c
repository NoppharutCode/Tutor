#include<stdio.h>
#include<math.h>

int main(){
	int num;
	scanf("%d", &num);
	printf("%lf",pow(num,2));
	printf("%lf\n",sqrt(pow(num,2) + pow(num,2)));
	return 0;
}
