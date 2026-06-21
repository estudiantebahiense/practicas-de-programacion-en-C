#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	int i, j;
	int a[10][10];

	srand((unsigned int)time(NULL));
	for (i = 0;i < 10;i++) {
		for (j = 0;j < 10;j++) {
			a[i][j]=(rand()%101)-50;
		}
	}
	for (i = 0;i < 10;i++) {
		for (j = 0;j < 10;j++) {
			printf("|%6d  |",a[i][j]);
			
		}
		printf("\n");
		for (j = 0;j < 10;j++)
			printf("__________");
		printf("\n");
		
	}
	
	return 0;
}

