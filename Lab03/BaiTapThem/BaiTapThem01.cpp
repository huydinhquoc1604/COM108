#include <stdio.h>
float tinhDiemTB(float toan, float van, float anh) {
    return (toan * 3 + van * 2 + anh) / 6;
}
float xepLoaiHocLuc(float diemTB) {
    if (diemTB < 0 || diemTB > 10) {
        printf("Diem khong hop le.\n");
        return 0;
    }
    if (diemTB >= 9)
        printf("Hoc sinh xuat sac.\n");
    else if (diemTB >= 8)
        printf("Hoc sinh gioi.\n");
    else if (diemTB >= 7)
        printf("Hoc sinh kha.\n");
    else if (diemTB >= 6)
        printf("Trung binh kha.\n");
    else if (diemTB >= 5)
        printf("Trung binh.\n");
    else if (diemTB >= 4)
        printf("Yeu.\n");
    else
        printf("Kem.\n");
}
int hocBong(float diemTB, float diemRL) {
    if (diemTB > 8 && diemRL > 80)
        printf("Ban duoc hoc bong 500.000d.\n");
    else
        printf("Ban khong duoc hoc bong.\n");
}
int main() {
    int choice;
    float toan, van, anh, diemTB, diemRL;
    do {
        printf("Menu:\n");
        printf("1. Xep loai hoc luc\n");
        printf("2. Hoc bong\n");
        printf("3. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap diem Toan: ");
                scanf("%f", &toan);
                printf("Nhap diem Van: ");
                scanf("%f", &van);
                printf("Nhap diem Anh: ");
                scanf("%f", &anh);
                diemTB = tinhDiemTB(toan, van, anh);
                printf("Diem trung binh: %.2f\n", diemTB);
                xepLoaiHocLuc(diemTB);
                break;
            case 2:
                printf("Nhap diem trung binh: ");
                scanf("%f", &diemTB);
                printf("Nhap diem ren luyen: ");
                scanf("%f", &diemRL);
                hocBong(diemTB, diemRL);
                break;
            case 3:
                printf("Cam on ban da su dung chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (choice != 3);

    return 0;
}

