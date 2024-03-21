//Nhap n vao tu ban phim. In ra cac so tu 2-n
#include<stdio.h>
int main(){
	int i=2;
	int n;
	printf("Nhap vao so n: ");
	scanf("%d",&n);
	while(i<=n){
		printf("\n%d",i);
		i++;
	}
	return 0;
}
