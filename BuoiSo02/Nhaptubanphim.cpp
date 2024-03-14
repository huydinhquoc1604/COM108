#include<stdio.h>
int main(){
	//Khai bao bien
	int a;
	
	//Nhap gia tri cho bien a tu ban phim
	printf("Nhap vao gia tri cua bien a:  ");
	scanf("%d",&a);
	
	//Hien thi du lieu ra man hinh
	printf("Gia tri vua nhap:  %d",a);
	
	return 0;
}
/*CAU TRUC SCANF 
scanf("<ky tu dinh dang DL>",&<ten bien>);
1. <Ky tu dinh dang DL>
	%d: so nguyen
	%f: so thuc
	%c: ky  tu
	%s: chuoi
2. &
	Tro den bien
*/

