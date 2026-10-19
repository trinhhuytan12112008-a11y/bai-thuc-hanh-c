#include <stdio.h>
int main()
{
	int i;

	for(i = 2; i <= 10 ; i++){
		printf("\n");
		for (int j = 1; j <= 10 ;j++){
			printf("\n%d x %d = %d",i,j,i*j);
		}

	}
	return 0;
	
}