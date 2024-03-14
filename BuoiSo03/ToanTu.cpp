//TOAN TU SO SANH: > < >= <= == !=
#include<stdio.h>
int main(){
	//Khai bao
	int a = 5;
	int b = 7;
	
	//Cac phep so sanh
	printf("a lon hon b: %d\n",a>b);
	printf("b lon hon a: %d\n",b>a);
	
	printf("a lon hon hoac bang b: %d\n",a>=b);
	printf("b lon hon hoac bang a: %d\n",b>=a);
	
	printf("a nho hon hoac bang b: %d\n",a<=b);
	printf("b nho hon hoac bang a: %d\n",b<=a);
	
	printf("a khac b: %d\n",a!=b);
	printf("b khac a: %d\n",b!=a);
	
	return 0;
}
