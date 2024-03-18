#include <stdio.h>
#include <math.h>
//Khai bao
int tinhHocLuc();
int giaiPhuongTrinhBacMot();
int giaiPhuongTrinhBacHai();
float tinhTienDien();

int main() {
    int choice;
    //Nhap
    printf("===MENU CHUONG TRINH===\n");
    printf("1. Tinh hoc luc sinh vien\n");
    printf("2. Giai phuong trinh bac 1\n");
    printf("3. Giai phuong trinh bac 2\n");
    printf("4. Tinh tien dien\n");
    printf("Nhap lua chon cua ban (1-4): ");
    scanf("%d", &choice);
    //Kt va in ra kq
    switch (choice) {
        case 1:
            tinhHocLuc();
            break;
        case 2:
            giaiPhuongTrinhBacMot();
            break;
        case 3:
            giaiPhuongTrinhBacHai();
            break;
        case 4:
            tinhTienDien();
            break;
        default:
            printf("Lua chon khong hop le.\n");
    }
    return 0;
}
int tinhHocLuc() {
}
int giaiPhuongTrinhBacMot() {
}

int giaiPhuongTrinhBacHai() {
}
float tinhTienDien() {
}

