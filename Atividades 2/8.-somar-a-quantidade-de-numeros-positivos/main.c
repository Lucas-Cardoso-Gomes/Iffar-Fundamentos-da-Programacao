#include <stdio.h>

int main()
{
    int a[666666],b=1,infinito=1,soma;

    printf("Digite quantos numeros positivos para somar, caso deseja parar, informe um numero negativo!\n");
    
    while(infinito<2)
    {
        printf("Digite o numero %d: ",b);
        scanf("%d",&a[b++]);
        
        if(a[b-1]<0)
        {
            b--;
            break;
        }
        
    }
    
    while(b>infinito)
    {
        b--;
        soma=soma+a[b];
    }
    printf("A soma dos numeros foram: %d", soma);

    return 0;
}

