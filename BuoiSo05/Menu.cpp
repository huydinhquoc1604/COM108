/*Xay dung chuong trinh co cac chuc nang sau:
1. Tinh va in ra tong 2 so
2. Nhap diem va xet hoc luc
3. Giai phuong trinh bac nhat
*/
#include<stdio.h>
int main(){
	//Khai bao
	int chon;//
	//In ra menu
	printf("---MENU---\n");
	printf("1. Tinh tong\n");
	printf("2. Xet hoc luc\n");
	printf("3. Giai phuong trinh bac 1\n");
	printf("===========\n");
	
	//Chon Cn can thuc hien
	printf("Moi ban chon chuc nang: ");
	scanf("%d",&chon);
	
	//Thuc hien CN da chon
	switch(chon){
		case 1:{
			printf("==Thuc hien CN tinh tong 2 so==\n");
			//Khai bao
			float number1, number2, tong;
			//nhap
			printf("Nhap so thu nhat: ");
			scanf("%f",&number1);
			printf("Nhap so thu hai: ");
			scanf("%f",&number2);
			//tinh tong
			tong =  number1+number2;
			//in ra tong
			printf("%.1f + %.1f = %.1f\n",number1,number2,tong);
			break;
		}
		case 2:{
			break;
		}
		case 3:{
			break;
		}
		default:{
			printf("Chuong trinh khong co chuc nang nay.\n");
			break;
		}
	}
	return 0;
}
