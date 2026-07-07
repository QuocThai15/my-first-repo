#include <stdio.h>
#define MAXD 5 
#define MIND 2 
#define MAXC 10
#define MINC 2 
void NhapMaTran(int a[][MAXC],int &m,int &n){
	do{
		printf("Nhap so dong: ");
		scanf("%d",&m); 
	}while(!(m>=MIND && m<=MAXD));
	do{
		printf("Nhap so cot: ");
		scanf("%d",&n); 
	}while(!(n>=MINC && n<=MAXC));
	printf("\nNhap ma tran: ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]); 
		} 
	} 
} 
void XuatMaTran(int a[][MAXC],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%5d",a[i][j]); 
		}
		printf("\n");
	} 
}
int TinhTongSoDuong(int a[][MAXC],int m,int n){
	int tong=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>0){
				tong+=a[i][j]; 
			} 
		} 
	}
	return tong; 
} 
int TongGiaTriTrenMotDong(int a[][MAXC],int n,int d){
	int tong=0;
	for(int j=0;j<n;j++){
		tong+=a[d][j]; 
	}
	return tong; 
} 
int KiemTraSoDuong(int a[][MAXC],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>0){
				return 1; 
			}
		} 
	}
	return 0; 
}
int KiemTraToanDuong(int a[][MAXC],int m, int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]<=0){
				return 0; 
			} 
		} 
	}
	return 1; 
} 
int main(){
	int a[MAXD][MAXC];
	int m,n;
	printf("\nNhap ma tran: "); 
	NhapMaTran(a,m,n);
	printf("\nMa tran duoc tao la: \n");
	XuatMaTran(a,m,n);
	int tong=TinhTongSoDuong(a,m,n);
	printf("Tong cac so duong la: %d",tong);
	int d;
    printf("\nNhap vao chi so dong can tinh tong (tu 0 den %d): ", m - 1);
    scanf("%d", &d);
    if(d >= 0 && d < m) {
        int gia = TongGiaTriTrenMotDong(a, n, d); 
        printf("\nTong gia tri tren dong %d la: %d", d, gia);
    } else {
        printf("\nChi so dong khong hop le!");
    }
    int kq=KiemTraSoDuong(a,m,n); 
	if(kq==1){ 
	printf("\nCo ton tai so duong."); 
	}else{ 
	printf("\nkhong co so duong.");
	} 
	int kt=KiemTraToanDuong(a,m,n);
	if(kt==1){
		printf("\nMa tran toan so duong."); 
	}else {
		printf("\nMa tran khong toan so duong."); 
	}
	return 0; 
} 
