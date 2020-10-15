//calcular el factorial de dos numeros con una función

#include<stdio.h>

int factorial(int i);


int main (){
	
	int i, l, fact;
	
	
	printf("\nIntroduce un numero 1: ");
	scanf("%i",&i);
	
	printf("\nIntroduce un numero 2: ");
	scanf("%i",&l);
	
	fact=factorial(i);
	
	printf("\nel factorial del primer numero es: %i \n", fact);
	
	fact=factorial(l);
	printf("\nel factorial del segundo numero es: %i \n\n", fact);
	
	system ("pause");
	return 0;
}

int factorial(int i){
		
		int j, k;
		
		j=1;
		
		for(k=1;k<=i;k++){
		j = j * k;
	}	
	
	
	return j;
	
}
