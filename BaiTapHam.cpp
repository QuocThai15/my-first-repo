#include<stdio.h>
#include<math.h> 
void NhapSo(int &n){
    do{
        printf("Nhap n (n>0): ");
        scanf("%d", &n);
    }while(!(n>0));
}
int KiemTraSoChinhPhuong(int n){
	int CanBacHai=int(sqrt(n));
	if (pow(CanBacHai,2)==n)
		return 1;
	else 
		return 0; 
} 
int KiemTraSoNguyenTo(int n){
	int demuocso = 0;
	for(int i=1;i<=1;i++){
		if(n%i==0)
			demuocso++; 
	}
	if(demuocso==2)
		return 1;
	else 
		return 0; 
} 
int SoDao(int n){
	int soDu,soDao;
	soDao=0;
	while(n!=0){
		soDu=n%10;
		soDao=soDao*10 + soDu;
		n=n/10;
	}
	return soDao;
}
int KiemTraSoDoiXung(int n){
	if(SoDao(n)==n)
		return 1;
	else 
		return 0;
}
int KiemTraSoHoanHao(int n){
	int tongUocso=0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0)
			tongUocso+=i;
	}
	if(tongUocso==n)
		return 1;
	else
		return 0;
}
int DemChuSo(int n){
	int dem=0;
	while(n>0){
		dem+=1;
		n=n/10;
	} 
	return dem;
}
int TongChuSo(int n){
	int Tong=0;
	int soDu=0;
	while(n>0){
		soDu=n%10;
		Tong+=soDu;
		n=n/10;
	}
	return Tong;
}
int main(){
	int n;
	NhapSo(n);
	printf("\n%d co %d chu so",n,TongChuSo(n));
	printf("\n%d co %d chu so",n,DemChuSo(n));
	printf("\nSo dao cua %d la %d",n,SoDao(n));
	if(KiemTraSoDoiXung(n)==1)
		printf("\n%d la so doi xung",n);
	else
		printf("\n%d khong phai la so doi xung",n);
	if(KiemTraSoHoanHao(n)==1)
		printf("\n%d la so hoan hao",n);
	else
		printf("\n%d khong phai la so hoan hao",n);
	
	int kt=KiemTraSoChinhPhuong(n);
	if(kt=1)
		printf("\n%d la so chinh phuong",n);
	else
		printf("\n%d khong phai la so chinh phuong",n);
	
	if(KiemTraSoNguyenTo(n)==1)
		printf("\n%d la so nguyen to",n);
	else
	 	printf("\n%d khong phai la so nguyen to",n); 
	///printf("So dao cua %d la %d",n,SoDao(n)); 
	s 
} 
