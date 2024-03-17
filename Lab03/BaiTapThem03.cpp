#include <stdio.h>
void hoanVi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void chucNangHoanVi(int *max, int *min) {
    if (*max < *min) {
        hoanVi(max, min);
    }
    printf("Gia tri sau khi hoan vi:\nmax = %d\nmin = %d\n", *max, *min);
}
void chucNangThuongCuoiCap(int diem) {
    if (diem > 40)
        printf("Duoc di nuoc ngoai.\n");
    else if (diem > 36)
        printf("Duoc di du lich trong nuoc.\n");
    else if (diem > 29)
        printf("Duoc di cong vien nuoc Ho Tay.\n");
    else
        printf("O nha don nha.\n");
}
void chucNangThuongCuoiNam(float tbQuaTrinh, float dThiHetMon) {
    float tbMon;
    if (tbQuaTrinh >= 5) {
        tbMon = tbQuaTrinh * 0.6 + dThiHetMon * 0.4;
        if (dThiHetMon < 5)
            printf("Nguoi yeu chia tay 1 thang - Diem TB mon = %.2f\n", tbMon);
        else if (dThiHetMon >= 5 && dThiHetMon % 3 == 0);
            printf("Nguoi yeu cho nam tay - Diem TB mon = %.2f\n", tbMon);
        else if (dThiHetMon >= 5 && dThiHetMon % 4 == 0);
            printf("Nguoi yeu ru di choi - Diem TB mon = %.2f\n", tbMon);
        else
            printf("Nguoi yeu tang 1 nu hon - Diem TB mon = %.2f\n", tbMon);
    } else {
        printf("Cam thi, bi nguoi yeu chia tay 2 thang\n");
    }
}
int main() {
    int choice;
    int max, min;
    int diemThiCap3;
    float tbQuaTrinh, dThiHetMon;
    do {
        printf("\nMenu:\n");
        printf("1. Hoan vi\n");
        printf("2. Thuong cuoi cap\n");
        printf("3. Thuong cuoi nam\n");
        printf("4. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Nhap vao hai so max va min: ");
                scanf("%d %d", &max, &min);
                chucNangHoanVi(&max, &min);
                break;
            case 2:
                printf("Nhap diem thi cap 3 cua ban: ");
                scanf("%d", &diemThiCap3);
                chucNangThuongCuoiCap(diemThiCap3);
                break;
            case 3:
                printf("Nhap diem trung binh qua trinh va diem thi het mon: ");
                scanf("%f %f", &tbQuaTrinh, &dThiHetMon);
                chucNangThuongCuoiNam(tbQuaTrinh, dThiHetMon);
                break;
            case 4:
                printf("Cam on ban da su dung chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (choice != 4);
    return 0;
}

