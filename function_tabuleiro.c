#include <stdio.h>

int validar_tabuleiro_char(char c) {
    if (c == 'X') return 1;
    if (c == 'O') return 1;
    return 0;
}