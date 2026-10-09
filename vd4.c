#include <stdio.h>
int main()
{
	int so_luong;
	float don_gia;
	float chiphi_vanchuyen;
	float doanh_thu;
	printf("Nhap so_luong: ");
	scanf("%d",&so_luong);
	printf("Nhap don_gia: ");
	scanf("%f",&don_gia);
	printf("Nhap chiphi_vanchuyen: ");
	scanf("%f",&chiphi_vanchuyen);
	doanh_thu=so_luong*don_gia-chiphi_vanchuyen;
	printf("doanh_thutrongngay: %f",doanh_thu);
	return doanh_thu;
	
}

