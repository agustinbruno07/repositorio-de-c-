#include <stdio.h>

int i=0, numeros[5], n=5,menor,mayor, posi_menor,posi_mayor;
void buscaMayor(int *May, int i);
void buscaMenor(int *Men, int i);
int main(){
	for(i=0;i<n;i++){
	  printf("ingrese el numero %d", i);
	  scanf("%d", &numeros[i]);
	}
	 mayor = menor = numeros[0];
    posi_mayor = posi_menor = 0;
	for(i=0;i<n;i++){
		buscaMayor(&numeros[i], i);
		buscaMenor(&numeros[i], i);
	}
	printf("El numero mayor es %d y su posicion %d\n", mayor, posi_mayor);
	printf("El numero menor es %d y su posicion %d", menor,posi_menor);
}//main
void buscaMayor(int *May,int i){
	if( *May > mayor){
		mayor = *May;
		posi_mayor=i;
	}
}
void buscaMenor(int *Men, int i) {
    if (*Men < menor) {
        menor = *Men;
        posi_menor = i;
    }
}
