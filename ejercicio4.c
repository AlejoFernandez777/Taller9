#include <stdio.h> 

#include <math.h> 

 

 

float distancia(float x1, float y1, float x2, float y2) { 

    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); 

} 

 

 

void calcularDistancias(float puntos[][2], float distancias[], int n) { 

    for (int i = 0; i < n; i++) { 

        float x1 = puntos[i][0]; 

        float y1 = puntos[i][1]; 

        float x2 = puntos[i][2]; 

        float y2 = puntos[i][3]; 

        distancias[i] = distancia(x1, y1, x2, y2); 

    } 

} 

 

int main() { 

    int n; 

 

     

    printf("¿Cuántos pares de puntos desea ingresar? "); 

    scanf("%d", &n); 

 

    

    float puntos[n][4]; // Cada fila tiene x1, y1, x2, y2 

    float distancias[n]; 

 

    

    printf("Ingrese los pares de puntos (x1, y1, x2, y2):\n"); 

    for (int i = 0; i < n; i++) { 

        printf("Par %d:\n", i + 1); 

        printf("  x1: "); 

        scanf("%f", &puntos[i][0]); 

        printf("  y1: "); 

        scanf("%f", &puntos[i][1]); 

        printf("  x2: "); 

        scanf("%f", &puntos[i][2]); 

        printf("  y2: "); 

        scanf("%f", &puntos[i][3]); 

    } 

 

    // Calcular las distancias 

    calcularDistancias(puntos, distancias, n); 

 

     

    printf("\nDistancias calculadas:\n"); 

    for (int i = 0; i < n; i++) { 

        printf("Distancia entre (%0.2f, %0.2f) y (%0.2f, %0.2f): %0.2f\n", 

               puntos[i][0], puntos[i][1], puntos[i][2], puntos[i][3], distancias[i]); 

    } 

 

    return 0; 

} 