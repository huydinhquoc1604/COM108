#include <stdio.h>

int main() {
    float diem_trung_binh;
    char danh_gia_hanh_kiem;

    printf("Nhap diem trung binh: ");
    scanf("%f", &diem_trung_binh);

    printf("Nhap loai danh gia hanh kiem (A/B/C/D): ");
    scanf(" %c", &danh_gia_hanh_kiem);

    printf("Diem trung binh: %.2f\n", diem_trung_binh);

    if (diem_trung_binh < 3)
        printf("Hoc luc: Kem\n");
    else if (diem_trung_binh < 5)
        printf("Hoc luc: Yeu\n");
    else if (diem_trung_binh < 7)
        printf("Hoc luc: Trung binh\n");
    else if (diem_trung_binh < 8)
        printf("Hoc luc: Kha\n");
    else if (diem_trung_binh < 9)
        printf("Hoc luc: Gioi\n");
    else
        printf("Hoc luc: Xuat sac\n");

    switch (danh_gia_hanh_kiem) {
        case 'A':
            printf("Loai danh gia hanh kiem: A\n");
            break;
        case 'B':
            printf("Loai danh gia hanh kiem: B\n");
            break;
        case 'C':
            printf("Loai danh gia hanh kiem: C\n");
            break;
        case 'D':
            printf("Loai danh gia hanh kiem: D\n");
            break;
        default:
            printf("Loai danh gia hanh kiem khong hop le\n");
    }

    return 0;
}

