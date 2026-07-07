#include <stdio.h>
#include <string.h>
#define MAX 100
void NhapChuoi(char s[]){
	printf("Nhap chuoi: ");
	fgets(s,MAX,stdin);
	int n=strlen(s);
	if(n>0 && s[n-1]=='\n'){
		s[n-1]=='\0'; 
	} 
}
void XuatChuoi(char s[]){
	printf("\nChuoi nhap co khoang trang la: ");
	for(int i=0;i<strlen(s);i++){
		printf("%c ",s[i]); 
	}
	printf("\n"); 
}

int main(){
	char s[MAX];
	NhapChuoi(s);
	printf("Chuoi vua nhap la: %s",s);
	XuatChuoi(s); 
} 
