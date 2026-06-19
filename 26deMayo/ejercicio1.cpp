
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	
	int n=10, m=10;
	int A[10][10];
	int i, j,k=0;

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			A[i][j] = k;
				 k=k+1;
		}
		printf("\n");
	}
	for (i = 0;i < n;i++) {
		for (j = 0;j < m;j++) {
			printf("  %2d  ", A[i][j]); //con el %2d esto reserva 2 lugares para que celda
		}
		printf("\n");
	}

	return 0 ;
}