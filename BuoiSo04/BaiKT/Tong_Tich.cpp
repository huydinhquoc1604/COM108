#include<stdio.h>
int main(){
	int a,b;
	printf("- Nhap vao so nguyen a: ");
	scanf("%d",  &a);
	printf("- Nhap vao so nguyen b: ");
	scanf("%b", &b);
	
	printf("- Tong cua %d va %d la: %d\n", a, b, a + b);
	printf("- Tich cua %d va %d la: %d\n", a ,b , a *  b);
	return 0;
}
