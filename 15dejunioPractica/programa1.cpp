#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("ingrese 3 digitos enteros\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a > c) {
		if (a > b) {
			printf("el mayor valor es %d\n", a);
		}
		else printf("el mayor valor es %d", b);
	}
	else printf("el mayor valor es %d", c);

	return 0;
}