/*BAI TOAN
Cho 1 so nguyen b = 7.
Nhap vao 1 so nguyen a. Neu a duong thi thuc hien phep tinh a-b.
Va in ra ket qua cua phep tinh do.
*/
#include<stdio.h>
int main(){
	//Khai bao bien
	int b=7;
	int a,  hieu;
	
	//Nhap gia tri
	printf("Nhap gia tri a = ");
	scanf("%d",&a);
	
	//KT va thuc hien cong viec
	if(a>0){
		hieu = a - b;
		printf("a - b = %d\n",hieu);
	}
	return 0;
}
/*CAU TRUC IF
if(<dieu kien>){
	<cong viec>
	}
