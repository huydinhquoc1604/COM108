#include<stdio.h>
int main(){
	//Khai bao
	int ktThu;
	//Nhap
	printf("Nhap vao thu can KT: ");
	scanf("%f",&ktThu);
	//KT va in ra kq
	switch (ktThu) {
		case 2:{
			break;
		}
			printf("Thu hai\n");
			break;
		case 3:{
			break;
		}
			printf("Thu ba\n");
			break;
		case 4:{
			break;
		}
			printf("Thu tu\n");
			break;
		case 5:{
			break;
		}
			printf("Thu nam\n");
			break;
		case 6:{
			break;
		}
			printf("Thu sau\n");
			break;
		case 7:{
			break;
		}
			printf("Thu bay\n");
			break;
		case 8:{
			printf("Chu nhat\n");
			break;
		}
		default:
			printf("Khong co thu nao trong tuan");
			break;
			
	}
	return  0;
}
