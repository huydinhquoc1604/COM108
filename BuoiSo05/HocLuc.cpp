#include<stdio.h>
int main(){
	//Khai bao
	float diemTB;
	//Nhap
	printf("Nhap vao diem TB: ");
	scanf("%f",&diemTB);
	//KT va in ra KQ
	if(diemTB>=9){
		printf("Hoc luc XS\n");
	}else if(diemTB>=8){
		printf("Hoc luc Gioi\n");
	}else if(diemTB>=6.5){
		printf("Hoc luc Kha\n");
	}else{
		printf("Hoc luc TB\n");
	}
	return 0;
}
