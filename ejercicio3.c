#include <stdio.h> 

 

 

int Calidad_Puntos(int nota) { 

    if (nota >= 90 && nota <= 100) { 

        return 4; 

    } else if (nota >= 80 && nota <= 89) { 

        return 3; 

    } else if (nota >= 70 && nota <= 79) { 

        return 2; 

    } else if (nota >= 60 && nota <= 69) { 

        return 1; 

    } else { 

        return 0; 

    } 

} 

 

 

void Procesar_Notas(int notas[], int resultados[], int n) { 

    for (int i = 0; i < n; i++) { 

        resultados[i] = Calidad_Puntos(notas[i]); 

    } 

} 

 

int main() { 

    int n; 

 

 

    printf("¿Cuantas notas desea ingresar? "); 

    scanf("%d", &n); 

 

 

    int notas[n]; 

    int resultados[n]; 

 

 

    printf("Ingrese las %d notas (0-100):\n", n); 

    for (int i = 0; i < n; i++) { 

        printf("Nota %d: ", i + 1); 

        scanf("%d", &notas[i]); 

 

        // Validar que la nota esté en el rango permitido 

        if (notas[i] < 0 || notas[i] > 100) { 

            printf("Error: La nota debe estar entre 0 y 100.\n"); 

            return 1; 

        } 

    } 

 

 

    Procesar_Notas(notas, resultados, n); 

 

 

    printf("\nResultados:\n"); 

    for (int i = 0; i < n; i++) { 

        printf("La calidad de puntos para la nota %d es: %d\n", notas[i], resultados[i]); 

    } 

 

    return 0; 

} 