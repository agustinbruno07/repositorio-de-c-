#include <stdio.h>
FILE *archivo;
int dni, opcion, dni_buscar;
char nombre[30], apellido[30];
main(){

	printf("ingrese la opcion:(ingrese el numero de la opcion)\n"
	       "1)guardar archivo\n"
	       "2)busqueda por dni\n"
		   "3)salir\n");
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
			fprintf(archivo, "%s %s %d", nombre, apellido, dni);
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
	    	printf("saliendo del programa...........");
	    	return 0;
	    	break;
	
	}
	
}

