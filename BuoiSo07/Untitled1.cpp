#include<stdio.h>
int main(){
	//Khai bao
	int chon;
	int tuoi;
	//In ra menu
	printf("-------MENU-------\n");
	printf("1. Tim kiem nguoi yeu\n");
	printf("2. Kiem tra so\n");
	printf("------------------\n");
	//Chon chuc nang
	printf("Moi ban chon chuc nang: ");
	scanf("%d",&chon);
	//Thuc hien chuc nang da chon
	switch(chon){
		case 1:{
			printf("--Thuc hien CN tim Ny--\n");
			//Khai bao bien
			int tuoi;
			scanf("%d",&tuoi);
			//Nhap
			printf("Nhap vao tuoi Ny cua ban: ");
			//KT va in ra kq
			break;
		}
		case 2:{
			printf("--Thuc hien chuc nang kiem tra so--\n");
			//Khai bao bien: a, b, min
			int a,b,min;
			//nhap a,b
			printf("Nhap a = ");
			scanf("%d",&a);
			printf("Nhap b = ");
			scanf("%d",&b);
			//Nhap gia tri min: so sanh a,b. a<b => min = a
			if(a<b){
				min = a;
			}else{
				min = b;
			}
				//SD toan tu 3 ngoi: min = a<b?a:b
			//In ra min
			printf("Gia tri min = %d\n",min);
			//KT xem min co chia het cho 5 ko + In kq
			if(min%5==0){
				printf("%d la so chia het cho 5\n",min);
			}else{
				printf("%d la so ko chia het cho 5\n",min);
			}
			break;
		}
		default:{
			break;
		}
	}
	return 0;
}
