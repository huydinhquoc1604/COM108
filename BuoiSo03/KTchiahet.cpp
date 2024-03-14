#include<stdio.h>
int main(){
	//Khai bao
	int a;
	int b;
	//Nhap
	printf("--Nhap vao so nguyen--\n");
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	
	//KT va in ket qua
	printf("KT(0-a chia het b, 1-a khong chia het b): %d",(a&b)!=0);
	
	
	return 0;
}
