#include <stdio.h>
int KiemTraChanLe(int x){
	if(x%2==0)return 1;
	return 0; 
} 
int main(){
	int x;
	printf("Moi nhap so: ");
	scanf("%d",&x);
	KiemTraChanLe(x);
	if(KiemTraChanLe(x)==1)
		printf("Day la so chan "); 
	else 
		printf("Day la so le");
	return 0; 
} 
