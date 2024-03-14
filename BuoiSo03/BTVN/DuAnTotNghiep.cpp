#include<stdio.h>
int main(){
	//Khai bao
	float a,b;
	
	//Nhap
	printf("--NHAP TU BAN PHIM SO DIEM BAT KY--\n");
	printf("- Nhap diem mon du an mau 1: ");
	scanf("%d",&a);
	printf("- Nhap diem mon du an mau 2: ");
	scanf("%f",&b);
	
	//KT & in ra KQ
	printf("Duoc lam du an tot nghiep hay khong (1:Duoc lam , 0:Khong duoc lam): %d",(a>=5)&&(b<=5));
	
	return 0;
}
