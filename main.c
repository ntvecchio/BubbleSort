#include <stdio.h>

int main() {
    int array[50];
    int tamanho;
    int i, j, temp;

    printf("Quantos numeros voce quer ordenar (maximo de 50)? ");
    scanf("%d", &tamanho);

    if (tamanho > 50 || tamanho <= 0) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    printf("Agora digite os %d numeros:\n", tamanho);
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &array[i]);
    }

    printf("\nSeu array original: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - 1 - i; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    printf("Seu array ordenado: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
