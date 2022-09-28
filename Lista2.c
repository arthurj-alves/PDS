#include <stdio.h>
#include <math.h>

void quebraLinha();

// a) Média: calcula a média de a, b e c.
float media(float a, float b, float c)
{
    return ((a + b + c) / 3);
}

// b) Média ponderada: calcula a média ponderada de a, b e c onde a tem peso 3, b 4 e c 5.
float mediaPonderada(float a, float b, float c)
{
    return ((3 * a + 4 * b + 5 * c) / 12);
}

// c) Perímetro: calcula o perímetro de um círculo de raio r.
float perimetro(float raio1)
{
    return (6.283 * raio1);
}

// d) Área do círculo: calcula a área de um círculo de raio r.
float areaCirculo(float raio2)
{
    return (3.14 * (raio2 * raio2));
}

// e) Área do triângulo: calcula a área de um triângulo de base b e altura c.
float areaTriangulo(float base, float altura)
{
    return ((base * altura) / 2);
}

// f) Área da caixa: calcula a área de uma caixa de dimensões a, b e c.
float areaCaixa(float com, float lar, float alt)
{
    return (2 * (com * lar) + 2 * (lar * alt) + 2 * (com * alt));
}

// g) Volume da caixa: calcula o volume de uma caixa de dimensões a, b e c.
float volumeCaixa(float com, float lar, float alt)
{
    return (com * lar * alt);
}

// h) Área do cilindro: calcula a área de um cilindro de raio r e altura h.
float areaCilindro(float raio, float h)
{
    return ((perimetro(raio) * h) + (2 * areaCirculo(raio)));
}

// i) Volume do cilindro: calcula o volume de um cilindro de raio r e altura h.
float volumeCilindro(float raio, float h)
{
    return (areaCirculo(raio) * h);
}

// j) Hipotenusa: calcula a hipotenusa de um triângulo retângulo com lados b e c.
float hipotenusa(float b, float c)
{
    return ((int)sqrt((b * b) + (c * c)));
}

// k) Raiz positiva: calcula a raiz positiva da equação do segundo grau definida por a.x²+b.x+c.
int raizPositiva(float a, float b, float c)
{
    int delta = (b * b) - 4 * a * c;
    int sqrtdelta = sqrt(delta);
    int raiz1, raiz2;
    raiz1 = (-b + sqrtdelta) / (2 * a);
    raiz2 = (-b - sqrtdelta) / (2 * a);
    if (delta >= 0)
    {
        if (raiz1 > 0 && raiz2 > 0)
        {
            printf("%d e %d", raiz1, raiz2);
        }
        else if (raiz1 > 0)
        {
            printf("%d", raiz1);
        }
        else if (raiz2 > 0)
        {
            printf("%d", raiz2);
        }
    }
    else
    {
        printf("Equaçao de segundo grau com raizes complexas");
    }
    return (0);
}

int main()
{
    float num1, num2, num3;
    scanf("%.2f %.2f  %.2f", &num1, &num2, &num3);
    printf("Media: %.2f", media(num1, num2, num3));

    quebraLinha();
    float num4, num5, num6;
    scanf("%.2f %.2f  %.2f", &num4, &num5, &num6);
    printf("Media Ponderada: %.2f", mediaPonderada(num4, num5, num6));

    quebraLinha();
    float num7;
    scanf("%.2f", &num7);
    printf("Perimentro: %.2f", perimetro(num7));

    quebraLinha();
    float num8;
    scanf("%.2f", &num8);
    printf("Area do Circulo: %.2f", areaCirculo(num7));

    quebraLinha();
    float num9, num10;
    scanf("%.2f %.2f", &num9, &num10);
    printf("Area do Triangulo: %.2f", areaTriangulo(num9, num10));

    quebraLinha();
    float num11, num12, num13;
    scanf("%.2f %.2f  %.2f", &num11, &num12, &num13);
    printf("Area da Caixa: %.2f", areaCaixa(num11, num12, num13));

    quebraLinha();
    float num14, num15, num16;
    scanf("%.2f %.2f  %.2f", &num14, &num15, &num16);
    printf("Volume da Caixa: %.2f", volumeCaixa(num14, num15, num16));

    quebraLinha();
    float num17, num18;
    scanf("%.2f %.2f", &num17, &num18);
    printf("Area do Cilindro: %.2f", areaCilindro(num17, num18));

    quebraLinha();
    float num19, num20;
    scanf("%.2f", &num19, &num20);
    printf("Volume do Cilindro: %.2f", volumeCilindro(num19, num20));

    quebraLinha();
    float num21, num22;
    scanf("%.2f %.2f", &num21, &num22);
    printf("Hipotenusa: %.2f", hipotenusa(num21, num22));

    quebraLinha();
    float num23, num24, num25;
    scanf("%.2f %.2f %.2f", &num23, &num24, &num25);
    raizPositiva(num23, num24, num25);
}

void quebraLinha()
{
    printf("\n\n");
}