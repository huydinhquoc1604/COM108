#include <stdio.h>
int main() {
    int x, count = 0;
    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &x);
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            count++;
            break;
        }
    }
    if (count == 0 && x > 1)
        printf("%d la so nguyen to.\n", x);
    else
        printf("%d khong phai la so nguyen to.\n", x);
    return 0;
}

