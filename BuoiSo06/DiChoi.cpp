//Nhan tin cho ny. Neu ny tra loi 3 lan hoac con tien thi ngay mai di choi nguoc lai thi ko di choi
#include<stdio.h>
int main(){
	//Khai bao
	int SoLan;
	int SoTien;
	//Nhap
	printf("Nhap vao so lan Co rut tra loi: ");
	scanf("%d",&SoLan);
	printf("Nhap vao so tien co rut co: ");
	scanf("%d",&SoTien);
	
	//KT va in ra ket qua
	if(SoLan>3||SoTien>0){
		printf("Di choi voi co rut\n");
	}else{
		printf("Khong di choi duoc roi\n");
	}
	return 0;
}
