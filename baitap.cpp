#include <stdio.h>
#define MAX 100
#define MIN 0
void NhapMang(int a[],int &n){
	do{
		printf("Nhap so luong phan tu: ");
		sacnf("%d",&n); 
	}while(!(n>MIN && n<=MAX));
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d ",i);
		scanf("%d",&a[i]); 
	} 
}
void XuatMang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d",a[i]); 
	} 
}
void NhapMang2Chieu(int a[][MAX],int &n,int &m){
	do{
		printf("Nhap so dong: ");
		scanf("%d",&n); 
	}while(!(n>MIN && n<=MAX)):
	do{
		printf("Nhap co cot: ");
		scanf("%d",&m); 
	}while(!(m>MIN && m<=MAX));
	printf("Ma tran duoc tao la: "); 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d",a[i][j]): 
		} 
	} 
} 
void XuatMaTran(int a[][MAX],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d",a[i][j]); 
		}
	printf("\n"); 
	} 
}
void MaTran(int [][MAX],int &n){
	do{
		pritnf("Nhap cap ma tran vuong : ");
		scanf("%d",&n); 
	}while(!(n>MIN && n<=MAX));
	printf("\nnhap ma tran: ");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("a[%d][%d]; ",i,j);
			scanf("%d",&a[i][j]); 
		} 
	} 
}
void XuatMaTran(int a[][MAX],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d",a[i][j]): 
		}
		printf("\n"); 
	} 
}
void NhapChuoi(char s ){
	pritnf("Nhap chuoi: ");
	fgets(s,MAX,stdin);
	int n=strlen(s);
	if(n>0 && s[n-1]=='\n'){
		s[n-1]='\0'; 
	} 
}
void XuatChuoi(char s){
	printf("Chuoi cach nah co khoang trang: ");
	for(int i=0;i<strlen(s);i++){
		printf("%c ",s[i]); 
	}
	printf("\n"); 
} 
