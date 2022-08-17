#include <stdio.h>
#include <stdlib.h>

// Depure a função Fatorial e Fatorial com cauda.

int fatorial(int n);
int fatorial_aux(int n, int aux);
int fatorial_cauda(int n);

int main(){
    int n, resultado;
    printf("Digitar um elemento: \n");
    scanf("%d", &n);

    resultado = fatorial(n);

    printf("O fatorial de [%d]! = %d\n", n, resultado);

    return 0;
}

int fatorial(int n){
    if (n == 1){
        return n;
    }
    else{
        return n * (fatorial(n -1));
    }
    
}

int fatorial_aux (int n, int aux){
    if (n ==1){
        return aux;
    }
    else{
        return fatorial_aux((n -1),(aux * n));
    }
    
}

int fatorial_cauda(int n){
    return fatorial_aux(n, 1);

}
