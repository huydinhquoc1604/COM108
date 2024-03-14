//Toan tu so hoc: + - * / ++ --
#include<stdio.h>
int main(){
	//Khai bao
	float a = 5; 
	float b = 6;
	
	//Cac toan tu
	printf("a - b = %.1f\n",(a - b));
	printf("a * b = %.1f\n",(a * b));
	printf("a / b = %.1f\n",(a / b));
	
	printf("a++ = %.1f\n",(a++));//tang 1 sau khi ket thuc lenh
	printf("++b = %",(++b));//tang ngay khi thuc hien lenh
	printf("a = %.1f\n",(a));
	printf("--a= %.1f\n",(--a));
	return 0;
}
