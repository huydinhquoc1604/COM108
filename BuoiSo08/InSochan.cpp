//Nhap vao 1 so n bat ky. In ra cac so chan tu 2-n
#include<stdio.h>
int main(){
	int i=2;
	int n;
	printf("Nhap vao so n: ");
	scanf("%d",&n);
	while(i<n+1){
		if(i%2==0){
			printf("%d\t",i);
		}
		i++;
	}
	
	return 0;
}
