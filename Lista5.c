#include <stdio.h>
// a
int fat (int n){
    int f = 1; 
    for (int i = 1; i <= n; i++){
        f = f * i;
    }
    return (f); 
}

int mdc (int a, int b){
    int m = 1; //armazena o valor
    int i = 1; //verifica os valores
    do{ 
        if ((a % i == 0) && (b % i )){
            m=1;
        }
        i++;
    }while ((i <= a) && (i <= b));
    return (m);
}

int mdc3(int a, int b, int c){
    return (mdc(a, mdc(b, c)));
}

int fib(int x) {
    int num1 =1 ,num2 =1, aux;
    if(x == 1 || x == 2) return 1;
    for(int i=1; i< x -1; i++) {
        aux = num1 + num2;
        num1 = num2;
        num2 = aux;
    }
    return aux;
}

int primo(int n){
    /*int i = 2; 
    while (i < n){
        if (n % i == 0)
            return 0;
    i++
    } */

    if (n <= 1) return 0; 
    for (int i = 2; i < n; i++){
        if (n % i == 0) return 0; 
    }
    return 1; 
}

int decrescente (int n){
    for (int i = n; i > 0; i--){
        printf("%d\n", i);
    }
}

int res(int a, int b){
    int aux, aux2;
    for (int i = 0; ; i++){
        aux = a;
        a = a - b;
        b = aux;
        if (a-b>0) return 0;
        ++aux2;
    }
}

int form(int n){
    int aux = 0;
    for(int i = n; i > 0; --i){
        aux = aux + i*i;
    }
    return (aux);
}

int mmc(int a, int b){
    return ((a*b) / mdc(a, b));
}

int div(int a, int b){
    int aux = 0; 
    for(int i; ;i++){
        if(a - b > 0){
            aux++;
            a -= b;
        }else break;
    }
    return (aux);
}

int qrd(int n){
    int cont = 1,raiz = 1;
        while(raiz <= n)
        {
            cont++;
            raiz = cont*cont;
        }
        return (cont - 1);

}

int dig(int n){
    int unid, dez, cent;
    cent = n / 100;
    dez = (n - (cent*100)) / 10;
    unid = (n - (cent*100) - (dez*10)); 
    return (cent + dez + unid);
}

int expp(int n, int k){
    int aux;
    for(int i = k; i > 0; i--){
        aux= aux * aux;
    }
    return (aux);
}

int crescente(int n){
    for(int i = 0; i<=n; i++){
        printf("%d", i);
    }
}

int main(){
    int a, b, c;
//1.a)Fatorial
    printf("Fatorial de: (1 valor)\n");
    scanf("%d", &a);
    printf("= %d", fat(a));
//1.b)MDC
    printf("MDC de: (2 valores)\n");
    scanf("%d %d", &a, &b);
    printf("= %d", mdc(a, b));
//1.c) MDC3
    printf("MDC3 de: (3 valores)\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("= %d", mdc3(a, b, c));
//1.d) Fibonachi
    printf("O enésimo Fibonachi eh: (1 valor)\n");
    scanf("%d", &a);
    printf("= %d", fib(a));
//1.e) Primo
    printf("Os Primos até: (1 valor)\n");
    scanf("%d", &a);
    printf("= %d", primo(a));
//1.f) Decrescente
    printf("Numeros Decrescente a partir: (1 valor)\n");
    scanf("%d", &a);
    printf("= %d", decrescente(a));
//1.g) Resto
    printf("Resto de x por y: (2 valores)\n");
    scanf("%d %d", &a, &b);
    printf("= %d", res(a, b));
//1.h) Form
    printf("Form  de: (1 valor)\n");
    scanf("%d", &a);
    printf("= %d", form(a));
//1.i) MMC
    printf("MMC de: (2 valores)\n");
    scanf("%d %d", &a, &b);
    printf("= %d", mmc(a, b));
//1.j) Divisão
    printf("Divisao de: (2 valores)\n");
    scanf("%d %d", &a, &b);
    printf("= %d", div(a, b));
//1.l) Quadrado
    printf("Raiz de: (1 valor)\n");
    scanf("%d %d", &a, &b);
    printf("= %d", qrd(a));
//1.m) Soma dos algarismos
    printf("Form  de: (1 valores)\n");
    scanf("%d", &a);
    printf("= %d", dig(a));
//1.n) Exponencial
    printf("Expenencial de por: (2 valores)\n");
    scanf("%d %d", &a, &b);
    printf("= %d", expp(a, b));
//1.o) Crescente
    printf("Numeros Decrescente até: (1 valor)\n");
    scanf("%d", &a);
    decrescente(a);

    return 0;
}
