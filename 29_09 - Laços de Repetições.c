#include <stdio.h>

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
            m=1 
        }
        i++
    }while ((i <= a) && (i <= b))
    return (m);
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

int main (){


    return 0;
}