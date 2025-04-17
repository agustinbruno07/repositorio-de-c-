#include <stdio.h>
char cadena1[30], cadena2[30], cadenaCompleta[100];
void concatenar(char *c1, char *c2);

main() {
    printf("Ingrese la cadena 1: ");
    scanf("%s", cadena1);  
    
    printf("Ingrese la cadena 2: ");
    scanf("%s", cadena2);  
    
    concatenar(cadena1, cadena2);
    
    printf("La cadena completa es: %s\n", cadenaCompleta);
    
    
}

void concatenar(char *c1, char *c2) {
    char *dest = cadenaCompleta;
    
    while (*c1 != '\0') {
        *dest = *c1;
        dest++;
        c1++;
    }
    
    while (*c2 != '\0') {
        *dest = *c2;
        dest++;
        c2++;
    }
    
    *dest = '\0';
}
