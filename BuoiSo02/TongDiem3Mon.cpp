#include<stdio.h>
int main(){
	float MonToan;
	float MonVan;
	float MonAnh;
	printf ("--Nhap diem 3 mon Toan Van Anh\n");
	printf ("- Mon Toan: ");
	scanf ("%f",&MonToan);
	printf ("- Mon Van: ");
	scanf ("%f",&MonVan);
	printf ("- Mon Anh: ");
	scanf ("%f",&MonAnh);
	
	float TongDiem3Mon = MonToan+MonVan+MonAnh;
	printf("--IN THONG TIN RA MAN HINH--\n");
	printf("Mon Toan = %.1f\n",MonToan);
	printf("Mon Van = %.1f\n",MonVan);
	printf("Mon Anh = %.1f\n",MonAnh);
	printf("Tong diem 3 mon = %.1f",TongDiem3Mon);
	
	return 0;
}
