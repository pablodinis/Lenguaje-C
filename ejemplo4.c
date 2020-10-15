//ESTRUCTURAS CON PUNTEROS

#include<stdio.h>

typedef struct{
	int matemat;
	int ingles;
}notas;

void darnotas(notas *not);
void leernotas(notas *not);

int main()
{
	notas not;
	darnotas(not); //simplemente no tenemos que pasar la dirección de memoria con el &
	leernotas(not);
	
	system("pause");
	return 0;
	
}

void darnotas(notas *not)
{
	
	printf("Introduce nota mate: \n");
	scanf("%i",not->matemat); //tb valdria poner (*not).matemat
	printf("Introduce nota mate: \n");
	scanf("%i",not->ingles);
}


void leernotas(notas *not)
{
	
	printf("las notas son:mat %i y ingles %i \n",*not.matemat,*not.ingles);
}
