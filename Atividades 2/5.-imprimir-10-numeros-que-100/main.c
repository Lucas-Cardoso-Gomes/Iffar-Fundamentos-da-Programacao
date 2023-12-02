#include <stdio.h>

int main()
{
    int a,b=1,c,d[9],f;
    printf("Digite numeros até que sejam informados 10 numeros maiores que 100!\n");
    while(c<=9)
    {
        printf("Numero %d:",b);
        scanf("%d",&a);
        b++;
        
        if(a>100)
        {
        d[c]=a;
        c++;
        }
    }
    
    printf("Temos %d numeros maiores que 100!\n", c);
    
    b=1;
    while(c>0)
    {
        printf("Os 10 numeros maiores de 100 são:\n");
        printf("\tNumero %d: %d\n",b++,d[f++]);
        c--;
    }
    
    return 0;
}

