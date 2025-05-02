#include <stdio.h>
#include <string.h>
 char texto[1000],busqueda[100];
int main() {
    printf("Texto principal: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strlen(texto)-1] = '\0';
    
    printf("texto que quiere buscar: ");
    fgets(busqueda, sizeof(busqueda), stdin);
    busqueda[strlen(busqueda)-1] = '\0';

    int posicion = buscar_subcadena(texto, busqueda);
    
    if(posicion != -1) {
        printf("la posicion es: %d\n", posicion);
    } else {
        printf("No se encontro la subcadena\n");
    }
}
int buscar_subcadena(char *texto, char *busqueda) {
    char *pos = strstr(texto, busqueda);
    if(pos != 0) {
        return pos - texto;
    }
    return -1;
}
