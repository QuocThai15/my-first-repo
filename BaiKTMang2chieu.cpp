#include <stdio.h>
#define MAX 10
#define MIN 1
void NhapMaTran(int a[][MAX],int &n){
    do{
        printf("Nhap cap ma tran vuong: ");
        scanf("%d",&n);
    }while(!(n>MIN && n<=MAX));
    printf("\nNhap vao ma tran: ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Nhap phan tu thu a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}
void XuatMaTran(int a[][MAX],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
}
int TongDuongCheoChinh(int a[][MAX],int n){
    int tong=0;
    for(int i=0;i<n;i++){
        tong+=a[i][i];
    }
    return tong;
}
int DemPhanTuChan(int a[][MAX],int n){
    int chan =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]%2==0)
                chan++;
        }
    }
    return chan;
}
int InDongChanCotLe(int a[][MAX],int n){
	printf("\nCac phan tu thuoc dong chan va cot le la: ");
	int in=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i%2==0 && j%2!=0){
				printf("%d\t",a[i][j]);
				in=1; 
			} 
		} 
	}
	if(in==0){
		printf("\nkhong co phan tu nào thoa man"); 
	}
	printf("\n"); 
} 
int TimMaxDongD(int a[][MAX], int n, int d) {
    int max = a[d][0]; 
    for (int j = 1; j < n; j++) {
        if (a[d][j] > max) {
            max = a[d][j];
        }
    }
    return max;
}
int TongTamGiacTren(int a[][MAX], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) { 
                tong += a[i][j];
            }
        }
    }
    return tong;
}
int main(){
    int a[MAX][MAX];
    int n;
    NhapMaTran(a,n);
    printf("\nMa tran duoc tao la: \n");
    XuatMaTran(a,n);
    int tong=TongDuongCheoChinh(a,n);
    printf("\nTong duong cheo chinh la: %d",tong);
    int chan=DemPhanTuChan(a,n);
    printf("\nDem phan tu chan la: %d",chan);
    InDongChanCotLe(a, n);
    int d;
    do {
        printf("\nNhap dong d can tim Max (0 <= d < %d): ", n);
        scanf("%d", &d);
    } while (d < 0 || d >= n); 
    int maxDong = TimMaxDongD(a, n, d);
    printf("Gia tri lon nhat tren dong %d la: %d\n", d, maxDong);
    int tongTren = TongTamGiacTren(a, n);
    printf("\nTong cac phan tu thuoc tam giac tren la: %d\n", tongTren);
    return 0;
}
