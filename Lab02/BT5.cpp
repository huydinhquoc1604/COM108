#include <stdio.h>

int main(){
float ngayCong, luongNgay, phanTramThue;
    
printf("Nhap vao so ngay cong trong thang: ");
scanf("%f", &ngayCong);
printf("Nhap vao luong mot ngay: ");
scanf("%f", &luongNgay);
printf("Nhap vao phan tram thue thu nhap: ");
scanf("%f", &phanTramThue);

float thueThuNhap = (ngayCong * luongNgay) * (phanTramThue / 100);
float luongSauThue = ngayCong * luongNgay - thueThuNhap;
printf("Luong nhan vien duoc nhan thang nay la: %.2f\n", luongSauThue);
printf("Voi thue thu nhap da tru la: %.2f\n", thueThuNhap);

    return 0;
}

