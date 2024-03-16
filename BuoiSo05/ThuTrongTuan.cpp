//Nhap vao 1 so bat ky in ra thu do trong tuan
#include<stdio.h>
int main(){
	//Khai bao
	float ktThu;
	//Nhap
	printf("Nhap vao 1 so bat ky: ");
	scanf("%f",ktThu);
	//KT va in ra KQ
	if(ktThu==2){
		printf("Thu hai\n");
	}else if(ktThu==3){
		printf("Thu ba\n");
	}else if(ktThu==4){
		printf("Thu tu\n");
	}else if(ktThu==5){
		printf("Thu nam\n");
	}else if(ktThu==6){
		printf("Thu sau\n");
	}else if(ktThu==7){
		printf("Thu bay\n");
	}else if(ktThu==8){
		printf("Chu nhat\n");
	}else{
		printf("So khong phu hop\n");
	}
	
	return 0;
}
