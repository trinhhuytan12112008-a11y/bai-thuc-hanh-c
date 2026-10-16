#include <stdio.h>
int main()
{
	int Thang;
	scanf("%d",&Thang);
	switch(Thang)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
		printf("31_ngay"); break;
		case 4: case 6: case 9: case 11:
			printf("30_ngay"); break;
			default :
				printf("29_ngay");
				
	}
}
