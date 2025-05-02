#include <stdio.h>
#include <string.h>
#include <ctype.h>

int puntaje, opcion, i = 0, j = 0, N = 0;
int puntajes[256];
char nombre[50], nombres[256][50], tempNom[50];
FILE *archivo;

main() {
    do {
        printf("\nIngrese el numero de la accion que quiere realizar\n"
               "1) Guardar el nombre y puntaje del jugador\n"
               "2) Mostrar los 10 mejores\n"
               "3) Buscar por nombre\n"
               "4) Salir\n");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                printf("Ingrese el nombre del jugador: ");
                scanf("%s", nombre);
                printf("Ingrese el puntaje del jugador: ");
                scanf("%d", &puntaje);
                archivo = fopen("archivo6.txt", "a");
                fprintf(archivo, "%s %d\n", nombre, puntaje);
                fclose(archivo);
                break;
                
            case 2:
                archivo = fopen("archivo6.txt", "r");
                N = 0;
                while(fscanf(archivo, "%s %d", nombres[N], &puntajes[N]) == 2) {
                    N++;
                }
                fclose(archivo);
                
                for(i = 0; i < N - 1; i++) {
                    for(j = 0; j < N - i - 1; j++) {
                        if(puntajes[j] < puntajes[j + 1]) {
                            int tempPunt = puntajes[j];
                            puntajes[j] = puntajes[j + 1];
                            puntajes[j + 1] = tempPunt;
                            
                            strcpy(tempNom, nombres[j]);
                            strcpy(nombres[j], nombres[j + 1]);
                            strcpy(nombres[j + 1], tempNom);
                        }
                    }
                }
                
                printf("\nLos 10 mejores jugadores son:\n");
                for(i = 0; i < 10; i++) {
                    printf("%d %s %d puntos\n", i + 1, nombres[i], puntajes[i]);
                }
                break;
                
            case 3: {
                char nombre_buscar[50];
                int encontrado = 0;
                
                printf("Ingrese el nombre a buscar: ");
                scanf("%s", nombre_buscar);
                
                archivo = fopen("archivo6.txt", "r");
                
                printf("\nResultados de la busqueda:\n");
                while(fscanf(archivo, "%s %d", nombre, &puntaje) == 2) {
                    if(strcmp(nombre, nombre_buscar) == 0) {
                        printf("Jugador: %s Puntaje: %d\n", nombre, puntaje);
                        encontrado = 1;
                    }
                }
                
                if(!encontrado) {
                    printf("No se encontraron jugadores con ese nombre.\n");
                }
                
                fclose(archivo);
                break;
            }
                
            case 4:
                printf("Saliendo del programa...\n");
                break;
        }
    } while(opcion != 4);
    
    
}
