#include<stdio.h>
#include<string.h>

int main(){
	
	char word[16];
	int i;
	scanf("%s", word);
	
	printf("..");
	for(i = 0 ; i < strlen(word); i++){
		if(i == 0){
			printf("#");
		}else{
			if(i%3 == 2){
				printf("...*");
			}else{
				printf("...#");
			}
		}
	}
	printf("..\n");
	
	printf(".");
	for(i = 0 ; i < strlen(word); i++){
		if(i%3 == 2){
			printf("*.*");
		}else{
			printf("#.#");
		}
		if(i != strlen(word)-1){
			printf(".");
		}
	}
	printf(".\n");
	
	for(i = 0 ; i < strlen(word); i++){
		if(i%3 == 2){
			printf("*.%c.",word[i]);
		}else if(i > 0 && i%3 ==0){
			printf("*.%c.", word[i]);
		}else{
			printf("#.%c.", word[i]);
		}

	}
	if(i%3==0){
		printf("*");
	}else{
		printf("#");
	}
	printf("\n");
	
	printf(".");
	for(i = 0 ; i < strlen(word); i++){
		if(i%3 == 2){
			printf("*.*");
		}else{
			printf("#.#");
		}
		if(i != strlen(word)-1){
			printf(".");
		}
	}
	printf(".\n");
	
	printf("..");
	for(i = 0 ; i < strlen(word); i++){
		if(i == 0){
			printf("#");
		}else{
			if(i%3 == 2){
				printf("...*");
			}else{
				printf("...#");
			}
		}
	}
	printf("..\n");
	return 0;
}


