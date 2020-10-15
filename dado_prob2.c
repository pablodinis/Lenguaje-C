//calcular las probabilidades de que salgan cada uno de los numeros de un dado con un vector usando punteros.
//calcular con 10000 interacciones

#include<stdio.h>

void numeros(int *dado);
void ver_numeros(int *dado);

int main(){
	
	int dado[]={0,0,0,0,0,0};
	
	numeros (dado);
	ver_numeros(dado);
	
		
	
	system("pause");
	return 0;
}

void numeros(int *dado)
{
	int i, aux;
	srand(time(NULL));
	
	
	for(i=0;i<10000;i++)
	{
		aux=rand()%6;
		
		switch(aux){
			
			case 0: {
				*(dado+aux)=*(dado+aux)+1;
				break;
			}
			case 1: {
				*(dado+aux)=*(dado+aux)+1;
				break;
			}
			case 2: {
				*(dado+aux)=*(dado+aux)+1;
				break;
			}
			case 3: {
				*(dado+aux)=*(dado+aux)+1;
				break;
			}
			case 4: {
				*(dado+aux)=*(dado+aux)+1;
				break;
			}
			case 5: {
				*(dado+aux)=*(dado+aux)+1;
				break;
			}
		}
	}	
}
void ver_numeros(int *dado)
{
	int i;
	float j;
	for(i=0;i<6;i++)
	{
		j=0;
		j=(*(dado+i)*100.)/10000.;
		printf("el numero total de veces %i es %f\n\n",i+1,j);
	}
		
}
