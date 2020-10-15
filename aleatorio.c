#include<stdio.h>
#define N 10

void aleatorio(int *vector);

int main()
{
	int *vector;
	
	aleatorio(vector);
	
	system("pause");
	return 0;
	
}

void aleatorio(int *vector){

	int i;
	
	srand(time(NULL));
	
	for (i=0;i<N;i++){
		*(vector+i) = rand() % 3;
		printf("%i, ",*(vector+i));
	}	
}
