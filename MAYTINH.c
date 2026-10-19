#include <stdio.h>
int main(void)
{
	int a;
	int b;
	char c;
	scanf("%d %s %d",&a,&c,&b);

	switch(c)
	{
		case '+':
			printf("%d",a+b); break;
		case '-':
			printf("%d",a-b); break;
		case '*':
			printf("%d",a*b); break;
		case '/':
			printf("%f",(float)a/b); break;
						
			
	}
	return 0;
}