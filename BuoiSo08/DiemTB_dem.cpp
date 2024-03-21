//Nhap vao 1 so nguyen bat ky. Tinh tb cac so chia het cho 3 tu 1-n
#include<stdio.h>
int main(){
	int n;
	int tong=0;
	int dem;
	float diemTB;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%3==0){
			tong+=i;
			dem++;
		}
	}
	diemTB=tong/dem;
	printf("Diem TB= %.1f",diemTB);
	return 0;
}
