#include <stdio.h>
int main() {
    //Khai bao
	int soBuoiNghi;
    float diemTrungBinh;
    //Nhap
    printf("Nhap vao so buoi nghi cua ban: ");
    scanf("%d", &soBuoiNghi);
    printf("Nhap vao diem trung binh cua ban: ");
    scanf("%f", &diemTrungBinh);
    //Kt va in ra kq
    if (soBuoiNghi <= 3 && diemTrungBinh >= 5) {
        printf("Ban co duoc di thi? 1\n");
    } else {
        printf("Ban co duoc di thi? 0\n"); 
    }
    return 0;
}

