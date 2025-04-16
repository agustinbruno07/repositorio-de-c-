//Actividad9
#include <stdio.h>
#include <string.h>
#include <ctype.h>
char oracion[30];
int opcion, i=0, alternar;
main(){
	printf("ingrese una oracion");
    fgets(oracion,sizeof(oracion),stdin);
	printf("Seleccione de lo siguiente que quiere realizar(ingrese el numero): \n1) Mostrar la oración toda en mayúscula \n2) Mostrar la oración todo en minúsculas \n3) Mostrar la oración alternando una mayúscula y una minúscula \n4) Mostrar la oración comenzando todas las palabras con mayúscula\n");
	scanf("%d", &opcion);
	
	int n=strlen(oracion)-1;
	
	switch(opcion){
		case 1:
		    for(i=0;i<n;i++){
		    	oracion[i]=toupper(oracion[i]);
			}
		
			break;
		case 2:
			    for(i=0;i<n;i++){
		    	oracion[i]=tolower(oracion[i]);
			}
		
			
		    break;	
		case 3:
		       for(i=0;i<n;i++) {
        		if((oracion[i] >= 'A' && oracion[i] <= 'Z') || (oracion[i] >= 'a' && oracion[i] <= 'z')){
            			
					if(alternar % 2 == 0){
                			oracion[i] = toupper(oracion[i]);
            			}
						 			
					
				else{
                			oracion[i] = tolower(oracion[i]);
            			}
            			
           
		  			alternar++;
        			}
   				}	
			
			
			break;
		case 4:
			for(i=0;i<n;i++){
				oracion[i]= tolower(oracion[i]);
			}
			if(n>0){
				oracion[0]= toupper(oracion[0]);
			}
			for (i = 0; i < n; i++) {
                if (oracion[i-1] == ' ') {
                    oracion[i] = toupper(oracion[i]);
                }
            }
			
			
			break;
		
		    
    
	}
	
	printf("La oracion es %s", oracion);
	
	
	
}//main
