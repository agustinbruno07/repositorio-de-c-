#include <stdio.h>

int letra1, letra2;
void intercambiar(int *l, int *l2);
main(){
	printf("Ingrese la primera palabra");
	scanf("%d", &letra1);
	printf("ingrese la segunda palabra");
	scanf("%d", &letra2);
	intercambiar(&letra1,&letra2);
    
    printf("La primera palabra ahora es %d", letra1);
    printf("La segunda palabra ahora es %d", letra2);
    
}//main
void intercambiar(int *l, int *l2){
	char temp = *l;
	*l = *l2;
	*l2 = temp;
}//intercambiar
