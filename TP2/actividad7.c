#include <stdio.h>
#include <string.h>
int i=0,j=0, anagrama=0;
char cadena1[30], cadena2[30];
main(){
	printf("ingrese la primera cadena de caracteres:");
	scanf("%s", cadena1);
	printf("ingrese la segunda cadena de caracteres:");
	scanf("%s", cadena2);
	for(i=0;i<strlen(cadena1);i++){
		for(j=0;j<strlen(cadena2);j++){
		if(cadena1[i]==cadena2[j]){
		
	     anagrama++;
		}
		}
	}
	if(anagrama==strlen(cadena1)){
		printf("es una anagrama");
	}
	else{
		printf("no es un anagrama");
	}
	
	
}//main

