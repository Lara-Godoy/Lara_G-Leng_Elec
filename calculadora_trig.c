#include <stdio.h>
#include <math.h>

void mostrarMenu();
void hacerCalculo(int opcion);
void calcularNumero(float num, int opcion);

int main()
{
    int opcion;
    
    mostrarMenu();
    
    do
    {
        printf("Ingrese una opcion: ");
        scanf("%i", &opcion);
    } while (opcion > 6 || opcion < 0);
    
    hacerCalculo(opcion);
}

void mostrarMenu()
{    
    printf("C A L C U L A D O R A   T R I G O N O M E T R I C A\n");
    printf("Que desea calcular:\n");
    printf("0. Salir\n1. Seno\n2. Coseno\n3. Tangente\n4. Arcoseno\n5. Arcocoseno\n6. Arcotangente\n");
}

void hacerCalculo(int opcion)
{
    float num;
    
    if (opcion == 0)
    {
        printf("Saliendo . . .\n");
    } else 
    {
        printf("Ingrese el numero para calcular: ");
        scanf("%f", &num);
        calcularNumero(num, opcion);    
    }
}

void calcularNumero(float num, int opcion)
{
    switch(opcion)
    {
        case 1:
            printf("sen(%f) = %f", num, sin(num));
            break;
        case 2:
            printf("cos(%f) = %f", num, cos(num));
            break;
        case 3:
            printf("tan(%f) = %f", num, tan(num));
            break;
        case 4:
            printf("arcsen(%f) = %f", num, asin(num));
            break;
        case 5:
            printf("arccos(%f) = %f", num, acos(num));
            break;
        case 6:
            printf("arctan(%f) = %f", num, atan(num));
            break;
    }
}