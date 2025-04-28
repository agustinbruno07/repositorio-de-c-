#include <stdio.h>
int puntaje, opcion, i=0, j=0, N=0, puntaje,puntajes[256];;
char tempNom[50];nombre[50],nombres[256][50],nombre[100];
FILE *archivo;
main(){
    do{
	printf("ingrese el numero de la accion que quiere realizar\n "
	       "1)Guardar el nombre y puntaje del jugador \n"
		   "2)Mostrar los 10 mejores \n"
		   "3)Buscar por nombre\n"
		   "4)salir\n");
	scanf("%d", &opcion);
	
	switch(opcion){
		case 1:
			printf("ingrese el nombre del jugador");
			scanf("%s", nombre);
			printf("ingrese el puntaje del jugador");
			scanf("%d", &puntaje );
			archivo = fopen("archivo6.txt", "a");
			fprintf(archivo, "%s %d", nombre, &puntaje);
			fclose(archivo);
			break;
		case 2:
			int i=0, j=0, N=0, puntaje;
			char tempNom[50];
			char nombre[50];
			char nombres[256][50];
			int puntajes[256];
			while(fscanf(archivo, "Nombre: %s Puntaje: %d\n", nombre, &puntaje) == 2){
			strcpy(nombres[i], nombre);
			puntajes[i] = puntaje;			
			i++;
			N++;
		}
		
		for(i=0; i < N - 1; i++){
			for(j=0; j < N - i - 1; j++){			
				if(puntajes[j] < puntajes[j + 1]){
					int tempPunt = puntajes[j];
					puntajes[j] = puntajes[j + 1];
					puntajes[j + 1] = tempPunt;				
							
					strcpy(tempNom, nombres[j]);
					strcpy(nombres[j], nombres[j + 1]);
					strcpy(nombres[j + 1], tempNom);
				}
			
			}
		}
		
		printf("\n\nLos 10 mejores jugadores son:\n");
		for(i=0; i < 10; i++){
			printf("\n%d. %s con %d puntos", i + 1, nombres[i], puntajes[i]);
		}
			break;
	
	
	}
	}while(opcion != 4);	   
		   
		   
		   
		   
		   
}      
