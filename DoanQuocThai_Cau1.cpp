#include <stdio.h>
int main() {
	char kitu; 
	printf("Moi nhap ki tu chu cai: ");
	scanf("%c",&kitu);
	if(kitu=='A' || kitu=='a'){
		printf("Good Morning"); 
	}
	else if(kitu=='N' || kitu=='n'){
		printf("Ohayogozaimasu"); 
	}
	else{
		printf("Chao buoi sang"); 
	}
	return 0; 
}
