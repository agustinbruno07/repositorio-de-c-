#include <stdio.h>

char letra1,letra2;
void intercambio(char *l1,char *l2);
main(){
        printf("ingrese la letra1");
        scanf(" %c", &letra1);
        printf("ingrese la letra2");
        scanf(" %c", &letra2);
        intercambio(&letra1,&letra2);
        printf("la letra1 es %c\n", letra1);
        printf("la letra2 es %c\n", letra2);
        
	
}
void intercambio(char *l1,char *l2){
	char temp = *l1;
    *l1=*l2;
	*l2=temp;
}

