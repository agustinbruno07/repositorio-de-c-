#include <stdio.h>
#include <string.h> 
char palabra[30];
int i=0,cantidad, espacios=0,palabras;
main() {
   printf("Ingrese la cadena de caracteres: ");
   fgets(palabra, sizeof(palabra), stdin);
   cantidad = strlen(palabra);
   for(i=0;i<cantidad;i++){
   	if(palabra[i]== ' '){
   		espacios++;
	   }
   }
   
   palabras = espacios + 1 ;
   
   printf("la cantidad de palabras es %d", palabras );

}
