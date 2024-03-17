#include<stdio.h>
int main(){
	//Khai bao
	float a, b;
	
	//Nhap
	printf("Nhap gia tri cua a: ");
    scanf("%f", &a);
    printf("Nhap gia tri cua b: ");
    scanf("%f", &b);
	//KT & in ra KQ
	if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh co vo so nghiem.\n");
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    } else {
        float x = -b / a;
        printf("Nghiem cua phuong trinh la: x = %.2f\n", x);
    }

	return 0;
}
