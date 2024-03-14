//#include <stdio.h>
#include<stdio.h>
int main() {
    int tuoi;
    //Nhap
    printf("Nhap vao tuoi cua ban: ");
    scanf("%d",&tuoi);
    // Kiem tra
    if (tuoi >= 16) {
        printf("Ban du tuoi de tu nuoi lay than.\n");
    } else {
        printf("Ban chua du tuoi de tu nuoi lay than.\n");
    }

    return 0;
}

