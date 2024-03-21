//Nhap vao tu ban phim 1 so >5
#include<stdio.h>
int main(){
	int n;
	do{
		printf("Nhap n: ");
		scanf("%d",&n);
		if(n<=5){
			printf("Nhap sai, moi nhap lai(so > 5).\n");
		}else{
			printf("Nhap DL thanh cong.\n");
		}
	} while(n>5);
	
	return 0; 
}
