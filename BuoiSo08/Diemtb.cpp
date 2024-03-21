//Nhap diem tb vao tu ban phim(Diem theo thang diem 10).
#include<stdio.h>
int main(){
	float diemtb;
	do{
		
		printf("Nhap diem Tb: ");
		scanf("%f",&diemtb);
		if(diemtb>0&&diemtb<=10){
			printf("Diem tb: %.2f\n",diemtb);
		}else{
			printf("Diem ko hop le\n");
		}}
		while(diemtb>=10||diemtb<0);
	
	return 0;
}
