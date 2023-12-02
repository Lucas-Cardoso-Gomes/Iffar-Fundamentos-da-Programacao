#include <stdio.h>

int main() {
    
    int num=100;

    printf("Números ímpares de 100 a 200:\n");

    while ( num <= 200)
    {
        printf("%d\n", num);
        num=num+10;
    }

    return 0;
}
