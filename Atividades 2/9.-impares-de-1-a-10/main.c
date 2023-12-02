#include <stdio.h>

int main() {
    
    int imp;

    printf("Números ímpares de 1 a 10:\n");

    while ( imp <= 10)
    {
        if (imp % 2 != 0)
        {
            printf("%d\n", imp);
        }
        imp++;
    }

    return 0;
}
