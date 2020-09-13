/* Escribe un programa en C que reciba como entrada dos numeros 
y evalue las condiciones, es igual, no es igual, es menor que, es mayor que,
es menor o igual a, es mayor o igual a.*/


#include "stdafx.h"
#include "stdlib.h"

int main()
{
	int a, b;
	printf("Escriba dos numeros: \n");
	printf("a: ");
	scanf_s("%d", &a);
	printf("b: ");
	scanf_s("%d", &b);

	if (a == b){
		printf("\n%d es igual que %d \n", a, b);
	}
	else if (a < b){
		printf("\n%d es menor que %d \n", a, b);
	}
	else if (a > b){
		printf("\n%d es mayor que %d \n", a, b);
	}
	printf("\n");
	system("PAUSE");
	return 0;
}

