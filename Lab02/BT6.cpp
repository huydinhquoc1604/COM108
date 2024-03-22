#include <stdio.h>

int main() {
    int chiSoTinhCam;
    
    printf("Nhap vao chi so tinh cam cua co rut danh cho ban: ");
    scanf("%d", &chiSoTinhCam);

    if (chiSoTinhCam > 55) {
        printf("Co rut co tinh cam voi ban? 1\n");
    } else {
        printf("Co rut co tinh cam voi ban? 0\n");
    }

    return 0;
}

