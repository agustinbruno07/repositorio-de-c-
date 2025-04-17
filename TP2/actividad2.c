#include <stdio.h>
#include <string.h> 
char palabra[30];
int i=0, vocales=0, cont; 
main(){ 
printf("ingrese su cadena de caracteres: "); 
scanf("%s", palabra); 
for(i=0; i < strlen(palabra); i++){
 if(palabra[i] == 'a' || palabra[i] == 'e' ||palabra[i] == 'i' ||palabra[i] == 'o'|| palabra[i] == 'u' 
 ||palabra[i]=='A' ||palabra[i] == 'E' ||palabra[i]=='i'|| palabra[i] == 'O' ||palabra[i] == 'U'){ 
      cont++;
 }
}
printf("su cadena de caracteres tiene %d vocales", cont);
}//main


