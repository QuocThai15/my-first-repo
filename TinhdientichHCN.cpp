#include <stdio.h>
float tinhDienTichHCN(float x,float y){
	float Dientich = x*y;
	return Dientich; 
} 
int main(){
	float x,y,Dientich;
	printf("Moi ban nhap chieu dai: ");
	scanf("%f",&x);
	printf("Moi ban nhap chieu rong: ");
	scanf("%f",&y);
	Dientich=tinhDienTichHCN(x,y);
	printf("Dien tich hinh chu nhat la %.2f",Dientich); 
	return 0; 
} 
