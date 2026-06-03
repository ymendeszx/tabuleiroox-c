#include <stdio.h>
#include "function_tabuleiro.c"

int main(int argc, char *argv[]) {
    char tabuleiro[3][3] = {{0}};
    int usar_argumentos = 0;

    if (argc > 1) {
        int tamanho_arg = 0;
        while (argv[1][tamanho_arg] != '\0') {
            tamanho_arg++;
        }
        if (tamanho_arg >= 9) {
            usar_argumentos = 1;
        }
    }

    if (usar_argumentos == 1) {
        int indice = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                char c = argv[1][indice];
                if (validar_tabuleiro_char(c) == 1) {
                    tabuleiro[i][j] = c;
                }
                indice++;
            }
        }
    } else {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                char caractere;
                int valido = 0;
                while (valido == 0) {
                    printf("Digite o caractere da linha %d coluna %d:\n", i + 1, j + 1);
                    scanf(" %c", &caractere);
                    if (validar_tabuleiro_char(caractere) == 1) {
                        tabuleiro[i][j] = caractere;
                        valido = 1;
                    } else {
                        printf("caractere inválido\n");
                    }
                }
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("Criado por Marcelo Mendes");
    return 0;
}