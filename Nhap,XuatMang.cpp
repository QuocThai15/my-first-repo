#include <stdio.h>
void NhapMang(int a[],int &n){
	do{
		printf("Nhap so luong phan tu: ");
		scanf("%d",&n); 
	} while(!(n>0 && n<=100));
	for(int i=0;i<n;i++){
		 printf("phan tu thu %d: ",i);
		 scanf("%d",&a[i]);
	}
} 
void InMang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]); 
	}
}
int TinhTong(int a[],int &n){
	int Tong = 0;
	for(int i =0;i<n;i++){
		Tong+=a[i]; 
	} 
	return Tong; 
}
float TinhTrungBinhCong(int a [],int n){
	 int Tong= TinhTong(a,n);
	 return (float)Tong / n; 
} 
int TimViTriMax(int a[],int n){
	int vi_tri_max=0;
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
			vi_tri_max=i; 
		} 
	}
	return vi_tri_max; 
} 
int TimViTriMin(int a[],int n){
	int vi_tri_min=0;
	int min=a[0];
	for(int i=1;i<n;i++){
		if(a[i]<min){
			min=a[i];
			vi_tri_min=i; 
		} 
	}
	return vi_tri_min; 
} 
int main(){ 
	int a[100],n; 
	NhapMang(a,n);
	printf("Mang vua nhap: ");
	InMang(a,n);
	int Tong=TinhTong(a,n);
	float tbc = TinhTrungBinhCong(a,n);
	printf("\nTong cac phan tu trong mang la: %d\n",Tong);
	printf("Trung binh cong cua mang la: %f\n",tbc);
	int vt_max=TimViTriMax(a,n);
	int vt_min=TimViTriMin(a,n);
	printf("\nphan tu lon nhat la: %d",a[vt_max]);
	printf("\nphan tu nho nhat la: %d",a[vt_min]); 
	return 0; 
} 
