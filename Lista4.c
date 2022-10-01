#include <stdio.h>
//#include <math.h>

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

int decrescente(int n){      //Não está funcionando
    if(n>0){
        printf("%d\n", n);
        return (decrescente(n-1));
    }
    return 0;
}

int res(int a, int b){
    return (a%b);
}

int form(int n){
    if(n>0) return(n*n + form(n-1));
    return 0;
}

int mmc(int a, int b){
    return ((a*b) / mdc(a, b));
}

int div(int a, int b){
    return (a/b);
}

float qrd(float x, float chute ){
    if (chute*chute >=-0.001 && chute*chute <= x+0.001) return (chute);
    if (chute*chute > x) return (qrd(x, chute*0.5));
    if (chute*chute < x) return (qrd(x, chute*1.5));
}

int dig(int n){
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



    return 0;
}

