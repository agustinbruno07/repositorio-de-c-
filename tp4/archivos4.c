#include <stdio.h>
#include <string.h>
FILE *archivo;
int i = 0;
int dni, opcion, dni_buscar, dni_temp,dni_repetido = 0, nombre_repetido = 0, apellido_repetido = 0,opcion_rep,opc;
char nombre[30], apellido[30], nombre_buscar[30], apellido_buscar[30],apellido_temp[30], nombre_temp[30];
main(){
    do{
	printf("ingrese la opcion:(ingrese el numero de la opcion)\n"
	       "1)guardar archivo\n"
	       "2)busqueda por dni\n"
	       "3)busqueda por nombre y apellido\n"
	       "4)mostrar informacion\n"
		   "5)salir\n");
	scanf("%d", &opcion);
	
    switch(opcion){
		
		case 1:
			printf("ingrese su nombre\n");
	        scanf("%s", &nombre);
			printf("ingrese su apellido\n");
			scanf("%s", &apellido);
			printf("ingrese su dni\n");
			scanf("%d", &dni);
			//validacion de dni, nombre y apellido
			archivo = fopen("archivo.txt", "r");
			while(fscanf(archivo, "%s %s %d", nombre_temp, apellido_temp, &dni_temp) != EOF){
				if(dni == dni_temp){
					dni_repetido = 1;	
				}
				if(nombre == nombre_temp){
					nombre_repetido = 1;
				}
				if(apellido == apellido_temp){
					apellido_repetido = 1;
				}
			}
			fclose(archivo);
			if(dni_repetido !=0||nombre_repetido != 0||apellido_repetido != 0){
				printf("El dni/nombre/apellido que intenta ingresar ya esta en el archivo\n");
				printf("quiere agregarlo igual al archivo?\n1)si\n2)No");
				scanf("%d", &opcion_rep);
			if(opcion_rep == 1){
				archivo = fopen("archivo.txt", "a");
				fprintf(archivo, "%s %s %d", nombre, apellido, dni);
				fclose(archivo);
				printf("datos guardados rey\n ");
				}
			else{
				printf("datos no guardados rey\n");
			 }
			}
			else{
				archivo = fopen("archivo.txt", "a");
				fprintf(archivo, "%s %s %d", nombre, apellido, dni);
				fclose(archivo);
				printf("datos guardados rey\n ");
				
			}
			
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
		printf("Mostrar de manera ordenada\n1)DNI\n2)Nombres\n3)Apellidos\n");
		scanf("%d", &opc);
		switch(opc){
			case 1:
				archivo = fopen("archivo.txt", "r");
				while(fscanf(archivo, "%s %s %d" , nombre,apellido,&dni)!= EOF){
				     printf("DNI %d: %d\n",i++,dni);
				}
				fclose(archivo);
			break;
			case 2:
				archivo = fopen("archivo.txt", "r");
				while(fscanf(archivo, "%s %s %d" , nombre,apellido,&dni)!= EOF){
				     printf("nombre %d: %s\n",i++,nombre);
				}
				fclose(archivo);
			break;
			case 3:
				archivo = fopen("archivo.txt", "r");
				while(fscanf(archivo, "%s %s %d" , nombre,apellido,&dni)!= EOF){
				     printf("apellido %d: %s\n",i++,apellido);
				}
				fclose(archivo);
			break;
	
		}
	
		break;
	    case 5:
	    	printf("saliendo del programa...........");
	    	return 0;
	    	break;
	
	}
    }while(opcion != 4);	
}

