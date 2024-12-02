#include <stdio.h>


int par(int num) {
    return (num % 2 == 0) ? 1 : 0;
}


void procesarArreglo(int numeros[], int n) {
    for (int i = 0; i < n; i++) {
        if (par(numeros[i])) {
            printf("El numero %d es par.\n", numeros[i]);
        } else {
            printf("El numero %d es impar.\n", numeros[i]);
        }
    }
}

int main() {
    int n;

    
    printf("Cuantos numeros desea ingresar ");
    scanf("%d", &n);

    
    int numeros[n];

    
    printf("Ingrese %d numeros enteros:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

   
    printf("\nResultados:\n");
    procesarArreglo(numeros, n);

    return 0;
}