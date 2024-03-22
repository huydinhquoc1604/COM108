#include <stdio.h>
int main(){
//Khai bao
float chieuDai, chieuRong;
printf("Nhap chieu dai cua hinh chu nhat: ");
scanf("%f", &chieuDai);
printf("Nhap chieu rong cua hinh chu nhat: ");
scanf("%f", &chieuRong);

float chuVi = 2 * (chieuDai + chieuRong);
float dienTich = chieuDai * chieuRong;

printf("Chu vi cua hinh chu nhat la: %.2f\n", chuVi);
printf("Dien tich cua hinh chu nhat la: %.2f\n", dienTich);

    return 0;
}

