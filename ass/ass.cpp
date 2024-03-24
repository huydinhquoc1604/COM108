#include <stdio.h>

int main() {
    do {
        printf("\t-----MENU-----\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim uoc so chung va boi so chung cua 2 so\n");
        printf("3. Chuong trinh tinh tien cho quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Chuc nang doi tien\n");
        printf("6. Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop\n");
        printf("7. Xay dung chuong trinh vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Xay dung game FPOLY-LOTT\n");
        printf("10. Xay dung chuong trinh tinh toan phan so\n");
        printf("11. Ket thuc\n");
        
        int chon;
        printf("Moi ban chon chuc nang: ");
        scanf("%d", &chon);
        switch (chon) {
            case 1: {
                printf("Kiem tra so nguyen\n");
                float x;
                printf("Nhap vao x: ");
                scanf("%f", &x);
                if ((int)(x) == x) {
                    printf("%.2f la so nguyen\n", x);
                } else
                    printf("%.2f khong phai so nguyen\n", x);
                break;
            }
            case 2: {
                printf("Tim uoc so chung va boi so chung cua 2 so\n");
                break;
            }
            case 3: {
                printf("Chuong trinh tinh tien cho quan Karaoke\n");
                break;
            }
            case 4: {
                printf("Tinh tien dien\n");
                break;
            }
            case 5: {
                printf("Chuc nang doi tien\n");
                break;
            }
            case 6: {
                printf("Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop\n");
                break;
            }
            case 7: {
                printf("Xay dung chuong trinh vay tien mua xe\n");
                break;
            }
            case 8: {
                printf("Sap xep thong tin sinh vien\n");
                break;
            }
            case 9: {
                printf("Xay dung game FPOLY-LOTT\n");
                break;
            }
            case 10: {
                printf("Xay dung chuong trinh tinh toan phan so\n");
                break;
            }
            case 11: {
                printf("Ket thuc\n");
                return 0;
            }
            default: {
                printf("Lua chon khong hop le\n");
                break;
            }
        }
    } while (1);

    return 0;
}

