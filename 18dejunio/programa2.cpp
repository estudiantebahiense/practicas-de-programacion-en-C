#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int i;
	int vec[6] = { 4,2,343,0,-1,78 };

	for (i = 5;i >= 0; i--) {
		printf("vec[%d]= %d\n", i, vec[i]);
	}




	return 0;
}