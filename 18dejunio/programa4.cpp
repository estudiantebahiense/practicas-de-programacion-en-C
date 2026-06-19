#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

srand(time(NULL));

int i=0;
int audio[50]= (rand() % 100)+1;
int max = audio[0];

int main(void) {

	for (i = 0; i < 50;i++) {
		if (audio[i] > max) {
			max = audio[i];
		}
		printf("el valor maximo es audio[%d] con el valor audio[t]", max, audio[i]);
	}

	return 0;
}
