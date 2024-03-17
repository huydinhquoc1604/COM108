#include <stdio.h>
int main() {
    //Khai bao
	int soKWh;
    float tienDien;

   //Nhap
    printf("Nhap so dien tieu thu (kWh): ");
    scanf("%d", &soKWh);

   //Kt va in ra kq
    if (soKWh <= 50) {
        tienDien = soKWh * 1.678;
    } else if (soKWh <= 100) {
        tienDien = 50 * 1.678 + (soKWh - 50) * 1.734;
    } else if (soKWh <= 200) {
        tienDien = 50 * 1.678 + 50 * 1.734 + (soKWh - 100) * 2.014;
    } else if (soKWh <= 300) {
        tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (soKWh - 200) * 2.536;
    } else if (soKWh <= 400) {
        tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (soKWh - 300) * 2.834;
    } else {
        tienDien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (soKWh - 400) * 2.927;
    }
    printf("So tien dien can phai dong: %.3f dong\n", tienDien);
    return 0;
}

