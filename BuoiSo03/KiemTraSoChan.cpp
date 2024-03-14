#include<stdio.h>
int main(){
	//Khai bao
	int SoNguyen;
	
	//Nhap gia tri
	printf("Nhap vao 1 so nguyen: ");
	scanf("%d",&SoNguyen);
	
	//Thuc hien kiem tra va in ra ket qua
	printf("Kiem tra so chan(1-chan,0-le): %d",(SoNguyen%2)==0);
	return 0;
}
