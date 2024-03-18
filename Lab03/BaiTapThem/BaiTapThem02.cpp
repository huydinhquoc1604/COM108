#include <stdio.h>
#include <math.h>
int kiemTraTuoiNguoiYeu(int tuoi) {
    if (tuoi > 50)
        printf("Nguoi yeu se dong tien hoc lai cho ban.\n");
    else if (tuoi > 35)
        printf("Nguoi yeu dua ban di hoc bang oto.\n");
    else if (tuoi > 24)
        printf("Nguoi yeu huong dan ban hoc.\n");
    else if (tuoi >= 18)
        printf("Nguoi yeu di hoc cung ban.\n");
    else
        printf("Ban nen can than.\n");
}
int kiemTraNamNhuan(int nam) {
    if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
        printf("Day la nam nhuan, thang 2 co 29 ngay.\n");
    else
        printf("Day khong phai nam nhuan, thang 2 co 28 ngay.\n");
}
int tinhCacPhepTinh(float a, float b) {
    printf("Tong cua %0.2f va %0.2f la: %0.2f\n", a, b, a + b);
    printf("Ket qua cua %0.2f^3 * %0.2f la: %0.2f\n", a, b, pow(a, 3) * b);
    if (b >= 0)
        printf("Can bac 2 cua %0.2f la: %0.2f\n", b, sqrt(b));
    else
        printf("Khong the tinh can bac 2 cua mot so am.\n");
}
int soSanhHaiSo(float a, float b) {
    if (a > b)
        printf("So lon la: %0.2f\nSo be la: %0.2f\n", a, b);
    else if (a < b)
        printf("So lon la: %0.2f\nSo be la: %0.2f\n", b, a);
    else
        printf("Hai so %.2f va %.2f bang nhau.\n", a, b);
}
int main() {
    int choice;
    float a, b;
    int tuoi, nam;
    do {
        printf("Menu:\n");
        printf("1. Kiem tra tuoi nguoi yeu\n");
        printf("2. Kiem tra nam nhuan\n");
        printf("3. May tinh\n");
        printf("4. Kiem tra 2 so\n");
        printf("5. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Nhap tuoi cua nguoi yeu: ");
                scanf("%d", &tuoi);
                kiemTraTuoiNguoiYeu(tuoi);
                break;
            case 2:
                printf("Nhap nam can kiem tra: ");
                scanf("%d", &nam);
                kiemTraNamNhuan(nam);
                break;
            case 3:
                printf("Nhap hai so bat ky: ");
                scanf("%f %f", &a, &b);
                tinhCacPhepTinh(a, b);
                break;
            case 4:
                printf("Nhap hai so bat ky: ");
                scanf("%f %f", &a, &b);
                soSanhHaiSo(a, b);
                break;
            case 5:
                printf("Cam on ban da su dung chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (choice != 5);

    return 0;
}

