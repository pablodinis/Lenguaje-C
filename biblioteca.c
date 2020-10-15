//Realizar programa para controlar varias bibliotecas usando estructuras dentro de estructuras

#include<stdio.h>
#include<string.h>
#define N 50

typedef struct{
	char nombre[N];
	char autor[N];
	int lleno;
}libro;

typedef struct{
	libro lib[10];
	char nombre[N];
	int lleno;
}biblioteca;

biblioteca bi[3];

void anadebi();
void anadeli();
void consulta();
void vacio();

int main()
{
	int op;
	char elegir;
	vacio();
	op=0;
	do{
		elegir='N';
		do{
			printf("Elige una opcion a realizar: \n");
			printf("(1)Añadir una nueva biblioteca\n");
			printf("(2)Añadir un nuevo libro\n");
			printf("(3)Consultar libro\n");
			printf("(4)Salir\n");			
			scanf("%i",&op);
		}while(op<1 || op>4);
		switch(op){
			case 1: {
				anadebi();
				break;
			}
			case 2:{
				anadeli();
				break;
			}
			case 3:{
				consulta();
				break;
			}
		}
		printf("\nQuiere hacer alguna otra consulta?(S/N): ");
		fflush(stdin);
		scanf("%c",&elegir);
		op=0;
		system("cls");
	}while(elegir=='S' || elegir=='s');
	
	system("pause");
	return 0;
	
}

void vacio() //inicializamos las bibliotecas y los libros de las mismas
{
	int i, j;
	
	for(i=0;i<3;i++)
	{
		bi[i].lleno=0;
		for(j=0;j<10;j++)
		{
			bi[i].lib[j].lleno=0;
		}
	}
	
}

void anadebi() //Añadimos biblioteca con su respectivo nombre
{
	int i, aux;
	aux=0;
	
	for(i=0;i<3 && aux==0;i++)
	{
		if(bi[i].lleno==0)
		{
			printf("Introduce un nombre a la biblioteca: ");
			fflush(stdin);
			fgets(bi[i].nombre,N,stdin);
			bi[i].lleno=1;
			aux=1;
		}
	}
	if(aux==0)
	{
		printf("SORRY! No queda ningun hueco libre para la biblioteca\n");
	}
}


void anadeli() //Vamos a añadir libro
{
	int i, j, aux, aux2, op;
	aux=0;
	aux2=0;
	
	for(i=0;bi[i].lleno==1 && i<3;i++) //aquí solo queremos saber si existe alguna biblioteca
	{
		if(bi[i].lleno==1)
		{
			printf("\n%i %s",i+1, bi[i].nombre);
			aux2=1;
		}
	}
			
	if(aux2==1) //si existe alguna vamos a añadir libro
	{
		printf("\nEn que biblioteca lo añadimos?");
		fflush(stdin);
		scanf("%i", &op);
	
		for(i=0;i<3 && aux==0;i++)
		{
			if(op-1==i)
			{
				for(j=0;j<10 && aux==0;j++) //recorremos los 10 huecos que tenemos para añadir en el que esté libre nuestro libro
				{
					if(bi[i].lib[j].lleno==0)
					{
						printf("\nIntroduce un nombre del libro: ");
						fflush(stdin);
						fgets(bi[i].lib[j].nombre,N,stdin);
						printf("\nIntroduce el nombre del autor: ");
						fflush(stdin);
						fgets(bi[i].lib[j].autor,N,stdin);
						bi[i].lib[j].lleno=1;
						aux=1;
					}
				}
			}
		}
		if(aux==0) 
		{
			printf("SORRY! No queda ningun hueco libre para el libro\n");
		}
	}
	else
	{
	printf("\nNo existe ninguna biblioteca\n");
	}
}

void consulta()
{
	int op, i, j, aux, aux2;
	char palabra[N];
	aux=0;
	aux2=0;
	
	for(i=0;i<3 && aux2==0;i++) //recorremos los vectores para ver si existen libros en nuestras bibliotecas
	{
		for(j=0;j<10 && aux2==0;j++)
		{
			if(bi[i].lib[j].lleno==1)
			{
				aux2=1;
			}
			
		}
	}
	
	if(aux2==1)
	{
		do
		{
			printf("\nQue quieres buscar: ");
			printf("\n(1)Por Nombre libro?");
			printf("\n(2)Por Nombre de autor?");
			scanf("%i",&op);
			switch(op){
				case 1:{
					printf("\nIntroduce el nombre del libro: ");
					fflush(stdin);
					fgets(palabra,N,stdin);
					for(i=0;i<3 && aux==0;i++)
					{
						for(j=0;j<10 && aux==0;j++)
						{
							if(strcmp(palabra,bi[i].lib[j].nombre)==0) //compara palabras entre strings devolviendo 0 en caso de que lo encuentre
							{
								printf("\nEl libro %s se encuentra en la biblioteca %s", palabra, bi[i].nombre);
								aux=1;
							}
						}
					}
					break;
				}
				case 2:{
					printf("\nIntroduce el nombre del autor: ");
					fflush(stdin);
					fgets(palabra,N,stdin);
					for(i=0;i<3 && aux==0;i++)
					{
						for(j=0;j<10 && aux==0;j++)
						{
							if(strcmp(palabra,bi[i].lib[j].autor)==0)
							{
								printf("\nEl libro %s se encuentra en la biblioteca %s", bi[i].lib[j].nombre, bi[i].nombre);
								aux=1;
							}
						}
					}
					break;
				}
			}
		}while(op<1 || op>2);
	}
	else
	{
		printf("\nNo insertaste ningun libro");
	}
}

		
		
