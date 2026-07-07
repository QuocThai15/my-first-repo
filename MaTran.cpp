#include <stdio.h>
#define MaxD 10
#define MinD 2
#define MaxC 10
#define MinC 2
void NhapMaTran(int a[][MaxC],int &m,int &n){
	do{
		printf("Nhap so dong: ");
		scanf("%d",&m); 
	}while(!(m>=MinD &&m<=MaxD));
	do{
		printf("Nhap so cot: ");
		scanf("%d",&n); 
	}while(!(n>=MinC &&n<=MaxC));
	printf("\nNhap cac phan tu cua ma tran: "); 
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]); 
		} 
	} 
}
void XuatMaTran(int a[][MaxC],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%5d",a[i][j]); 
		}
	printf("\n"); 
	}
}
int TimKiem(int a[][MaxC],int m,int n,int x){
	int vt=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==x){
				return 1; 
			} 
		}
		return 0; 
	} 
} 
int KiemTraChan(int a[][MaxC],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]%2==1){
				return 0; 
			} 
		} 
	}
	return 1; 
}
int TimMax(int a[][MaxC],int m,int n){
	int max=a[0][0]; 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>max){
				max=a[i][j]; 
			} 
		} 
	}
	return max; 
}
int TimMin(int a[][MaxC],int m,int n){
	int min=a[0][0];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]<min){
				min=a[i][j]; 
			} 
		} 
	}
	return min; 
} 
int main(){
	int a[MaxD][MaxC],m,n,x;
	NhapMaTran(a,m,n);
	XuatMaTran(a,m,n);
	printf("Nhap vi tri cua x: ");
	scanf("%d",&x); 
	int vt=TimKiem(a,m,n,x);
	if(vt =1)
		printf("\nVi tri cua phan tu la %d",x,vt);
	else
		printf("\nKhong tim thay vi tri cua phan tu",vt);
	int chan=KiemTraChan(a,m,n);
	if(chan==1)
		printf("\nMang Toan so chan",chan);
	else 
		printf("\nMang khong toan so chan",chan);
	int max=TimMax(a,m,n);
	printf("\nphan tu lon nhat la %d",max);
	int min=TimMin(a,m,n);
	printf("\nphan tu nho nhat la %d",min); 
	return 0; 
} 
