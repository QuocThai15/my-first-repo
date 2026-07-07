#include <stdio.h>
#define MAX 100
#define MIN 0 
void NhapMang(int a[],int &n){
	do{
		printf("Nhap so luong phan tu: ");
		scanf("%d",&n); 
	}while(!(n>MIN &&n<=MAX));
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d:",i);
		scanf("%d",&a[i]); 
	} 
} 
void XuatMang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]); 
	} 
} 
int TimMAX(int a[],int n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i]; 
		} 
	}
	return max; 
} 
int TimViTri(int a[],int n,int x){
	for(int vt=0;vt<n;vt++){
		if(a[vt]==x)
			return vt; 
	}
	return -1; 
} 
void XoaPhanTu(int a[],int &n,int vt){
	if(vt >=0 && vt<n){
		for(int i=vt;i<n-1;i++){
			a[i]=a[i+1]; 
		}
		n--; 
	}
	else{
		printf("\nVi tri khong hop le"); 
	} 
} 
int main(){
	int a[MAX],n,x; 
	NhapMang(a,n);
	printf("\nMang vua nhap: "); 
	XuatMang(a,n); 
	TimMAX(a,n);
	printf("\nGia tri lon nhat la %d",TimMAX(a,n)); 
	x=TimMAX(a,n); 
	int vt=TimViTri(a,n,x);
	printf("\nVi tri cua gia tri lon nhat %d: ",vt);
	int vi_tri_xoa;
	printf("\nNhap vi tri xoa: ");
	scanf("%d",&vi_tri_xoa);
	XoaPhanTu(a,n,vi_tri_xoa);
	printf("\nMang sau khi xoa:");
	XuatMang(a,n); 
} 
