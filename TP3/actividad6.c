#include <stdio.h>

int arreglo[100], elemento, cantidad, tamanio;
int contarOcurrencias(int *arr, int elem, int tam);
main() {
    int i;
    
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tamanio);
    
    printf("Ingrese los elementos del arreglo:\n");
    for(i = 0; i < tamanio; i++) {
        scanf("%d", &arreglo[i]);
    }
    
    printf("Ingrese el elemento a buscar: ");
    scanf("%d", &elemento);
    
    cantidad = contarOcurrencias(arreglo, elemento, tamanio);
    
    printf("El elemento %d aparece %d veces.\n", elemento, cantidad);
    
    return 0;
}

int contarOcurrencias(int *arr, int elem, int tam) {
    int contador = 0;
    int i;
    
    for(i = 0; i < tam; i++) {
        if(*arr == elem) {
            contador++;
        }
        arr++;
    }
    
    return contador;
}

