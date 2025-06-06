#include <stdio.h>

int main() {
    int array_do_usuario[50];
    int quantidade_de_numeros;
    int i, j, temp;

    printf("Quantos numeros voce quer ordenar (maximo de 50)? ");
    scanf("%d", &quantidade_de_numeros);

    if (quantidade_de_numeros > 50 || quantidade_de_numeros <= 0) {
        printf("Quantidade invalida!\n");
        return 1;
    }

    printf("Agora digite os %d numeros:\n", quantidade_de_numeros);
    for (i = 0; i < quantidade_de_numeros; i++) {
        printf("numero %d: ", i + 1);
        scanf("%d", &array_do_usuario[i]);
    }

    printf("\nSeu array: ");
    for (i = 0; i < quantidade_de_numeros; i++) {
        printf("%d ", array_do_usuario[i]);
    }
    printf("\n");

    for (i = 0; i < quantidade_de_numeros - 1; i++) {
        for (j = 0; j < quantidade_de_numeros - 1 - i; j++) {
            if (array_do_usuario[j] > array_do_usuario[j+1]) {
                temp = array_do_usuario[j];
                array_do_usuario[j] = array_do_usuario[j+1];
                array_do_usuario[j+1] = temp;
            }
        }
    }

    printf("Seu array ordenado: ");
    for (i = 0; i < quantidade_de_numeros; i++) {
        printf("%d ", array_do_usuario[i]);
    }
    printf("\n");

    return 0;
}
