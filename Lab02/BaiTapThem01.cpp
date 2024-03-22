#include <stdio.h>

struct SinhVien {
    char hoTen[50];
    float diemMon1;
    float diemMon2;
    float diemMon3;
    char lop[20];
};

int main() {
    struct SinhVien sv;

    printf("Nhap ho ten sinh vien: ");
    fgets(sv.hoTen, sizeof(sv.hoTen), stdin);
    printf("Nhap diem mon 1: ");
    scanf("%f", &sv.diemMon1);
    printf("Nhap diem mon 2: ");
    scanf("%f", &sv.diemMon2);
    printf("Nhap diem mon 3: ");
    scanf("%f", &sv.diemMon3);
    printf("Nhap lop: ");
    scanf("%s", sv.lop);

    float diemTrungBinh = (sv.diemMon1 + sv.diemMon2 + sv.diemMon3) / 3;

    printf("\nThong tin sinh vien:\n");
    printf("Ho ten: %s", sv.hoTen);
    printf("Diem trung binh: %.2f\n", diemTrungBinh);
    printf("Lop: %s\n", sv.lop);

    return 0;
}

