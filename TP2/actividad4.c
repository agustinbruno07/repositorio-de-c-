#include <stdio.h>
#include <string.h> 
char palabra[30], letra[2], caracter[2];
int i=0; 
main() { 
    printf("ingrese la palabra\n");
    scanf("%s", palabra);
    printf("cual letra quiere remplazar de la anterior introducida (%s):\n", palabra);
    scanf("%s", letra);
    printf("ingrese por cual quiere cambiar:\n");
    scanf("%s", caracter);
    
    for(i = 0; i < strlen(palabra); i++) {
        if(palabra[i] == letra[0]) { 
            palabra[i] = caracter[0];
        }
    }
    printf("%s", palabra);
}//main

