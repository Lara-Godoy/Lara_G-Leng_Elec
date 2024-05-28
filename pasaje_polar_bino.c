#include <stdio.h>
#include <math.h>

const int pi = 3.1415926535;

int main(void){
    int mod, ang;
    double ejeY, ejeX;
    double rad;

    printf("ingrese el modulo: \n");
    scanf("%d", &mod);
    printf("ingrese el angulo en grados: \n");
    scanf("%d", &ang);

    rad = ang * (pi / 180.0);

    ejeY = sin(rad)*mod;
    ejeX = cos(rad)*mod;

    ejeY = round(ejeY);
    ejeX = round(ejeX);

//%f --> xq es float
    printf("Parte imaginaria redondeada: %f", ejeY);
    printf("\nParte real redondeada: %f", ejeX);
    return(0);
}