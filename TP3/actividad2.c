#include <stdio.h>
float calcuSuma(float *num1,float *num2);
float calcuProm(float *num1,float *num2);
main(){
	float num1,num2;
	
	printf("ingrese el primer numero ");
	scanf("%f", &num1);
	printf("ingrese el segundo numero ");
	scanf("%f", &num2);
	float resuSuma=calcuSuma(&num1,&num2);
	float resuProm=calcuProm(&num1,&num2);
	printf("El resultado de la suma es %f\n", resuSuma);
	printf("El resultado del promedio es %f\n", resuProm);
	
}//main
float calcuSuma(float *num1, float *num2){
	return *num1 + *num2;
}
float calcuProm(float *num1, float *num2){
		float acum = calcuSuma(num1,num2);
		return acum / 2;
}

