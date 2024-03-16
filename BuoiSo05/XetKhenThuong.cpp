//Cho diem toan van anh va diem ren luyen tinh diem tb va in ra loai khen thuong cua sinh vien nhu sau: neu diem tb tu 9 va diem ren luyen tu 80 la gioi, diem tb tu 8 va diem ren luyen la 70 la kha, con lai khong xet.
#include<stdio.h>
int main(){
	//Khai bao
	float Toan, Van, Anh, RenLuyen, diemTB;
	//Nhap
	printf("- Nhap vao diem Toan: ");
	scanf("%f",&Toan);
	printf("- Nhap vao diem Van: ");
	scanf("%f",&Van);
	printf("- Nhap vao diem Anh: ");
	scanf("%f",&Anh);
	printf("- Nhap vao diem ren luyen: ");
	scanf("%f",&RenLuyen);
	//Nhap diem TB
	diemTB = (Toan + Van + Anh) / 3;
	printf("Diem TB = %.1f\n",diemTB);
	//KT va in ra KQ
	if (diemTB >= 9 && RenLuyen >= 80) {
		printf("Khen thuong Gioi\n");
	} else if (diemTB >= 8 && RenLuyen >= 70) {
		printf("Khen thuong Kha\n");
	}else{
		printf("Khong duoc khen thuong");
	}
	
	return 0;
}
