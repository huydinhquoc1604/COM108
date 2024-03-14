#include <stdio.h>

int main() {
    int LuotXem;
    float DiemDanhGia;
    
    printf("- Nhap so luot xem cua bo phim: ");
    scanf("%d", &LuotXem);
    printf("- Nhap so diem danh gia cua bo phim: ");
    scanf("%f", &DiemDanhGia);

   printf("Hap dan hay khong(0-Hap dan,1-Khong hap dan): %d",(LuotXem>=100)&&(DiemDanhGia>=75,2));

    return 0;
}

