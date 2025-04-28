#include <stdio.h>
int numeros[5], i, menor, mayor, posi_men, posi_may;

void buscaMayor(int *May, int i);
void buscaMenor(int *Men, int i);
main(){
	for(i=0;i<5;i++){
		printf("ingrese el numero %d\n",i);
		scanf("%d", &numeros[i]);
	}
	mayor = menor = numeros[0];
	posi_may = posi_men = 0;
	for(i=0;i<5;i++){
		buscaMayor(&numeros[i], i);
		buscaMenor(&numeros[i], i);
	}
	printf("El numero mayor encontrado es %d\n", mayor);
	printf("El numero menor encontrado es %d", menor );
	
}
void buscaMayor(int*May, int i){
	if(*May> mayor){
		mayor = *May;
		posi_may = i;
	}
}
void buscaMenor(int *Men, int i){
	if(*Men<menor){
		menor = *Men;
		posi_men =i;
	}
}

