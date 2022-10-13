#include <stdio.h>

void draw(int n);

int main()
{
    int x;
    printf("Diga o tamanho\n");
    scanf("%i", &x);
    draw(x);
}

void draw(int n)
{
    for(int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            for(int j = 0; j < n; j++)
            {
                printf("#");
            }
            printf("\n");
        }
        if(i > 0 && i < n - 1)
        {
            for(int j = 0; j < n; j++)
            {
                if(j == 0)
                {
                    printf("#");
                }
                if(j > 0 && j < n - 1)
                {
                    printf(" ");
                }
                if(j == n - 1)
                {
                    printf("#");
                }
            }
            printf("\n");
        }
        if(i == n - 1)
        {
            for(int j = 0; j < n; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}