#include <stdlib.h>
#include <stdio.h>


int main()
{
      int **matA, **matB, **matC, linhasA, colunasA, colunasB;

      printf("Digite o número de linhas da matriz A");

      scanf("%d",&linhasA);

      printf("Digite o número de colunas da matriz A");

      scanf("%d",&colunasA);

      printf("Digite o número de colunas da matriz B");

      scanf("%d",&colunasB);

      matA = (int **)malloc(sizeof(int)*linhasA);

      for (int i = 0; i < linhasA; i++)
          matA[i] = (int *)malloc(sizeof(int)*colunasA);

      matB = (int **)malloc(sizeof(int)*linhasA);

      for (int i = 0; i < linhasA; i++)
          matB[i] = (int *)malloc(sizeof(int)*colunasB);

      matC = (int **)malloc(sizeof(int)*linhasA);

      for (int i = 0; i < linhasA; i++)
          matC[i] = (int *)malloc(sizeof(int)*colunasB);

      printf("\n MATRIZ A:\n\n");
      leMatrizA(linhasA, colunasA, matA);
      printf("\n MATRIZ B:\n\n");
      leMatrizB(linhasA, colunasB, matB);
      printf("\n\nMULTIPLICACAO DAS MATRIZES:\n\n");
      multMatriz(linhasA,colunasA,colunasB,matA,matB,matC);
      system("pause");
}

int leMatrizA(int linhasA, int colunasA, int **mat)
{
    for (int i = 0; i < linhasA; i++)
    {
        for (int j = 0; j < colunasA; j++)
        {
            printf("\nDigite a posicao [%d][%d] da matriz: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
}

int leMatrizB(int linhasA, int colunasB, int **mat)
{
    for (int i = 0; i < linhasA; i++)
    {
        for (int j = 0; j < colunasB; j++)
        {
            printf("\nDigite a posicao [%d][%d] da matriz: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
}


int multMatriz(int linhasA, int colunasA,int colunasB, int **matA, int **matB, int **matC)
{
      for (int i = 0; i < linhasA; i++)
      {
          for (int j = 0; j < colunasB; j++)
          {
              matC[i][j] = 0;
              for (int k = 0; k < linhasA; k++)
                  matC[i][j] += matA[i][k] * matB[k][j];
              printf("%d\t", matC[i][j]);
          }
          printf("\n");
      }
}
