#include <stdio.h>
#include <assert.h>
#include "function_tabuleiro.c"

int main() {
    assert(validar_tabuleiro_char('X') == 1);
    assert(validar_tabuleiro_char('O') == 1);
    assert(validar_tabuleiro_char('4') == 0);

    printf("Criado por Marcelo Mendes");
    return 0;
}