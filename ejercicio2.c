#include <stdio.h>

main(void){
    int a=5;
    float b=13.546; 
    char c='A'; 
    char d='a'; 

    printf ("a = %d", a); 
    printf ("\na = %O", a); 
    printf ("\na = %X", a); 
    printf ("\na = %f", a); 
    printf ("\na = %c", a); 
    printf ("\nb = %d", b); 
    printf ("\nb = %5.2d", b); 
    printf ("\nb = %f", b); 
    printf ("\nb = %.1f", b); 
    printf ("\nb = %.2f", b); 
    printf ("\nb = %6.4f", b); 
    printf ("\nb = %6.1f", b); 
    printf ("\nb = %c", b); 
    printf ("\nb = %O", b); 
    printf ("\nb = %X", b); 
    printf ("\nc = %d", c); 
    printf ("\nc = %f", c); 
    printf ("\nc = %c", c); 
    printf ("\nc = %O", c); 
    printf ("\nc = %X", c); 
    printf ("\nd = %d", d); 
    printf ("\nd = %f", d); 
    printf ("\nd = %c", d); 
    printf ("\nd = %O", d); 
    printf ("\nd = %X", d); 
}