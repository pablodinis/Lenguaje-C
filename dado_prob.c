//calcular las probabilidades de que salgan cada uno de los numeros de un dado con un vector usando punteros.
//calcular con 10000 interacciones

#include<stdio.h>

void numeros(int *dado);
void prob (int *dado);
void ver_numeros(int *dado);

int main(){
	
	int dado[6];
	
	numeros (dado);
	ver_numeros(dado);
	prob (dado);
		
	
	system("pause");
	return 0;
}

void numeros(int *dado){
	
	int i;
	
	for(i=0;i<6;i++)
	{
		*(dado+i)=i+1;
	}
}
void ver_numeros(int *dado)
{
	int i;
	
	for(i=0;i<6;i++)
	{
		printf("%i, ", *(dado+i));
	}
}


void prob (int *dado)
{
	int j, k, cont;
	cont=0;
	
	for(k=0;k<6;k++)
	{
		for (j=1;j<10000;j++)
		{
		
			if(*(dado+k)==k+1)
			{
				cont++;
			}
		}
		
		printf("\n\nla probabilidad de que salga %i, es de: %i por ciento\n", *(dado+k), (cont/6)/100);
		cont=0;
		
	}
	
	
	
}
