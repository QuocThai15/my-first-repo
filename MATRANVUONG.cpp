#include <stdio.h>
#define Max 10
#define Min 1
void NhapMaTran(int a[][Max],int &n){
	do{
		printf("Nhap cap ma tran: ");
		scanf("%d",&n); 
	}while(!(n>=Min &&n<=Max));
	printf("\nNhap vao ma tran: ");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]); 
		} 
	} 
} 
void XuatMaTran(int a[][Max],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%5d",a[i][j]); 
		}
		printf("\n"); 
	} 
}
int TongPhanTuDuong(int a[][Max],int n){
	int tong=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){ 
			if(a[i][j]>0){
				tong+=a[i][j]; 
			}
		}
	}
	return tong; 
} 
int main(){
	int a[Max][Max],n;
	NhapMaTran(a,n);
	XuatMaTran(a,n);
	int tong=TongPhanTuDuong(a,n);
	printf("\nTong phan tu duong la %d",tong); 
} 
 
