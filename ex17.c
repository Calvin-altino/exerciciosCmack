#include <stdio.h>

int simetria(int n, int matriz[][n]) {
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            if (matriz[x][y] != matriz[y][x]) {
                return 0; 
            }else{
                return 1; 
            }
        }
    }
}

int main() {
    // Exemplo de matriz simétrica
    int matriz[][3] = {
        {1, -3, 5},
        {-3, 2, -1},
        {5, -1, 6}
    };
    simetria(3, matriz);

    return 0;
}
