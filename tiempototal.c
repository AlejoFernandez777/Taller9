#include <stdio.h>

// Funcion para calcular el tiempo total
float calcular_tiempo_total(float tiempo_acumulado, float tiempo_ultima_etapa) {
  return tiempo_acumulado + tiempo_ultima_etapa;
}

int main() {
  // Datos de entrada
  float tiempo_acumulado;
  float tiempo_ultima_etapa;

  // Lectura de datos
  printf("Ingrese el tiempo acumulado: ");
  scanf("%f", &tiempo_acumulado);

  printf("Ingrese el tiempo de la ultima etapa: ");
  scanf("%f", &tiempo_ultima_etapa);

  // Calculo del tiempo total
  float tiempo_total = calcular_tiempo_total(tiempo_acumulado, tiempo_ultima_etapa);

  // Impresión del resultado
  printf("El tiempo total del corredor es: %.2f\n", tiempo_total);

  return 0;
}