#include <stdio.h>
int main ()
{
	int a;
	float c;
	char ch;
	char hoten[30];
	scanf("%d",&a);
	scanf("%f",&c);
	fflush(stdin);
	scanf("%c",&ch);
	fflush(stdin);
	gets(hoten);
	printf("%d\t%1f\t%c\t%s",a,c,ch,hoten);
	return 0;
	
	
	
	
	
	
	
}
