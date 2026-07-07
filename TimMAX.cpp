#include <stdio.h>
int timMAX(int a,int b){
	if(a>b)return a;
	return b; 
} 
int main(){
	int x,y,Max;
	printf("Moi ban nhap so a: ");
	scanf("%d",&x);
	printf("Moi ban nhap so b: ");
	scanf("%d",&y);
	Max=timMAX(x,y);
		printf("%d la so lon hon",Max);
	return 0; 
		 
} 
