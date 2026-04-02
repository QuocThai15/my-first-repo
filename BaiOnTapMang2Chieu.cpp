#include <stdio.h>
#define MIND 1
#define MAXD 100 
void NhapMaTran(int a[][MAXD],int &m,int &n){
	do{
		printf("Nhap so dong: ");
		scanf("%d",&m); 
	}while(!(m>=MIND && m<=MAXD));
	do{
		printf("Nhap so cot: ");
		scanf("%d",&n); 
	}while(!(n>=MIND && n<=MAXD));
	printf("\nNhap vao ma tran: "); 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]); 
		} 
	} 
}
void  XuatMaTran(int a[][MAXD],int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%5d",a[i][j]); 
		}
		printf("\n"); 
	}
} 
int TongCacPhanTu(int a[][MAXD],int m,int n){
	int tong=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			tong+=a[i][j]; 
		} 
	}
	return tong; 
}
int TimMax(int a[][MAXD],int m,int n){
	int max=a[0][0];
	int dong_max=0;
	int cot_max=0; 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]>max){
				max=a[i][j];
				dong_max=i;
				cot_max=j; 
			} 
		} 
	}
	printf("\ndong_max:%d ",dong_max);
	printf("\ncot_max:%d ",cot_max); 
	return max; 
}
int TongCheoChinh(int a[][MAXD],int m,int n){
	int cheo=0;
	for(int i=0;i<n;i++){
		cheo+=a[i][i]; 
	}
	return cheo; 
} 
int DemChanCheoPhu(int a[][MAXD],int m,int n){
	int phu=0;
	for(int i=0;i<n;i++){
		if(a[i][n-1-i]%2==0){
				phu++; 
		}  
	}
	return phu; 
} 
int main(){
	int a[MAXD][MAXD];
	int m,n;
	printf("\nNhap ma tran: ");
	NhapMaTran(a,m,n);
	printf("\nMa tran da nhap la: \n");
	XuatMaTran(a,m,n);
	int tong=TongCacPhanTu(a,m,n);
	printf("\nTong cac phan tu la: %d",tong);
	printf("\nPhan tu lon nhat la: %d",TimMax(a,m,n)); 
	int cheo=TongCheoChinh(a,m,n);
	printf("\nTong duong cheo chinh la: %d",cheo);
	int phu=DemChanCheoPhu(a,m,n);
	printf("\nTong chan cheo phu la: %d\n",phu); 
	return 0; 
} 
