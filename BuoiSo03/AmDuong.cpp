#include<stdio.h>
int main(){
	//Khai bao
	int a = 6;
	int b = 4;
	int c = -3;
	//Cac phep logic
	printf("a duong va b duong: %d\n",(a>0)&&(b>0));
	printf("a duong va c duong: %d\n",(a>0)&&(c>0));
	
	printf("a am hoac b am: %d\n",(a>0)&&(b>0));
	printf("a am hoac b am:  %d\n\n",(a<0)||(c<0));
	
	return 0;
}
/*Mo ta
1. &&: phep va
<b.thuc ss1>&&<b.thuc ss2>
=> Cho ket qua dung khi <b.thuc ss1> va <b.thuc ss2> cung sai
*/
