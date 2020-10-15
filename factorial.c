//escribe un programa que haga el factorial de un numero


#include<stdio.h>

int main (){
	
	int i, j, k;
	
	j=1;
	
	printf("\nIntroduce un numero: ");
	scanf("%i",&i);
	
	for(k=1;k<=i;k++){
		j = j * k;
	}	
	
	printf("\nel factorial es: %i \n", j);
	
	
	system ("pause");
	return 0;
}
