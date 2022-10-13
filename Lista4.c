#include <stdio.h>
//#include <math.h>
// a
int fat(int n){
    if (n == 0) return 1;
    else return (n*fat(n-1));
}

int mdc(int a, int b){
    if (b == 0) return a;   
    return mdc(b, a % b);
}

int mdc3(int a, int b, int c){
    return (mdc(a, mdc(b, c)));
}

int fib(int n){
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int primo (int x, int n){
    if (n==1) return (1);
    if (x%n==0) return(0);
    return (primo(x, n-1)); 
}

<<<<<<< HEAD
int decrescente(int n){      //Não está funcionando
=======
int decrescente(int n){
>>>>>>> 6e0bfa0 (atualização de arquivos)
    if(n>0){
        printf("%d\n", n);
        return (decrescente(n-1));
    }
    return 0;
}

<<<<<<< HEAD
int res(int a, int b){
    return (a%b);
=======
int res(int a, int b, int aux){
    if((a - b) > 0) return (a);
    else return (a-b, b);
>>>>>>> 6e0bfa0 (atualização de arquivos)
}

int form(int n){
    if(n>0) return(n*n + form(n-1));
    return 0;
}

int mmc(int a, int b){
    return ((a*b) / mdc(a, b));
}

<<<<<<< HEAD
int div(int a, int b){
    return (a/b);
}

float qrd(float x, float chute ){
=======
int div(int a, int b, int aux){
    if(a-b < 0) return (a, b, ++aux);
    else return (aux);
}

float qrd(float x, float chute){
>>>>>>> 6e0bfa0 (atualização de arquivos)
    if (chute*chute >=-0.001 && chute*chute <= x+0.001) return (chute);
    if (chute*chute > x) return (qrd(x, chute*0.5));
    if (chute*chute < x) return (qrd(x, chute*1.5));
}

int dig(int n){
<<<<<<< HEAD
    int unid, dez, cent;
    cent = n / 100;
    dez = (n - (cent*100)) / 10;
    unid = (n - (cent*100) - (dez*10)); 
    return (cent + dez + unid);
}

int main(){
    //printf("%d", primo(13, 12));
    for (int i; i < 10 ; i--){
        if (primo(i, --i) == 1) printf("%d", i);
    }


=======
/*  int unid, dez, cent;
    cent = n / 100;
    dez = (n - (cent*100)) / 10;
    unid = (n - (cent*100) - (dez*10)); 
    return (cent + dez + unid); */
    if(n%10==n)return(n);
	return(n%10+dig(n/10));
}

int expp(int k, int n){
    if(n > 0) return(expp(k*k, --n));
    else return 0;

}

int crescente(int x){
    if(x==0) return 0;  
	else
	{
	crescente(x-1);
	printf("%d\n",x);
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
    printf("= %d", primo(a, a/2));
//1.f) Decrescente
    printf("Numeros Decrescente a partir: (1 valor)\n");
    scanf("%d", &a);
    printf("= %d", decrescente(a));
//1.g) Resto
    printf("Resto de x por y: (2 valores)\n");
    scanf("%d %d", &a, &b);
    printf("= %d", res(a, b, 0));
//1.h) Form
    printf("Form  de: (1 valor)\n");
    scanf("%d", &a);
    printf("= %d", form(a));
//1.i) MMC
    printf("MMC de: (2 valores)\n");
    scanf("%d %d", &a, &b);
    printf("= %d", mdc(a, b));
//1.j) Divisão
    printf("Quadrado de: (2 valores)\n");
    scanf("%d %d", &a, &b);
    printf("= %d", mdc(a, b));
//1.l) Quadrado
    printf("MDC de: (2 valores)\n");
    scanf("%d %d", &a, &b);
    printf("= %d", mdc(a, b));
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
>>>>>>> 6e0bfa0 (atualização de arquivos)

    return 0;
}
