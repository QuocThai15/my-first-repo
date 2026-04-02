#include <stdio.h>
void NhapMang(int a[],int &n){
	do{
		printf("Nhap so luong phan tu: ");
		scanf("%d",&n); 
	}while(!(n>0 && n<=100));
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d: ",i);
		scanf("%d",&a[i]); 
	} 
}
void InMang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]); 
	} 
}
int TinhTong(int a[],int n){
	int tong=0;
	for(int i=0;i<n;i++){
		tong+=a[i]; 
	}
	return tong; 
} 
int TimMax(int a[],int n){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i]; 
		} 
	}
	return max; 
} 
int TimMin(int a[],int n){
	int min=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min=a[i]; 
		} 
	}
	return min; 
} 
int TimKiem(int a[],int n,int x){
	int vt=0;
	while(vt<n && a[vt]!=x){
		vt++; 
	}
	if(vt<n)
		return vt;
	else 
		return -1; 
} 
int main(){
	int a[100],n,x;
	NhapMang(a,n);
	printf("\nMang vua nhap: ");
	InMang(a,n);
	int tong=TinhTong(a,n);
	printf("\nTong cac phan tu la: %d ",tong);
	int max=TimMax(a,n);
	printf("\nSo lon nhat trong mang la: %d",max);
	int min=TimMin(a,n);
	printf("\nSo nho nhat trong mang la: %d",min); 
	printf("\nNhap gia tri x can tim: ");
	scanf("%d",&x); 
	if(TimKiem(a,n,x)!=-1){
		printf("\nVi tri cua %d la: %d ",x,TimKiem(a,n,x));
	}else{ 
		printf("\nkhong tim thay vi tri cua %d ",x);
    }
	return 0; 
} 
