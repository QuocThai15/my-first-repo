#include <stdio.h>
#include <string.h>
#define MAX 100 
void NhapChuoi(char s[]){
	printf("Nhap chuoi: ");
	fgets(s,MAX,stdin);
	int n=strlen(s);
	if(n>0 && s[n-1]=='\n'){
		s[n-1]='\0'; 
	} 
}
void XuatKyTu(char s[]){
	printf("\nChuoi cach nhau co khoang trang: ");
	for(int i=0;i<strlen(s);i++){
		printf("%c ",s[i]); 
	}
	printf("\n"); 
}
int DemKyTuNguyenAm(char s[]){
	int dem=0;
	for(int i=0;i<strlen(s);i++){
		switch(s[i]){
			case 'U': case 'E': case 'O': case 'A': case 'I':
			case 'u': case 'e': case 'o': case 'a': case 'i':
			dem++;
		break; 
		} 
	}
	return dem; 
} 
int main(){
	char s[MAX],str[MAX]; 
	NhapChuoi(s);
	printf("Chuoi duoc nhap la:%s ",s);
	XuatKyTu(s); 
	int dem=DemKyTuNguyenAm(s);
	printf("so ky tu nguyen am la:%d ",dem); 
} 
