#include <stdio.h>
// a
int fazTriangulo(int n){
    int aux;
    for(int i=0; i < n; i++){
	aux = 0;
	do{
	printf("*");
	aux++;
	}while(aux<=i);
	printf("\n");
    }
    return 0;
}

int main(){
    
    fazTriangulo(4);
    return 0;
}
