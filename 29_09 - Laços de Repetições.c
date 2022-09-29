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

int main (){


    return 0;
}