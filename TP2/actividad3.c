#include <stdio.h>
#include <string.h>
char palabra [30], palabraReve [30];
int i=0;
main(){
  printf("ingresa el palindromo\n");
   scanf("%s", palabra);
int posfin = strlen(palabra)-1;
for(i=0;i<=strlen(palabra);i++){
palabraReve[i]=palabra [posfin-i];
}
char palindromo=strcmp(palabraReve, palabra);
if(palindromo==0){

printf("es palindromo");

}
else {
printf("no es palindromo");
}
}//main

