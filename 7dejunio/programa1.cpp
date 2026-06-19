
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main (void) {

	int i,j,k;
for (i = 1;i <= 3; i++) 
{
	for (j = 1; j <= 3; j++) 
	{
		for (k = 1;k <= 3;k++) {
			printf("i: %d, j: %d, k: %d\n", i, j,k);

		}
		
	}
	printf("\n");
}



	return 0;
}