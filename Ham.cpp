#include <stdio.h>
void NhapHam(int &n){
	do{ 
	printf("Nhap day so nguyen: ");
	scanf("%d",&n);
    }while(!(n>=5 &&n<=100)); 
}
void XuatHam(int n){
	printf("In day so: ");
	scanf("%d",n); 
}
int main(){
	int n; 
	NhapHam(n);
	XuatHam(n); 
} 
