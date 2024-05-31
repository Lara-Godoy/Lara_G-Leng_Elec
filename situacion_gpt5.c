/*Definir un número secreto en el código.
Permitir al usuario ingresar sus intentos.
Informar al usuario si su intento es demasiado alto, demasiado bajo o correcto.
Repetir el proceso hasta que el usuario adivine correctamente el número secreto.*/

#include <stdio.h>

int main(void){
    int num_secreto = 3587;
    int num_usuario;

    printf("Ingresa tu intento: \n");
    scanf("%d", &num_usuario);
    while (num_usuario != num_secreto){
        if (num_usuario < num_secreto)
        {
            printf("Error, intenta de nuevo un numero mayor: \n");
            scanf("%d", &num_usuario);
        }else{
            printf("Error, intenta de nuevo un numero menor: \n");
            scanf("%d", &num_usuario);
        }
    }
    printf("Bien ahi, master, correcto.");
    return 0;
}
