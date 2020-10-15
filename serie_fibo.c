//escribe un programa que haga la serie de fibonacci


#include<stdio.h>

int main (){
	
	int i, j, x, l, acum1, acum2;
	
			
	printf("\nIntroduce un numero: ");
	scanf("%i",&x);
	
	if(x<2)
	{
		if(x==0)
		{
			
			printf("la series es 0 \n");
		}
		else{
			
			printf("la series es 0 ,1\n");
		}
	}
	else{
		acum2=0; //numero 1º
		acum1=1;	//numero que va por delante (2º)
		printf("la serie de fibonacci es: 0 ,1");
		for(i=2;i<=x;i++)
		{
					
			j = acum1+acum2;
			
			acum2=acum1;
			acum1=j;
			
						
			printf(", %i",j);
			system("pause");
		}
		printf("\n");
	}
	
	
	system ("pause");
	return 0;
}
