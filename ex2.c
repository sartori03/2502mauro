#include <stdio.h>

int main() {
    int valor1;
    int valor2;
    
    printf("Digite o primeiro valor:");
    scanf("%d", &valor1);
    
    printf("Digite o segundo valor:");
    scanf("%d", &valor2);

  if (valor1 > valor2) {
      printf("Valor mais alto: %d\n", valor1);
      printf("Valor mais baixo: %d", valor2);
  }
  
  if (valor1 < valor2) {
      printf("Valor mais alto: %d\n", valor2);
      printf("Valor mais baixo: %d", valor1);
  }
  
  if (valor1 == valor2) {
      printf("Os valores são iguais.");
  }
  
    return 0;
}
