#include <stdio.h>
void NhapSo(int &n){
	do{
		printf("Nhap so nguyen duong: ");
		scanf("%d",&n);
	}while(!(n>0));
}
int KiemTraSoNguyenTo(int n){
	int demuocso = 0;
	for(int i=1;i<=n;i++){
		if(n%i==0)
			demuocso++; 
	}
	if(demuocso==2)
		return 1;
	else 
		return 0;
}
void InSoNguyenTo(int n){
	printf("\nCac so nguyen to <= %d la: ",n);
	for(int i=1;i<=n;i++){
		if(KiemTraSoNguyenTo(i)==1)
			printf("%5d",i);
	}
}
int main(){
	int n;
	NhapSo(n);
	printf("n = %d",n);
	InSoNguyenTo(n);
	if(KiemTraSoNguyenTo(n)==1)
		printf("\n%d la so nguyen to",n);
	else
		printf("\n%d khong phai la so nguyen to",n);
}
