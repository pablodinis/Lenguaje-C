//Realizar un programa que imprima la suma de los numeros pares entre dos y mil

#include<stdio.h>

int main ()
{
	int j=2;
	
	
	while(j<=100)
	{
		printf("la suma de los numeros pares con while es: %i, \n",j);
		j = j + 2;
		//system ("pause");
	}
	
	
	printf("\n\n");
	
	for(j = 2; j <= 100; j += 2){
	
		printf("\nla suma de los numeros pares con for es: %i, ",j);
		
	}
	

	system ("pause");
	return 0;
}
