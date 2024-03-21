//nhap vao 1 so n bat ky. In ra cac so chia het cho 4 tu 3 den n
#include<stdio.h>
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(int i = 3;i<=n;i++){
		if(i%4==0){
			printf("%d\n",i);
		}
	}
	return 0;
}
