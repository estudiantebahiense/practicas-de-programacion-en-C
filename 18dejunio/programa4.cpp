#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int i=0;
int audio[50];
int max = audio[0];

int main(void) {

	srand((unsigned int)time(NULL)); 
	for (i = 0;i < 50;i++) {
		audio[i] = (rand() % 100) + 1;

	}
	for (i = 0;i < 50;i++) {
		printf("%d\n", audio[i]);

	}
	max = audio[0];
	
	for (i = 0; i < 50;i++) {
		if (audio[i] > max) {
			max = audio[i];
		}
	}
	printf("el valor maximo del vector audio es %d  y se encuentra en la posicion %d\n", max,i);


	return 0;
}
