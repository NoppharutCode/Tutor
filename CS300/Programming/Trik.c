#include<stdio.h>
#include<string.h>

int main(){
	char word[51],
		 character;
	int position = 1,
		i;
	scanf("%s", word);
	
	for(i= 0; i < strlen(word); i++){
		character = word[i];
		if(character == 'A'){
			if(position == 1){
				position = 2;
			}else if(position == 2){
				position = 1;
			}
		}else if(character == 'B'){
			if(position == 2){
				position = 3;
			}else if(position == 3){
				position = 2;
			}
		}else if(character == 'C'){
			if(position == 3){
				position = 1;
			}else if(position == 1){
				position = 3;
			}
		}
	}	
	printf("%d", position);
}
