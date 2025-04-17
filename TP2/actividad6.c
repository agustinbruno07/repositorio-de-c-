#include <stdio.h>
#include <string.h>
int i, j , palabras =1 , cont=1;
char cadena[200];

main(){
	printf("ingrese una cadena con espacios");
	fgets(cadena,sizeof(cadena), stdin);
	cadena[strcspn(cadena, "\n")] = '\0';
	
	for(i=0;i<strlen(cadena);i++){
		if(cadena[i]== ' '){
			palabras++;
		}
	}
	printf("\n la cadena con el orden dde las palabras invertido queda: ");
	for(i=0;i<strlen(cadena);i++){
		for(j=0;j<strlen(cadena);j++){
			if(cadena[j]==' '){
			cont++;
		}
		if(cont==palabras){
			if(palabras ==1){
				printf("%c", cadena[j]);
			}
			else{
				printf("%c", cadena[j+1]);
			}
		}
	}
	palabras--;
	cont=1;
	}
	
	
	
	
}//main

