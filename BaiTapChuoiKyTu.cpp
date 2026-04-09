#include <stdio.h>
#include <string.h>
#define MAX 100
void NhapChuoi(char s[]){ ///Nhap chuoi ku tu
    printf("Nhap chuoi: ");
    fgets(s,MAX,stdin);
    int n=strlen(s);
    if(n>0 && s[n-1]=='\n'){
        s[n-1]='\0';
    }
}
void XuatKyTu(char s[]){
	printf("chuoi cach nhau 2 khoang trang:");
	for(int i=0;i<strlen(s);i++){
		printf("%c  ",s[i]); 
	}
	printf("\n"); 
} 
int DemKyTuNguyenAm(char s[]){    
    int dem=0;
    for(int i=0;i<strlen(s);i++){
        switch(s[i]){
            case 'u': case 'e': case 'o': case 'a': case 'i':
            case 'U': case 'E': case 'O': case 'A': case 'I':
                dem++;
        break;
        }
    }
    return dem;
}
char KyTuCuoiCung(char s[]) { 
    int n = strlen(s);
    if(n > 0) {
        return s[n-1];
    }
    return '\0'; 
}
void  kyTuDauThanhHoa(char s[]){
    int n=strlen(s);
    for(int i=0;i<n;i++){
    	if(i==0 || (i>0 && s[i-1]==' ')){
    		if(s[i]>='a' && s[i]<='z'){
    			s[i]-=32; 
			} 
		} 
	} 
	printf("Chuoi sau khi viet hoa chu dau: %s",s); 
}
int main (){
    char s[MAX],txt[255],str[MAX];
    int dem,i;
    NhapChuoi(s);
    printf("Chuoi vua nhap la: %s  ",s);
    XuatKyTu(s); 
    printf("so ky tu nguyen am trong chuoi la %d",DemKyTuNguyenAm(s));
    printf("\nKy tu cuoi cung: %c\n", KyTuCuoiCung(s));
    kyTuDauThanhHoa(s);
    return 0;
}
