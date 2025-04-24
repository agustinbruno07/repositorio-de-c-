#include <stdio.h>
#include <string.h>
FILE *archivo;
int dni, opcion, dni_buscar;
char nombre[30], apellido[30], nombre_buscar[30], apellido_buscar[30];
main(){
    do{
	printf("ingrese la opcion:(ingrese el numero de la opcion)\n"
	       "1)guardar archivo\n"
	       "2)busqueda por dni\n"
	       "3)busqueda por nombre y apellido\n"
		   "4)salir\n");
	scanf("%d", &opcion);
	
    switch(opcion){
		
		case 1:
			printf("ingrese su nombre");
	        scanf("%s", &nombre);
			printf("ingrese su apellido");
			scanf("%s", &apellido);
			printf("ingrese su dni");
			scanf("%d", &dni);
			archivo = fopen("archivo.txt", "a");
			fprintf(archivo, "%s\n %s\n %d\n", nombre, apellido, dni);
			fclose(archivo);
		break;
	    case 2:
	    	printf("ingrese el dni que quiere buscar");
	    	scanf("%d", &dni_buscar);
	    	archivo = fopen("archivo.txt", "r");
	    	while(fscanf(archivo, "%s %s %d", nombre, apellido, &dni) != EOF){
	    		if(dni==dni_buscar){
	    			printf("nombre: %s\n",nombre);
	    			printf("apellido:%s", apellido);
				}
			}
			fclose(archivo);
	    		
	    break;
	    case 3:
	     printf("ingrese el nombre del que quiere buscar");
		 scanf("%s", nombre_buscar);	
		 printf("ingrese el apellido del que quiere buscar");
		 scanf("%s", apellido_buscar);
		 archivo = fopen("archivo.txt", "r");
		 while(fscanf(archivo, "%s %s %d", nombre, apellido, &dni) != EOF){
		 	if(strcmp(nombre, nombre_buscar) == 0 && strcmp(apellido, apellido_buscar) == 0){
		 		printf("nombre: %s\n", nombre);
		 		printf("apellido: %s\n", apellido);
		 		printf("DNI: %d\n", dni);
		 		
			 }
		 } 
   		 fclose(archivo);
   		
		break;
	    case 4:
	    	printf("saliendo del programa...........");
	    	return 0;
	    	break;
	
	}
    }while(opcion != 4);	
}

