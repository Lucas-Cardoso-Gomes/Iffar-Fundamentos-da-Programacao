#include <stdio.h>

int main()
{
    int a[666666],b=1,infinito=1;

    printf("Digite quantos numeros quiser, caso deseja parar, informe um numero negativo!\n");
    
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
        printf("Os numeros digitados foram: %d\n", a[b]);
    }

    return 0;
}
