#include <stdio.h>
#include "function_tabuleiroox.c"

int main(int argc, char *argv[]) 
{
    char tabuleiro[3][3] = {0};
    int por_parametro = 0;

    if (argc > 1) 
    {
        int resultado = processar(argc, argv, tabuleiro);
        if (resultado == -1) 
        {
            printf("Caractere inválido\n");
            return 0;
        } else if (resultado == 1) 
        {
            por_parametro = 1;
        }
    }

    if (!por_parametro) 
    {
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                int valido = 0;

                while (!valido) 
                {
                    printf("Digite o caractere da linha %d coluna %d: ", i + 1, j + 1);
                    scanf(" %c", &tabuleiro[i][j]);

                    if (validaCaractereTabuleiro(tabuleiro[i][j])) 
                    {
                        valido = 1;
                    } else 
                    {
                        printf("caractere invalido\n");
                    }
                }
            }
        }
    }

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("| %c ", tabuleiro[i][j]);
        }
        printf("|\n");
    }

    printf("Criado por: Marcelo Mendes");
    return 0;
}
