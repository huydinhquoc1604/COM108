#include <stdio.h>
int main() {
    int choice;
    float diemThi, tbQuaTrinh, dThiHetMon;
        printf("MENU:\n");
        printf("1. Hoan vi\n");
        printf("2. Thuong cuoi cap\n");
        printf("3. Thuong cuoi nam\n");
        printf("4. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:{
            	int max;
            	int min;
            	printf("Nhap so max: ");
                scanf("%d", &max);
                printf("Nhap so min: ");
                scanf("%d", &min);
                if (max > min) {
                    int temp = max;
                    max = min;
                    min = temp;
                printf("Sau khi hoan vi, max = %d va min = %d\n", max, min);
                break;}
			}
               
            case 2:{
				printf("Nhap diem thi cap 3 cua ban: ");
                scanf("%f", &diemThi);
                if (diemThi > 40)
                    printf("Duoc di nuoc ngoai\n");
                else if (diemThi > 36)
                    printf("Duoc di du lich trong nuoc\n");
                else if (diemThi > 29)
                    printf("Duoc di cong vien nuoc Ho Tay\n");
                else
                    printf("O nha don nha\n");
                break;
			}
                
            case 3:
            	{
            	printf("Nhap diem TB qua trinh: ");
                scanf("%f", &tbQuaTrinh);
                printf("Nhap diem thi het mon: ");
                scanf("%f", &dThiHetMon);
                float TbMon = tbQuaTrinh * 0.6 + dThiHetMon * 0.4;
                if (tbQuaTrinh >= 5) {
                    if (dThiHetMon < 5)
                        printf("Nguoi yeu chia tay 1 thang - Diem TB mon = %.2f\n", TbMon);
                    else if (dThiHetMon >= 5 &&(int) dThiHetMon % 3 == 0)
                        printf("Nguoi yeu cho nam tay - Diem TB mon = %.2f\n", TbMon);
                    else if (dThiHetMon >= 5 &&(int) dThiHetMon % 4 == 0)
                        printf("Nguoi yeu ru di choi - Diem TB mon = %.2f\n", TbMon);
                    else
                        printf("Nguoi yeu tang 1 nu hon - Diem TB mon = %.2f\n", TbMon);
                } else {
                    printf("Cam thi, bi nguoi yeu chia tay 2 thang - Diem TB mon = %.2f\n", TbMon);
                }
                break;	
				}
                

            default:{
            	printf("Lua chon khong hop le. Vui long chon lai.\n");
				break;
			}
                
			
               
        }
    
    return 0;
}
