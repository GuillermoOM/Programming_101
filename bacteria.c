#include "stdio.h"
#include "stdlib.h"

void main(){
	unsigned long int tiempo = 0;
	double b = 10.0, a = 1;
	unsigned int intervalo, duracion;
	float p;

	printf("Ingrese la cantidad de bacterias primarias, escribiendo el exponente de 10: ");
	scanf("%d", &intervalo);

	for (size_t i = 0; i < intervalo; i++)
	{
		a *= 10;
		b *= 10;
	}

	printf("Da la duracion del programa en dias: ");
	scanf("%d", &duracion);

	printf("Da los intervalos para mostrar informacion (horas): ");
	scanf("%d", &intervalo);

	printf("Da el factor p: ");
	scanf("%f", &p);

	for (size_t i = 0; i < duracion; i++)
	{
		for (size_t n = 0; n < intervalo * 3600; n++){
			b *= (1 + p);
			a *= 10;
			tiempo++;
		}
		printf("n(%ld) = %.5f e+%.0f \n", tiempo, b, b / a);
	}
	
	system("PAUSE");
}

//n *= (1 + p)