#include <stdio.h>

int main()
{
    int matriz[4][4] = {
        {1, 0, 0, 0},
        {0, 0, 0, 1},
        {0, 0, 1, 0},
        {0, 1, 0, 0}
    };

    for (int x = 0; x < 4; x++)
    {
        int cont = 0;
        for (int y = 0; y < 4; y++)
        {
            if (matriz[x][y] == 1)
            {
                cont++;
            }
        }

        if (cont != 1)
        {
            printf("Não é matriz de permutação! \n");
            return 0;
        }
    }

    for (int x = 0; x < 4; x++)
    {
        int count1 = 0;
        for (int y = 0; y < 4; y++)
        {
            if (matriz[x][y] == 1)
            {
                count1++;
            }
        }
        if (count1 != 1)
        {
            printf("Não é matriz de permutação! \n");
            return 0;
        }
    }

    printf("É matriz de permutação!\n");

    printf("\n");
    return 0;
}
