#include <stdio.h>

// Funcion para determinar si un número es perfecto
int perfecto(int num) {
  int suma = 1; // Inicializa la suma de los factores con 1
  for (int i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      suma += i;
    }
  }
  return (suma == num);
}

int main() {
  printf("Numeros perfectos entre 1 y 1000:\n");
  for (int i = 2; i <= 1000; i++) {
    if (perfecto(i)) {
      printf("%d: ", i);
      // Encuentra y muestra los factores
      for (int j = 1; j <= i / 2; j++) {
        if (i % j == 0) {
          printf("%d ", j);
        }
      }
      printf("\n");
    }
  }
  return 0;
}