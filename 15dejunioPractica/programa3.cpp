#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int dado,i,cuatro=0, veces;


	srand(time(NULL));
	printf("cuants veces quiere tirar el dado: \n");
	scanf("%d", &veces);

	for (i = 1;i <= veces; i++) {
		dado = rand() % 6 + 1;
		
		if (dado == 4) {
			cuatro = cuatro + 1;
		}

		printf("el numero que salio en el dado es : %d\n", dado);
		printf("el numero cuatro salio %d veces", cuatro);

	}

	





	return 0;
}