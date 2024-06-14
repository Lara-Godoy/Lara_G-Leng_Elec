// Se ingresa una cant de segs y se da cuanto es en formato dd:hh:mm:ss

#include <stdio.h>

int main(){
    int segs, mins, horas, dias, meses, sobra;
    int valor;

    printf("Hola. Ingresa una cantidad de segundos: ");
    scanf("%ld", &valor);
    dias = valor / 86400;
    sobra = valor % 86400;
    horas = valor / 3600;
    sobra = sobra % 3600;
    mins = sobra / 60;
    segs = sobra % 60;
    printf("%d:%02d:%02d:%02d\n", dias, horas, mins, segs);
    return 0;
}