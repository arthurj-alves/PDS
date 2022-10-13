#include <stdio.h>
// a
// 1a)max(a,b,c): Retorna o maior dentre três numeros.
int max(int a, int b, int c)
{
    if (a > b && a > c)
        return (a);
    else if (b > c)
        return (b);
    else
        return (c);
}
// 1b)min(a,b,c): Retorna o menor dentre três numeros.
int min(int a, int b, int c)
{
    if (a < b && a < c)
        return (a);
    else if (b < c)
        return (b);
    else
        return (c);
}
// 2a)par(x): testa se um numero eh par.
int par(int x)
{
    if (x % 2 == 0)
        printf("Esse numero eh par\n");
    else
        printf("Esse numero eh impar\n");
    return 0;
}
// 2b)dentro(x,y,z): testa se o numero x esta dentro do intervalo [y z].
int dentro(float x, float y, float z)
{
    return (x >= y && x <= z);
}
// 2c)fora(x,y,z): testa se o numero x esta fora do intervalo [y z].
int fora(float x, float y, float z)
{
    return (!dentro(x, y, z));
}
/* 3- Defina o predicado bissexto(ano) que testa se um ano eh bissexto. Considere que
bissexto eh aquele ano que eh divisível por 400 ou eh divisível por 4 e, nesse caso, nao eh
divisível por 100. */
int bissexto(int ano)
{
    if (ano % 4 == 0)
    {
        if (ano % 100 == 0)
        {
            if (ano % 400 == 0)
            {
                printf("Ano Bissexto");
            }
            else
            {
                printf("Ano nao Bissexto");
            }
        }
        else
        {
            printf("Ano Bissexto");
        }
    }
    else
    {
        printf("Ano nao Bissexto");
    }
}
// Função principal
int main()
{
    // 1a)
    int num1, num2, num3;
    printf("Questao 1a)Digite 3 numeros\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("O maior numero eh:%d\n", max(num1, num2, num3));

    // 1b)
    printf("Questao 1b)Digite 3 numeros\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("O menor numero eh:%d\n", min(num1, num2, num3));

    // 2a)
    int digito;
    printf("Questao 2a)Digite 1 numero\n");
    scanf("%d", &digito);
    par(digito);

    // 2b)
    int x, y, z;
    printf("Questao 2b)Digite 3 numeros\n");
    scanf("%d %d %d", &x, &y, &z);
    if (dentro(x, y, z) == 1)
        printf("%d esta dentro de %d e %d\n", x, y, z);
    else
        printf("%d nao esta dentro de %d e %d\n", x, y, z);

    // 2c)
    printf("Questao 2c)Digite 3 numeros\n");
    scanf("%d %d %d", &x, &y, &z);
    if (fora(x, y, z) == 1)
        printf("%d esta fora de %d e %d\n", x, y, z);
    else
        printf("%d nao esta fora de %d e %d\n", x, y, z);

    // 3-
    int ano;
    printf("Questao 3-Digite algum ano\n");
    scanf("%d", &ano);
    bissexto(ano);

    return 0;
}

