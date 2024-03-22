#include <stdio.h>
#define PI 3.14159
int main() {
    float banKinh;

    printf("Nhap ban kinh cua hinh tron: ");
    scanf("%f", &banKinh);

    float chuVi = 2 * PI * banKinh;
    float dienTich = PI * banKinh * banKinh;

    printf("Chu vi cua hinh tron la: %.2f\n", chuVi);
    printf("Dien tich cua hinh tron la: %.2f\n", dienTich);

    return 0;
}

