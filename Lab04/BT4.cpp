#include <stdio.h>
int bai1();
int bai2();
int bai3();
int main() {
    int Suluachon;
    do {
        printf("\nMENU CHUONG TRINH\n");
        printf("1. Bai tap 1: Tinh diem trung binh sinh vien\n");
        printf("2. Bai tap 2: Xac dinh so nguyen to\n");
        printf("3. Bai tap 3: Xac dinh so chinh phuong\n");
        printf("4. Thoat chuong trinh\n");
        printf("Chon bai tap (1-4): ");
        scanf("%d", &Suluachon);
        switch(Suluachon) {
            case 1:
                bai1();
                break;
            case 2:
                bai2();
                break;
            case 3:
                bai3();
                break;
            case 4:
                printf("Cam on ban da su dung chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    } while(Suluachon != 4);
    return 0;
}
int bai1() {
    printf("Chua co giai phap cho bai tap 1!\n");
}
int bai2() {
    printf("Chua co giai phap cho bai tap 2!\n");
}
int bai3() {
    printf("Chua co giai phap cho bai tap 3!\n");
}

