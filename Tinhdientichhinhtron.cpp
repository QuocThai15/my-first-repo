#include <stdio.h>
#include <math.h>
#define Pi 3.141592653589793
  
float tinhDienTich(float r){
	float S= Pi * r * r;   
	return S; 
} 
int main(){
	float r,S;
	printf("Moi nhap ban kinh r: ");
	scanf("%f",&r);
	S=tinhDienTich(r);
	printf("Dien tich hinh tron la %2f\n",S); 
	return 0; 
} 
