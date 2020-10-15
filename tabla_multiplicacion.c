//escribe un programa que haga la tabla de multiplicar del 1 al 9


#include<stdio.h>

int main (){
	
	int i, j;
	
	for(i=1;i<=9;i++){
		for(j=1;j<=10;j++){
			
			printf("\nnumero %i x %i = %i ", i, j, i*j);
		}
	}
	
	
	
	system ("pause");
	return 0;
}
