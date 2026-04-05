#include <stdio.h>
void NhapMang(int a[], int &n) { 
    do {
        printf("Nhap so luong phan tu: ");
        scanf("%d", &n);
    } while(!(n>0 && n<=100));
    
    for(int i=0; i<n; i++) {
        printf("Phan tu thu %d: ", i); 
        scanf("%d", &a[i]);
    }
}
void InMang(int a[], int n) { 
    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
}
int TinhTong(int a[], int n) { 
    int tong = 0;
    for(int i=0; i<n; i++) {
        tong += a[i];
    }
    return tong;
}

int main() {
    int a[100], n;
    NhapMang(a, n);
    printf("\nMang vua nhap: ");
    InMang(a, n);
    int tong = TinhTong(a, n);
    printf("\nTong cac phan tu la: %d", tong); 
    return 0;
}
