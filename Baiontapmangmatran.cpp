#include <stdio.h>
#define MAX_D 100
#define MIN_D 1
#define MAX_C 100
#define MIN_C 1
void NhapMang(int a[][MAX_C],int &m,int &n){
	do{
		printf("Nhap so dong: ");
		scanf("%d",&m); 
	}while (!(m>MIN_D && m<=MAX_D));
	do{
		printf("Nhap so cot: ");
		scanf("%d",&n); 
	}while(!(n>MIN_C && n<=MAX_C));
	printf("\nNhap cac phan tu cua ma tran: "); 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Nhap a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]); 
		} 
	} 
}
void XuatMang(int a[MAX_D][MAX_C],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%5d",a[i][j]); 
		}
		printf("\n"); 
	} 
}
int DemSoLuongChan(int a[][MAX_C],int m,int n){
	int chan =0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]%2==0)
				chan++;  
		} 
	}
	return chan; 
} 
int TongDuongCheoChinh(int a[][MAX_C],int m){
	int tong = 0;
	for(int i=0;i<m;i++){
		tong+=a[i][i]; 
	}
	return tong; 
} 
int main(){
	int a[MAX_D][MAX_C],m,n; 
	NhapMang(a,m,n);
	printf("\nMang 2 chieu la: \n");
	XuatMang(a,m,n);
	int chan = DemSoLuongChan(a,m,n);
	printf("\nSo luong phan tu chan la: %d ",chan);
	int tong=TongDuongCheoChinh(a,m);
	printf("\nTong duong cheo chinh la %d",tong); 
} 
