#include <stdio.h>

int main(void){
    int numero, i = 1, num_max;
    printf("Bienvenido, de que numero queres saber la tabla?: \n");
    scanf("%d", &numero);
    printf("Hasta que numero: \n");
    scanf("%d", &num_max);
    while (i<=num_max){
        printf("\nResultado: %d", numero * i);
        i++;
    }
    return 0;
}