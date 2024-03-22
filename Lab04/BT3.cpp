#include <stdio.h>
int main(){
    int x;
    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &x);
    int i;
    for (i = 1; i < x; i++) {
        if (i * i == x) {
            printf("%d la so chinh phuong.\n", x);
            break;
        }
    }
    if (i == x)
        printf("%d khong phai la so chinh phuong.\n", x);
    return 0;
}

