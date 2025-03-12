#include <stdio.h>

int diagPrin(int x, int m[][x]) {
    int soma = 0;
    for (int i = 0; i < x; i++) {
        soma += m[i][i];
    }
    return soma;
}

int diagSec(int x, int m[][x]) {
    int soma = 0;
    for (int i = 0; i < x; i++) {
        soma += m[i][x-1-i];
    }
    return soma;
}

int main(){
    int matriz[4][4] = {
        {9, 3, 2, 1},
        {1, 3, 5, 1},
        {7, 3, 8, 4},
        {4, 1, 9, 3}
    };

    printf("%d \n", diagPrin(4, matriz));
    printf("%d \n", diagSec(4, matriz));
    return 0;
}