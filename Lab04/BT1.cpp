#include <stdio.h>
int main() {
    int min, max;
    float tong = 0, bienDem = 0, trungBinh = 0;
    printf("Nhap gia tri min: ");
    scanf("%d", &min);
    printf("Nhap gia tri max: ");
    scanf("%d", &max);
    for (int i = min; i <= max; ++i) {
        if (i % 2 == 0) {
            tong += i;
            bienDem++;
        }
    }
    if(bienDem != 0)
        trungBinh = tong / bienDem;
    printf("Trung binh tong cua cac so tu nhien chia het cho 2 tu %d den %d la: %.2f\n", min, max, trungBinh);
    return 0;
}

