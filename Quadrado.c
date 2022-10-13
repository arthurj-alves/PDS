#include <stdio.h>
#include <math.h>

int quadrado(int n){
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

int quadradoRec(int n, int aux){
    if (n == 0)
        return 0;
    for (int i = 0; i <= aux; i++)
    {
        printf("* ");
    }
    printf("\n");
    return (quadradoRec(n - 1, aux));
}

int main(){


    int n;
    scanf("%d", &n);
    quadradoRec(n, n);

    return 0;
}