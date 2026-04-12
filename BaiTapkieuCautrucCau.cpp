#include <stdio.h>
#include <string.h> 
typedef struct{
	char TenTuong[50];
	char VaiTro[50];
	int GiaTien;
	float TyLeThang; 
}Tuong; 
void NhapThongTinTuong(Tuong &t);
void InThongTinTuong(Tuong t);
void TimKiemTuong(Tuong danhsach[],int SoLuong){
	char TenCanTim[50];
	printf("\nTim kiem tuong\n");
	printf("\nTen tuong can tim: ");
	fflush(stdin);
	gets(TenCanTim);
	int TimThay = 0;
	for(int i=0;i<SoLuong;i++){
		if(strcmp(danhsach[i].TenTuong, TenCanTim)==0){
			InThongTinTuong(danhsach[i]);
			TimThay= 1;
		}
	}
	if(TimThay==0){
		printf("\nKhong co tuong nao ten la '%s' trong danh sach!\n",TenCanTim); 
	} 
} 
void SapXepTuong(Tuong danhsach[],int SoLuong){
	for(int i=0;i<SoLuong;i++){
		for(int j=i+1;j<SoLuong;j++){
			if(danhsach[i].TyLeThang<danhsach[j].TyLeThang){
				Tuong temp = danhsach[i];
				danhsach[i]=danhsach[j];
				danhsach[j]=temp;
			} 
		} 
	} 
	printf("\nDa sap xep xong tupng theo ty le thang giam dan.\n"); 
} 
int main(){
	Tuong danhsach[3];
	printf("\nNhap thong tin cua 3 tuong");
	for(int i=0;i<3;i++){
		printf("\nNhap thong tin cua tuong %d: ",i+1); 
		NhapThongTinTuong(danhsach[i]);
	}
	printf("\nCac tuong co ty le thang >50.0");
	for(int i=0;i<3;i++){
		if(danhsach[i].TyLeThang>50.0){
			InThongTinTuong(danhsach[i]); 
		} 
	} 
	TimKiemTuong(danhsach,3);
	SapXepTuong(danhsach,3);
	for(int i=0;i<3;i++){
		InThongTinTuong(danhsach[i]); 
	} 
	return 0; 
} 
void NhapThongTinTuong(Tuong &t){
	float x;
	printf("Nhap ten tuong: ");
	fflush(stdin); 
	gets(t.TenTuong);
	printf("Nhap vai tro cua tuong: ");
	fflush(stdin); 
	gets(t.VaiTro);
	printf("Nhap gia tien: ");
	scanf("%d",&t.GiaTien);
	printf("Nhap ty le thang(%%): ");
	scanf("%f",&t.TyLeThang);  
} 
void InThongTinTuong(Tuong t){
	printf("\n----Thong tin tuong----\n");
	printf("\nTen:%s",t.TenTuong);
	printf("\nVai tro:%s",t.VaiTro);
	printf("\nGia tien:%d",t.GiaTien);
	printf("\nTy le thang:%1f",t.TyLeThang);
	printf("\n-------------------------\n"); 
} 
