#include<stdio.h>
int main(){
	do{
		printf("------Menu------\n");
        printf("1. Dem so chia het cho 4\n");
        printf("2. Tinh tong cac so trong khoang\n");
        printf("3. Xac dinh hoc luc\n");
        printf("4. Thoat\n");
        
        int chon;
        printf("Moi ban chon chuc nang: \n");
        scanf("%d",&chon);
        switch(chon){
        	case 1:{
        		printf("Dem so chia het cho 4\n");
        		int n, dem = 0;
			    printf("Nhap so nguyen n (> 10): ");
			    scanf("%d", &n);
			    for(int i = 1; i <= n; i++){
			        if(i % 4 == 0){
			        dem++;
			        }
			    	}
			   		printf("Tong so chia het cho 4 tu 1 den %d l�: %d\n", n, dem);
					}
				break;
			}
			case 2:{
				printf("Tinh tong cac so\n");
				 int min, max, sum = 0;
			    printf("Nhap 2 so nguyen bat ky (min max): ");
			    scanf("%d %d", &min, &max);
			    for(int i = min; i <= max; i++){
			    sum += i;
			    }
			    printf("Tong cac so %d den %d la: %d\n", min, max, sum);
				}
				break;
			}
			case 3:{
				printf("Xac dinh hoc luc\n");
				 float diemTB;
			    printf("Nhap diem trung binh (thang diem 10): ");
			    scanf("%f",&diemTB);
			    if (diemTB >= 8){
			        printf("Hoc luc: Gioi\n");
			    } else if (diemTB >= 6) {
			        printf("Hoc luc: Kha\n");
			    } else {
			        printf("Hoc luc: Trung binh\n");
			    }
				break;
			}
			case 4:{
				printf("Thoat\n");
				break;
			}
			default:{
				printf("Lua chon khong hop le\n")
				break;
			}
		}
	}while (1);
	return 0;
}
