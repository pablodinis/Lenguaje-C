//escribe un programa que lea los numeros y muestre por pantalla todos los numeros comprendidos entre esos numeros


#include<stdio.h>

int main (){


	int i, j, k;
	
	printf("\nIntroduce un numero: ");
	scanf("%i",&i);
	
	do{
		
		printf ("\nIntroduce un numero mayor al anterior: ");
		scanf("%i",&k);
		
	}while (i>k);
	

		
	for(j=i+1;j<k;j++){
					
			printf("\n\nel numero en pantalla es: %i \n", j);		
	}
	

	system ("pause");
	return 0;
	
	
}

