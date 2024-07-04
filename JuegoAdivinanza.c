#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Inicializamos el generador de números aleatorios

    int numeroSecreto = rand() % 100 + 1;
    int numeroIngresado;
    int adivinanza = 0;

    // Presentación inicial
    printf("\n----------------------------------------------\n");
    printf("          BIENVENIDO AL JUEGO DE ADIVINANZA\n");
    printf("----------------------------------------------\n");
    printf("Adivina el numero secreto entre 1 y 100.\n\n");

    // Bucle para el juego
    do {
        printf("\nAdivina el numero: ");
        scanf("%d", &numeroIngresado);

        if (numeroIngresado < numeroSecreto) {
            printf("\nDemasiado bajo. Intenta de nuevo.\n");
        } else if (numeroIngresado > numeroSecreto) {
            printf("\nDemasiado alto. Intenta de nuevo.\n");
        } else {
            printf("\nFelicidades. Adivinaste el numero secreto: %d \n", numeroSecreto);
            adivinanza = 1; // Termina el bucle
        }
    } while (!adivinanza);
    printf("\nFin del juego.");
    return 0;
}
