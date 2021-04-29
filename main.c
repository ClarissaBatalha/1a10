#include <stdio.h>

int main(void) {
 //Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo até que o usuário informe um valor válido.
  int nota;
  
  do {
  printf("\nSelecione uma nota de 0 a 10: ");
  scanf("%d", &nota);
  if (nota > 10 || nota < 0){
  printf("\nNota inválida.");
  }
  else
    break;

  }while (nota <= 10 || nota >= 0);
  printf("\nNota: %d", nota);

 



}