//ordenar un vector de 10 enteros de mayor a menor mediante una función

#include <stdio.h>

void cambio (int a[]);
void ver_orden (int b[]);

int main()
{
	int v[10]={7,2,3,8,4,5,12,6,1,9};
	
	cambio(v);
	
	ver_orden(v);
	
	system("pause");
	
	return 0;	
	
}

void cambio (int a[]){
	
	int i,j,aux;
	
	for(i=0;i<10;i++){
		for(j=i;j<10;j++){
			if(a[i]<a[j]){
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			}	
		}
		
	}
	
	
}

void ver_orden (int b[]){
	
	int i;
	
	for(i=0;i<10;i++)
	{
		printf(" %i, ", b[i]);
	}	
	
	
	
}

