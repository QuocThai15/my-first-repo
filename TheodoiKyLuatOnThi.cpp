#include <stdio.h>
int main(){
	float gio_hoc[7];
	float tong_gio=0.0;
	float trung_binh;
	int ngay_luoi=0;
	printf("Danh sach theo doi ngay hoc");
	for(int i=0;i<7;i++){
		printf("Moi ban nhap gio hoc cua ngay thu %d:",i+1);
		scanf("%f",&gio_hoc[i]); 
	} 
	for(int i=0;i<7;i++){
		tong_gio=tong_gio+gio_hoc[i]; 
	} 
	trung_binh= tong_gio/7;
	printf("\n---TONG KET LUAN---\n");
	printf("Tong so gio hoc:%.2fgio\n",tong_gio);
	printf("Trung binh moi ngay hoc: %.2f gio\n",trung_binh);
	
	for(int i=0;i<7;i++){
		if(gio_hoc[i]<2,0){
			ngay_luoi=ngay_luoi+1; 
		}  
	}
	if(ngay_luoi==0){
		printf("\nXuat sac! Ban da duy tri rat tot trong ca tuan!\n"); 
	} else{
		printf("\nCanh bao!co %d ngay ban da hoc duoi 2 tieng.Can ky luat hon!\n");
	} 
	return 0; 
} 
