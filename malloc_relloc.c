//realizar un vector dinamico de 10 elementos aleatorios comprendidos entre 0 y 2 y eliminar todos los numeros repetidos
//reajustando el vector

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void aleatorio(int *vector, int N);

int main()
{
	int N = 10;
	int *vector;
	int i, j, k;
	
	vector = (int*)malloc(N*sizeof(int)); //creamos el vector dinámico
	
	if(vector==NULL)
	{
		printf("Espacio mal asignado");
	}
	else{
		aleatorio(vector, N);  //función que asigna valores aleatorios a nuestro vector dinámico
	
		for(i=0;i<N;i++)
		{
			j=i+1;
			while(j<N)
			{
				if(*(vector+i)==*(vector+j)) //comparamos si la celda siguiente celda es igual que la de origen
				{
					for(k=j;k+1<N;k++) //substituimos nuestras siguientes filas por nuestro numero repetido y restamos una celda menos
					{
						*(vector+k)=*(vector+k+1);  
					}
					N--;
				}
				else{
					j++;
				}
				
			}
		}
		vector=(int*)realloc(vector,N*sizeof(int));  //redimensionar el vector modificado
		printf("\n\n");
		for(i=0;i<N;i++)
		{
			printf("%i, ",*(vector+i));
		}
		
	}
	
	system("pause");
	return 0;
}


void aleatorio(int *vector, int N)
{
	int i;
	
	srand(time(NULL));
	
	
	for (i=0;i<N;i++){
		*(vector+i) = rand() % 3;
		printf("%i, ",*(vector+i));
	}
	
}




