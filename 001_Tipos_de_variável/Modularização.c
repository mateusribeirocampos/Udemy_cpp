#include <stdio.h>
#include <stdlib.h>

int fat(int x)
{
    int i, f=1;
    for (i=x; i>1; i--){
        f = f*i;
    }
    return f;
}

int main()
{
    int n, k;
    float c;

    printf("Fonececa o valor de N: \n");
    scanf("%i", &n);
    printf("Fonececa o valor de K: \n");
    scanf("%i", &k);

    c=(float) fat(n)/(fat(k)*fat(n-k));
    printf("c(%i,%i) = %.2f", n, k, c);
    
}
