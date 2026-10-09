#include <stdio.h>
int main()
{
	int Day_lon;
	int Day_be;
	int Chieu_cao;
	float Chu_vi;
	
	float Dt_Hinhtron;
	float Dt_Hinhthang;
	const float PI=3.14;
	//khai bao bien
	
	printf("Nhap vao day lon: ");
	scanf("%d",&Day_lon);
	
	printf("Nhap vao day be: ");
	scanf("%d",&Day_be);
	
	printf("Nhap vao chieu cao: ");
	scanf("%d",&Chieu_cao);
	printf("Nhap vao chu vi: ");
	scanf("%f",&Chu_vi);
    Dt_Hinhtron=Chu_vi*Chu_vi/4*PI;
	Dt_Hinhthang=(Day_lon+Day_be)*Chieu_cao/2;
	
	printf("%.1f",Dt_Hinhthang-Dt_Hinhtron);

	return 0;
	
	}
	
