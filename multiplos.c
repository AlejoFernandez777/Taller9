#include <stdio.h>

// Funcion para determinar si un número es multiplo de otro
int multiplo(int num1, int num2) {
  if (num2 % num1 == 0) {
    return 1; // Verdadero
  } else {
    return 0; // Falso
  }
}

int main() {
  int num_pares;
  
  // Solicitar al usuario la cantidad de pares de numeros
  printf("Ingrese la cantidad de pares de numeros: ");
  scanf("%d", &num_pares);

  // Declarar arreglos para almacenar los pares de numeros
  int numeros[num_pares][2];

  // Ingresar los pares de numeros
  printf("Ingrese los pares de numeros:\n");
  for (int i = 0; i < num_pares; i++) {
    printf("Par %d: ", i + 1);
    scanf("%d %d", &numeros[i][0], &numeros[i][1]);
  }

  // Mostrar los resultados
  printf("\nResultados:\n");
  for (int i = 0; i < num_pares; i++) {
    int resultado = multiplo(numeros[i][0], numeros[i][1]);
    printf("Par %d: %d %d - %s\n", i + 1, numeros[i][0], numeros[i][1], (resultado == 1) ? "Verdadero" : "Falso");
  }

  return 0;
}