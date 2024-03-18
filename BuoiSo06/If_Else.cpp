#include<stdio.h>
int main(){
	//Khai bao
	int number;
	
	//Nhap
	printf("Moi nhap so can KT: ");
	scanf("%d",&number);
	
	//Kiem tra va in ket qua
	if(number%2==0){
		printf("Day la so chan\n");
	}else{
		printf("Day la so le\n");
	}
	
	return 0;
}
/*Cau truc if...else
if(<b.thuc dk>){

