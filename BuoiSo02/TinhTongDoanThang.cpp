#include<stdio.h>
int main(){
	float Doan1;
	float Doan2;
	float Doan3;
	printf("--NHAP DO DAI CAC DOAN THANG--\n");
	printf("Doan 1: \n");
	scanf("%f",&Doan1);
	printf("Doan 2: \n");
	scanf("%f",&Doan2);
	printf("Doan 3: \n");
	scanf("%f",&Doan3);
	
	tong = doan1+doan2+doan3;
	printf("--IN THONG TIN RA MAN HINH--\n");
	printf("Doan 1 = %.1f\n",Doan1);
	printf("Doan 2 = %.2f\n",Doan2);
	printf("Doan 3 = %.3f\n",Doan3);
	printf("Tong = %.1f + %.1f + %.1f = %.1f\n", doan1,doan2,doan3,tong );
	
	return 0;
}
