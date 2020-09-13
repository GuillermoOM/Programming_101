#include "stdafx.h"
#include "stdlib.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int x, y, a, b, c = 0;
	printf("Escribe el valor de x: ");
	scanf_s("%d", &x);
	printf("Escribe el valor de a: ");
	scanf_s("%d", &a);
	printf("Escribe el valor de b: ");
	scanf_s("%d", &b);
	printf("Escribe el valor de c: ");
	scanf_s("%d", &c);
	y = a*x*x + b*x + c;
	printf("\nEl valor de Y es igual a: %d \n", y);
	system("PAUSE");
	return 0;
}