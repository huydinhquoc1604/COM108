#include <stdio.h>

int main() {
    float diemToan, diemLy, diemHoa;
    
    printf("Nhap diem mon Toan: ");
    scanf("%f", &diemToan);
    printf("Nhap diem mon Ly: ");
    scanf("%f", &diemLy);
    printf("Nhap diem mon Hoa: ");
    scanf("%f", &diemHoa);

    float diemTrungBinh = (diemToan * 3 + diemLy * 2 + diemHoa * 1) / 6;

    printf("Diem trung binh la: %.2f\n", diemTrungBinh);

    return 0;
}

