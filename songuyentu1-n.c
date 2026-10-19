#include <stdio.h>
int main()
{ 
	int n;
	int i;
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		if(i % 2 == 0){
			printf("%d ",i);
		}
		
	}
	
	printf("\n");
	for (i=0; i<=n; i++)
	{
		if (i % 2 != 0){
			printf("%d ",i);
		}			
	}
	return 0;
}