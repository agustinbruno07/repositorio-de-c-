#include <stdio.h>
float numero1, numero2;
float sumar(float *n1, float *n2);
float promedio(float *n1,float *n2);
main(){
	printf("Ingrese el primer numero\n");
	scanf("%f", &numero1);
	printf("ingrese el segundo numero\n");
	scanf("%f", &numero2);
	float resuProm = promedio(&numero1,&numero2);
	float resuSum = sumar(&numero1,&numero2);
	printf("Los numeros sumados es %f\n", resuSum);
	printf("El resultado del promedio es %f", resuProm);
}
float sumar(float *n1, float *n2){
	return *n1 + *n2;
}
float promedio(float *n1,float *n2){
	float acum = sumar(n1,n2);
	return acum / 2;
}
