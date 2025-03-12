#include <stdio.h>

int concatenar(int n1, int n2, int v1[], int v2[]){
    int novo[n1+n2];
    for(int x = 0; x < n1; x++){
        novo[x] = v1[x];
    }
    for(int y = 0; y < n2; y++){
        novo[n1+y] = v2[y];
    }

    int cont = 0;
    printf("novo vetor: [ ");
    while (cont < n1+n2){
        printf("%d ", novo[cont]);
        cont++;
    }
    printf("] \n");
}

int main(){
    int v1[] = {4,1,3,2};
    int v2[] = {10,8};
    concatenar(4,2, v1, v2);
    return 0;
}