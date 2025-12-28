#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível: Mestre

int index = 0;
const int rook = 5, bishop = 5, queen = 8;

void moveRook() {
  if (index < rook) {
    printf("Direita\n");
    index++;
    moveRook();
  }
  index = 0;
}

void moveQueen() {
  if (index < queen) {
    printf("Esquerda\n");
    index++;
    moveQueen();
  }
  index = 0;
}

int main() {
  printf("--- Torre ---\n");
  moveRook();

  printf("\n--- Bispo ---\n");
  for(int i = 0; i < bishop; i++) {
    if (i == bishop - 1) {
      printf("Cima\n");
    } else if (i % 2 == 0) {
      printf("Cima, ");
    } else
    printf("Direita\n");
  }
  
  printf("\n--- Rainha ---\n");
  moveQueen();
  
  printf("\n--- Cavalo ---\n");
  int i = 0;
  while(i < 3) {
    for (int _ = 0; i < 2; i++) 
      printf("Baixo\n");
    printf("Esquerda\n");
    i++;
  }

  return 0;
}
