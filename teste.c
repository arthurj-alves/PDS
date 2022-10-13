#include <stdio.h>
#include <math.h>

<<<<<<< HEAD
int main(){
    int x = 4;
    printf("%d", (int)sqrt(x));
    printf("\n\n%d", pow(3, 2));

=======

int res(int a, int b){
    /* if((a - b) > 0) return (res(a, a-b, ++aux));
    else return (aux); */
    if((a - b) > 0) return (a);
    else return (a-b, b);
}

int main(){

    int a; 
    printf("%d", res(7, 2));

    return 0; 
>>>>>>> 6e0bfa0 (atualização de arquivos)
}