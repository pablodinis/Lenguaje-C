//escribe un programa para saber si un numero es primo


#include<stdio.h>

int main (){
	
	int num, i, j;
	
	printf("introduce un numero: ");
	scanf("%i",&num);
	
	i=num;
	j = 2;

	if(i<=2){
		printf("\nel numero SI es primo\n"); //si es 2 es primo y sino lo vamos a valorar
	}
	else{
		do
		{
			i = i % j;
			
			if(i==0){ //si el resto da 0 no es primo
		
				printf("\nel numero NO es primo\n");
				break;
			}
			
			j++;
			i = num;
			
				
		}while(j<num); //hacemos el bucle hasta que llega al numero introducido
		
		if(i!=0) //sj el resto es diferente de 0 entonces SI es primo
		{
			printf("\nel numero SI es primo\n");
	
		}	
	}
		
	system ("pause");
	return 0;
}
