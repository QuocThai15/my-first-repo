#include <stdio.h>
int main(){
	float diem;
	printf("Moi nhap diem trung binh: ");
	scanf("%f",&diem);
	if(diem>=0 &&diem<=10){
		if(diem<5){
			printf("loai F"); 
		}
		else if(diem>=5 &&diem<6){
			printf("loai C"); 
		}
		else if(diem>=6 &&diem<7){
			printf("loai B"); 
		}
		else if(diem>=7 &&diem<8){
			printf("loai B+"); 
		}
		else if(diem>=8 &&diem<9){
			printf("loai A"); 
		}
		else{
			printf("loai A+"); 
		} 
	}
	else{
		printf("Diem khong hop le,vui long nhap lai"); 
	} 
	return 0; 
} 
