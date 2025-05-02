#include <stdio.h>
#include <string.h>
//Agus hacelo con funciones es mas facil 
char palabras[5][100], resultado[100] = "";
int i;
main() {
    printf("Ingrese 5 palabras:\n");
    for (i = 0; i < 5; i++) {
        scanf("%s", palabras[i]);
    }
    encontrarCadena(palabras, resultado);
    printf("\nLa cadena en comun encontrada es:: %s\n", resultado);
}//main
void encontrarCadena(char palabras[5][100], char resultado[100]) {
    int i, j, k, longit, max_longit = 0;
    char temp[100];
    longit = strlen(palabras[0]);
    for (i = 0; i < longit; i++) {
        for (j = i + 1; j <= longit; j++) {
      
            strncpy(temp, palabras[0] + i, j - i);
            temp[j - i] = '\0';
            int encontrado = 1;
            for (k = 1; k < 5; k++) {
                if (strstr(palabras[k], temp) == NULL) {
                    encontrado = 0;
                }
            }
            if (encontrado && (j - i) > max_longit) {
                max_longit= j - i;
                strcpy(resultado, temp);
            }
        }
    }
    if (max_longit == 0) {
        strcpy(resultado, "no hay subcadena en comun crackkkkkkk");
    }
}
