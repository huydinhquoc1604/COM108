#include <stdio.h>

int main() {
    int a, b;
    int tong;

    // Nhap vao 2 so nguyen a và b
    printf("Nhap so nguyen a: ");
    scanf("%d", &a);
    printf("Nhap so nguyen b: ");
    scanf("%d", &b);

    // Tinh tong cua 2 so a và b
    tong = a + b;

    // Kiem tra a và b la so duong va tong cua 2 so chia het cho 3
    if (a > 0 && b > 0 && tong % 3 == 0) {
        printf("1\n"); 
    } else {
        printf("0\n"); 
    }

    return 0;
}

