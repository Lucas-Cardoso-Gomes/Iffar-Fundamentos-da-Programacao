#include <stdio.h>

int main()
{
    int a[19],b=1,c=0;
    printf("Digite 20 numeros quaisquer:\n");
    while(b<6)
    {
        printf("Numero %d:",b);
        scanf("%d",&a[b++]);
        if(a[b-1]<0)
        {
        c++;
        }
    }
    
    printf("Temos %d numeros negativos ai no meio!", c);
    
    return 0;
}
