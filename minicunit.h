/**
 * MiniCUnit - https://github.com/Fredi/MiniCUnit
 * Mini Biblioteca para desenvolvimento C focado em testes (TDD ou Test-Driven Development)
 *
 * Util para aulas de Algoritmos e Programação na Faculdade da FTEC
 *
 * Baseado em:
 * http://www.prof.kadu.com.br/dicas/2011/09/realizando-tdd-em-c-simples-e-pratico-minunit
 * http://eradman.com/posts/tdd-in-c.html
 */

#include <stdio.h>

extern int testes_rodados;

#define FALHA() printf("\nFalha em %s() linha %d\n", __func__, __LINE__)
#define afirmar_que(teste) do { if (!(teste)) { FALHA(); return 1; } } while(0)
#define rodar_teste(teste) do { int r = teste(); testes_rodados++; if(r) return r; } while(0)
