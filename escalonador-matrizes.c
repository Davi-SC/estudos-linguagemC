#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int linha = 5;
int coluna = 6;

void imprimirmatriz(float matriz[linha][coluna])
{

    int i, j;

    for (i = 0; i < linha; i++)
    {

        for (j = 0; j < coluna; j++)
        {
            printf("%.3f	", matriz[i][j]);
        }

        printf("\n");
    }
    printf("\n");
}

void gauss(float matriz[linha][coluna])
{

    int i, j, k;
    float multiplo;

    for (i = 0; i < linha - 1; i++)
    {

        for (j = i + 1; j < linha; j++)
        {
            multiplo = matriz[j][i] / matriz[i][i];

            for (k = 0; k < coluna; k++)
            {
                matriz[j][k] -= multiplo * matriz[i][k];
            }
        }
    }
}

void main()
{

    float matriz[5][6] = {
        {1, 2, 3, 4, 5, 6},
        {6, 5, 4, 2, 3, 1},
        {3, 1, 5, 2, 4, 6},
        {2, 3, 6, 5, 1, 4},
        {4, 6, 1, 2, 3, 5}};

    

    printf("Matriz Original: \n");
    imprimirmatriz(matriz);

    gauss(matriz);
    printf("Matriz Escalonada: \n");
    imprimirmatriz(matriz);
}
