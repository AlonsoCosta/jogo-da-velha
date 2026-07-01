#ifndef TABULEIRO_H
#define TABULEIRO_

#define VAZIO 0
#define MARCA_O 1
#define MARCA_X 4

void iniciarTabuleiro();

void desenha();

int temVencedor();

void marcaJogada();

void PosicaoValida();

#endif