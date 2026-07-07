#include <stdio.h>
int Kiemtraso(int n){
	if(n>0){
		return 1; 
	}else if (n<0){
		return -1; 
	} else {
		return 0; 
	} 
}
int main(){
	int n,so;
	printf("Moi ban nhap so: ");
	scanf("%d",&n);
	so=Kiemtraso(n);
	if(Kiemtraso(n)==1)
		printf("Day la so duong",so);
	else if(Kiemtraso(n)==-1)
		printf("Day la so am",so);
	else
		printf("Day la so 0",so);
	return 0; 
} 
 
