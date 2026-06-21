#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int matriz[4][3];
	int i, j,max;

	srand((unsigned int)time(NULL));

	for (i = 0;i < 4;i++) {
		for (j = 0;j < 3;j++) {
			printf("imgrese un valor de la matriz:\n");
			scanf("%d", &matriz[i][j]);
		}
		printf("\n");
	}
	for (i = 0;i < 4;i++) {
		for (j = 0;j < 3;j++) {
			printf("%4d ",matriz[i][j]);
		}
		printf("\n");
	}
	//encontrar el mayor valor de la matriz
	max = matriz[0][0];

	for (i = 0;i < 4;i++) {
		for (j = 0;j < 3;j++) {
			if (max < matriz[i][j]) {
				max = matriz[i][j];
			}
		}
		printf("\n");
	}
	printf("el valor mas alto de la matriz es : %d", max);


	return 0;
}

