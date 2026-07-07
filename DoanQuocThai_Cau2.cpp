#include <stdio.h>
#include <math.h>
int main(){
	int n;
	do{
		printf("nhap so nguyen duong le: ");
		scanf("%d",&n); 
	}while(!(n>=3 &&n<=30 &&n%2!=0));
	double s=0;
	for(int i=0;i<=n;i++){
		s+=pow(i,i+1); 
	}
	double S=sqrt(s);
	printf("S=%.2f",S);
	return 0; 
} 
