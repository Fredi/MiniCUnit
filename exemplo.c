#include "minicunit.h"

int testes_rodados = 0;

int testa_x_maior_que_zero()
{
    int x = 1 + 1;
    afirmar_que(x > 0);
    return 0;
}

int testes()
{
    rodar_teste(testa_x_maior_que_zero);
    return 0;
}

int main()
{
    int r = testes();
    if (r == 0)
       printf("Tudo OK!\n");
    printf("Testes rodados: %d\n", testes_rodados);

    return 0;
}
