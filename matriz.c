//programa que mete numeros aleatorios en una matriz

#include<stdio.h>

void numeros (int matriz[][5]);
void ver_numeros (int matriz[][5]);

int main()
{
	int matriz[5][5];
	
	numeros(matriz);
	ver_numeros(matriz);
	
	system("pause");
	return 0;
	
}

void numeros (int matriz[][5])
{
	int i,j;
	
	srand(time(NULL));
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			matriz[i][j]=rand()%10;
		}
	}
		
}
void ver_numeros (int matriz[][5])
{
	int i,j;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
				printf("%i, ",matriz[i][j]);
		}
		printf("\n");
	}
		
}
