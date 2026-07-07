#include <stdio.h>
int main(){
	int diem_elo[5]; 
	printf("Theo doi diem elo\n");
	printf("Vui long nhap diem 5 tran elo gan nhat: \n");
	for(int i=0;i<5;i++){
		printf("Diem sau tran thu %d: ",i+1);
		scanf("%d",&diem_elo[i]); 
	}
	printf("\nDiem danh sach elo cua ban la: ");
	for(int i=0;i<5;i++){
		printf("Tran %d: %d\n",i+1,diem_elo[i]);	 
	} 
	int max=diem_elo[0];
	for(int i=0;i<5;i++){
		if(diem_elo[i]>max){
			max=diem_elo[i]; 
		} 
	}
	printf("\n\nKy luc diem elo cua bna hien tai la: %d\n",max); 
	if(max>=1000){
		printf("Chuc mung! Muc tieu 1000 elo da hoan thanh!\n"); 
	} else{
		printf("Hay tiep tuc co gang de dat 1000 elo nhe!\n"); 
	}
	return 0; 
} 

