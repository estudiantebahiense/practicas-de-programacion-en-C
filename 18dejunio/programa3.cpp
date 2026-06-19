#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {

	int i,j;
	int vec[10] = { 34,6,78,-43,90,101,-5,-123,98,77 };

	for (i = 0,j=9;i < 9,j>=0;i++,j--) {
		printf("vec[%d]=%d  vec[%d]=%d\n", i, vec[i],j,vec[j]);
	}
	return 0;
}