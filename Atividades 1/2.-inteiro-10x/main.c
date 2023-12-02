#include <stdio.h>

int main()
{
    int a,i;
    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    while(i<=9)
    {
        printf("\t%d\n",a);
        i++;
    }
    return 0;
}
