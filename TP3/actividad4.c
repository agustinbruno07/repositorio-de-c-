#include <stdio.h>
int numeros[5], numerosCopiados[5], n=5, i=0;
void copiar(int i, int *n);
main(){
	for(i=0;i<n;i++){
		printf("ingrese un numero");
		scanf("%d", &numeros[i]);
	}
	for(i=0;i<n;i++){
		copiar(i,&numeros[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\n", numerosCopiados[i]);
	}
	
}
void copiar(int i, int *n){
	numerosCopiados[i] = *n;
}
