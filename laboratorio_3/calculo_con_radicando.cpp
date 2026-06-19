
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 
#include <math.h> 

int main(void)

{
        double a = 140, b = 4, c = 8, d = 7;

        double y;
        
        y = 1 / sqrt((a * b) / pow(c, d));

        printf("Resultado: %f\n", y);

        
    return 0;
}