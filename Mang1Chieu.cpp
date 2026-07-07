#include <stdio.h>
#define MAX 100
#define MIN 5  
void NhapMang(int a[MAX],int &n){
	do{
		printf("Nhap day so nguyen: ");
		scanf("%d",&n); 
	}while(!(n>=MIN &&n<=MAX));
	for(int i=0;i<n;i++){
		printf("Phan tu thu %d: ",i);
		scanf("%d",&a[i]); 
	} 
}
void XuatMang(int a[MAX],int n){
	for(int i=0;i<n;i++){
		printf("%5d",a[i]); 
	} 
}
int TimKiemViTri(int a[],int n,int x){
	for(int vt=0;vt<n;vt++){
		if(a[vt]==x)
			return vt; 
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
	for(int i=1;i<n;i++){
		if(a[i]>max){
			max=a[i]; 
		} 
	}
	return max; 
}
int TimMin(int a[],int n){
	int min=a[0];
	for(int i=1;i<n;i++){
		if(a[i]<min){
			min=a[i]; 
		} 
	}
	return min; 
}
void HoanVi(int &x,int &y){
	int temp=x;
	x=y;
	y=temp; 
}
void SapXeptang(int a[],int n){
	int i,j;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				HoanVi(a[i],a[j]); 
			} 
		} 
	} 
} 
void SapXepGiam(int a[],int n){
	int i,j;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				HoanVi(a[i],a[j]); 
			} 
		} 
	} 
} 
void ThemPhanTu(int a[],int &n,int vt,int x){
	if(vt>=0 && vt<=n){
		for(int i=n;i>vt;i--){
			a[i]=a[i-1];
		a[vt]=x;
		n++; 
		} 
	} 
} 
int main(){
	int a[MAX],n,x,y; 
	NhapMang(a,n); 
	XuatMang(a,n);
	printf("\nNhap vi tri cua x: ");
	scanf("%d",&x); 
	int vt=TimKiemViTri(a,n,x);
	if(vt!=-1) 
		printf("Vi tri cua phan tu %d la: %d\n",x,vt); 
	else
		printf("KHong tim thay vi tri x\n",vt);
	int chan=KiemTraChan(a,n);
	if(chan==1)
		printf("\nMang toan so chan",chan);
	else
		printf("\nMang khong toan so chan",chan); 
	int max=TimMax(a,n);
	printf("\nGia tri lon nhat la %d",max); 
	int min=TimMin(a,n);
	printf("\nGia tri nho nhat la %d",min);
	SapXeptang(a,n); 
	printf("\nMang sau khi tang dan: ");	
	XuatMang(a,n);
	SapXepGiam(a,n);
	printf("\nmang sai khi giam dan: ");
	XuatMang(a,n);
    printf("\nNhap vi tri can them: ");
    scanf("%d", &vt);
    printf("Nhap gia tri can them: ");
    scanf("%d", &y);
	ThemPhanTu(a,n,vt,y);
	printf("\nMang sau khi them vao phan tu: "); 
	XuatMang(a,n); 
} 
