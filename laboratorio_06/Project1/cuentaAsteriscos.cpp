

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
    int vector[10] = { 3,4,8,1,4,1,5,3,2,9 };
    int i, j;

    i = 0;

    while (i < 10)

    {
        printf("%d", vector[i]);

        j = 0;
        
        while (j < vector[i])
        {
            printf("*");
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;

    
}