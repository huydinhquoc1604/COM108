//Thuc hien nhap vao 1 so n bat ky. Tinh tong cac so tu 1-n
#include<stdio.h>
int main(){
	
	int n;
	int i=1;
	int tong=0;
	
	printf("Nhap n: ");
	scanf("%d",&n);
	while(i<=n){
		tong+=i;
		i++;
	}
	
	printf("Tong: %d",tong);
	return 0;
}
