//UN EJEMPLO DE PUNTEROS Y DE COMO COMPARTEN ESPACIO DE MEMORIA. AL PASAR POR REFERENCIA EST�N OCUPANDO EL MISMO ESPACIO DE MEMORIA Y
//POR TANTO PUEDES PASARLO A LAS FUNCIONES

#include<stdio.h>

void cambio (int *a, int *b, int z);

int main (){
	
	int x, y, *s, c;
	
	x=5;
	y= 10;
	c =20;
	s = &x;
	
	
	cambio (&x,&y,c); //le pasamos las direcciones de las variables
	
	printf("los valores de x es:%i, y es:%i, y s es:%i\n\n", x,y,*s);	
	printf("El valor de c sigue con el mismo valor de %i \n", c); //ya que al no pasarlo por referencia no ocupa la misma direcci�n de memoria


	system ("pause");
	return 0;
	
}

void cambio (int *a, int *b, int z){ //utilizo el m�todo de la burbuja con punteros
	
	int aux;
	
	aux=*a;
	*a=*b;
	*b=aux;
	
	z = 100;
}
