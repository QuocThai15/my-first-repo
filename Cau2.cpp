#include <stdio.h>
#include <math.h> 
int main(){
	int n; 
	double gt=1; 
	do{
		printf("Nhap 1 so nguyen: ");
		scanf("%d",&n); 
	}while(!(n>=3 &&n<=50));
	double s=0;
	for(int i=1;i<=n;i++){
		s+=pow(-1,i-1)*i;
		gt*=i; 
	}
	double S=s/sqrt(gt);
	printf("S=%.2f",S); 
	return 0; 
} 
