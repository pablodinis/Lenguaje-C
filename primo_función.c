//comprobar si dos numeros diferentes son primos con una función

#include<stdio.h>


int primo (int a);
int primo2 (int prim, int num);



int main (){
	
	int i, j, prim;
	
	
	printf("Escribe el numero 1: ");
	scanf("%i", &i);
	
	printf("\nEscribe el numero 2: ");
	scanf("%i", &j);
	
	prim = primo (i);
	
	primo2(prim,i);
	
	prim = primo (j);
	
	primo2(prim,j);
	
	
	
	system ("pause");
	return 0;
}


int primo (int a){
	
	int j, y, n;
	
	n=0;
	
	for(j=2;j<a && n!=1;j++)
		{
			y=a;
						
			y = y % j;
			
				if(y==0)
				{
					n=1;
					
				}	
						
		}
	
		return n;
	
}


int primo2 (int prim, int num){
	
	if(prim==0)
	{
		printf("\nel numero %i SI es primo: ", num);
	}
	else
	{
		printf("\nel numero %i NO es primo: ", num);
	}
	
	
}
	

	
