#include <stdio.h>
#define MAX 100
#define MIN 5
void NhapMang(int a[MAX],int &n){
	do{
		printf("Nhap day so nguyen: ");
		scanf("%d",&n); 
	}while(!(n>=MIN && n<=MAX));
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d : ",i);
		scanf("%d",&a[i]); 
	} 
}
void XuatMang(int a[MAX],int n){
	for(int i=0;i<n;i++){
		printf("%5d",a[i]); 
	} 
}
int TimKiemViTri(int a[MAX],int n,int x){
	int vt=0;
	for(int vt=0;vt<n;vt++){
		if(a[vt]==x){
			return vt; 
		} 
	}
	return -1; 
} 
int KiemTraChan(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]%2==1){
			return 0; 
		} 
	}
	return 1; 
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
void HoanVi(int &x,int &y){
	int temp=x;
	x=y;
	y=temp; 
}
void SapXepTang(int a[],int n){
	int i,j;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				HoanVi(a[i],a[j]); 
			} 
		} 
	} 
}

int main(){
	int a[MAX],n,x;
	NhapMang(a,n);
	XuatMang(a,n);
	printf("\nNhap vi tri cua x: ");
	scanf("%d",&x); 
	int vt=TimKiemViTri(a,n,x);
	if(vt!=-1)
		printf("Vi tri cua phan tu la %d",vt);
	else 
		printf("\nKhong tim thay vi tri cua phan tu",vt); 
	int chan=KiemTraChan(a,n);
	if(chan==1)
		printf("\nMang toan so chan",chan);
	else
		printf("\nMang khong toan so chan",chan);
	int max=TimMax(a,n);
	printf("\nSo lon nhat la %d",max);
	SapXepTang(a,n);
	printf("\nMang sau khi sap xep tang ");
	XuatMang(a,n); 
} 
