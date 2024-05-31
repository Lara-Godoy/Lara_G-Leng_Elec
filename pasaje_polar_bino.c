#include <stdio.h>
#include <math.h>

const float pi = 3.1415926535;

int main(void){
    int mod, ang;
    double ejeY, ejeX;
    double rad;
    double ejeX_red, ejeY_red;
    printf("ingrese el modulo: \n");
    scanf("%d", &mod);
    printf("ingrese el angulo en grados: \n");
    scanf("%d", &ang);
    rad = ang * (pi / 180.0);
    ejeY = sin(rad)*mod;
    ejeX = cos(rad)*mod;
    ejeY_red = round(ejeY);
    ejeX_red = round(ejeX);
//%f --> xq es float
    printf("Parte imaginaria redondeada: %f", ejeY_red);
    printf("\nParte real redondeada: %f", ejeX_red);
    printf("\n\nParte imaginaria sin redondear: %f", ejeY);
    printf("\nParte real sin redondear: %f", ejeX);
    return(0);
}