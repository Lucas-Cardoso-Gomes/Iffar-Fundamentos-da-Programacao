#include <stdio.h>
#include <math.h>

int main()
{
    int a,b=15;
    while(b<200)
    {
        a=b;
        a=(pow(a,2));
        printf("%d\n",a);
        b++;
    }

    return 0;
}
