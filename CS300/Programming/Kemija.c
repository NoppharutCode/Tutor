#include<stdio.h>
#include<string.h>

int main(){
	char word[101];
	scanf("%[^\n]%*c", word);
	int i;
	for(i=0;i<strlen(word);i++){
		if(
			word[i] == 'a' ||
			word[i] == 'e' ||
			word[i] == 'i' ||
			word[i] == 'o' ||
			word[i] == 'u'
		){
			printf("%c", word[i]);
			i+=2;
		}else{
			printf("%c", word[i]);
		}
	}
}
