#include<stdio.h>
int main(){
	//Khai bao
	int tienbo;
	int tienme;
	//Nhap vao gia tri
	printf("Me cho so tien la: ");
	scanf("%d",&tienMe);
	printf("Bo cho so tien la: ");
	scanf("%d",&tienBo);
	
	//KT vi tien
	printf("Co xin duoc tien khong(1-co,2-khong):  %d",(tienMe>0)||(tienBo>0));
	
	return 0;
	
}
