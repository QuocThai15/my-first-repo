#include <stdio.h>
void NhapMaTran(int a[][100],int &n,int &m){
	do{
		printf("Nhap so hang: ");
		scanf("%d",&m); 
	}while(!(m>0 && m<=4));
	do{
		printf("nhap so cot: ");
		scanf("%d",&n); 
	}while(!(n>0 && n<=4));
	printf("Nhap vao ma tran: \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Nhap a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);	
		} 
	} 
}
void InMaTran(int a[][100],int n,int m){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]); 
		} 
		printf("\n"); 
	} 
} 
int TinhTong(int a[][100],int n,int m){
	int tong=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]%2==0){
				tong+=a[i][j]; 
			} 
		} 
	}
	return tong; 
} 
int TongCheoChinh(int a[][100],int n,int m){
	int cheo=0;
	for(int i=0;i<n;i++){
		cheo = cheo + a[i][i]; 
	}
	return cheo; 
} 
int main(){
	int a[100][100];
	int m,n;
	printf("Nhap ma tran: \n");
	NhapMaTran(a,n,m);
	printf("\nMa tran duoc tao: \n");
	InMaTran(a,n,m);
	int tong=TinhTong(a,n,m);
	printf("\nTong cac so chan la: %d",tong); 
	int cheo=TongCheoChinh(a,n,m);
	printf("\nTong duong cheo chinh la: %d",cheo); 
	return 0; 
} 
