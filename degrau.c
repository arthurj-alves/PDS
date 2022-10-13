#include <stdio.h>
// a
void degrau(int x);

int main()
{
    int x;
    printf("Quantos degraus tem a sua escada? ");
    scanf("%i", &x);
    degrau(x);
}

void degrau(int x)
{
    if (x <= 0)
    {
        return;
    }

    degrau(x - 1);

    for (int i = 0; i < x; i++)
    {
        printf("#");
    }
    printf("\n");
}
