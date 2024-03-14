#include<stdio.h>
int main(){
	int a = 5;
	int b = 6;
	printf("Chia 2 so nguyen: %.1f\n",a/b);//Ko lam ntn
	
	float thuong = (float)a/(float)b; //Ep kieu: (Kieu DL)<tenbien>
	
	printf("Tich a/b = %.1f",thuong);
	
	return 0;
}
