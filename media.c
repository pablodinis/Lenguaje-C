//Realizar un programa que calcule la media de x numeros introducidos por el teclado.

#include<stdio.h>

int main ()
{
	int cont, cont1, cont2, i;
	
	cont=0; //contador de la suma total de numeros
	cont1 = 0; //contador de numeros
	cont2 = 0; //contador de media
	
	printf ("Introduzca un numero: "); //variable en la que sumo numeros
	scanf("%i",&i);
	cont = cont +i; 
	
	while(i!=0)
	{
		printf ("\nIntroduzca un numero: ");
		scanf("%i",&i);
		cont = cont +i;
		cont1++;
		
	}
	
	if(cont!=0){
		cont2 = cont / cont1;
	
		
	}
	else{
		cont2=0;
	}
	
	printf("\n la suma de todo es: %i ", cont);
	printf("\n numeros introducidos son: %i ", cont1);
	
	printf("\n la media es: %i \n\n", cont2);
	
	
	
	system ("pause");
	return 0;
}
