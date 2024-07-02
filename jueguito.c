#include <stdio.h>

int main(){
    int resp_1, resp_2, resp_3;
    int nivel;
    int correctas = 0, incorrectas = 0;
    printf("Bienvenido.");
    printf("En una escala del 1 al 3, cuanto pensas que me conoces?: ");
    scanf("%d", &nivel);

    switch (nivel){
    case 1:
        printf("Nivel facil? Bueno, ahora tenes que contestar tres preguntas faciles. Empecemos.");
            printf("\nQue comida me gusta mas?: ");
            printf("\n1. Hamburguesa \n2. Sushi \n3. Huevo revuelto \n4. Choripan\n");
            scanf("%d", &resp_1);
            if (resp_1 == 1)correctas++;
            else{incorrectas++;}
            printf("De que club soy hincha?: ");
            printf("\n1. Boca \n2. River \n3. Gimnasia \n4. Newell's \n5. Estudiantes\n");
            scanf("%d", &resp_2);
            if (resp_2 == 4)correctas++;
            else{incorrectas++;}
            printf("Mi segundo nobre es?: ");
            printf("\n1. Jaime \n2. Aime \n3. Auliel \n4. Euler \n");
            scanf("%d", &resp_3);
            if (resp_3 == 2)correctas++;
            else{incorrectas++;}
        break;
    case 2:
        printf("Nivel medio: Tenes que contestar tres preguntas. Empecemos.");
            printf("\nMateria favorita?: ");
            printf("\n1. Fisica \n2. Digitales \n3. Matematica \n4. Analogicas\n");
            scanf("%d", &resp_1);
            if (resp_1 == 4)correctas++;
            else{incorrectas++;}
            printf("Cantante favorito?: ");
            printf("\n1. Duki \n2. Neo \n3. YSY A \n4. WOS \n5. Nicki Nicole\n");
            scanf("%d", &resp_2);
            if (resp_2 == 1)correctas++;
            else{incorrectas++;}
            printf("Que me cuesta mas?: \n");
            printf("1. Sumar sin calculadora \n2. Abecedario \n3. Comer vegetales\n");
            scanf("%d", &resp_3);
            if (resp_3 == 2 || resp_3 == 3)correctas++;
            else{incorrectas++;}
        break;
    case 3:
        printf("Nivel dificil, asi que ojo al piojo. Tenes que contestar tres preguntas.\n");
            printf("Que color de ojos tenia cuando era bebe?: \n");
            printf("1. Violetas \n2. Celestes \n3. Verdes \n4. Amarillos \n");
            scanf("%d", &resp_1);
            if (resp_1 == 2)correctas++;
            else{incorrectas++;}
            printf("Album favorito?: \n");
            printf("1. EL DON (Khea) \n2. Desde el fin del mundo (Duki) \n3. ANTEZANA (YSY A) \n4. CARAVANA (WOS)\n");
            scanf("%d", &resp_2);
            if (resp_2 == 3)correctas++;
            else{incorrectas++;}
            printf("Que me gusta jugar mas?: \n");
            printf("1. Minecraft \n2. Browl \n3. Buscaminas\n1");
            scanf("%d", &resp_3);
            if (resp_3 == 1)correctas++;
            else{incorrectas++;}
        break;
    default:
        printf("Nivel no valido.\n");
        break;
    }
    printf("\nCorrectas: %d\n", correctas);
    printf("Incorrectas: %d\n", incorrectas);
    return 0;
}