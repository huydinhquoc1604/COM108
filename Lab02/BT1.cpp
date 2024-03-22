#include<stdio.h>
int main(){
	//Khai bao
	int number1, number2;
	//Nhap
	printf("Nhap so thu nhat: ");
	scanf("%d",&number1);
	printf("Nhap so thu hai: ");
	scanf("%d",&number2);
	//KT va in ra kq
	int tong = number1 + number2;
    int hieu = number1 - number2;
     printf("Tong cua hai so la: %d\n", tong);
    printf("Hieu cua hai so la: %d\n", hieu);
	return 0;
}
