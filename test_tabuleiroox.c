#include <stdio.h>
#include <assert.h>
#include "function_tabuleiroox.c"

int main() {
    assert(validaCaractereTabuleiro('X') == 1);
    assert(validaCaractereTabuleiro('O') == 1);
    assert(validaCaractereTabuleiro('A') == 0);

    printf("Criado por: Marcelo Mendes");
    return 0;
}
