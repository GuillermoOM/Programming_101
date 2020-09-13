#include "stdio.h"
#include "stdlib.h"

/*declaracion de variables globales*/
float a, b;
char o, c;

/*funcion main*/
int main()
{
	printf("Escriba la operacion a emplear: \n");

	while (c != EOF) {
		scanf_s("%f%c%f", &a, &o, &b);
		switch (o){
		case '+':
			printf("\n\n%d %c %d = %d\n\n", a, o, b, a + b);
			break;
		case '-':
			printf("\n\n%d %c %d = %d\n\n", a, o, b, a - b);
			break;
		case '*':
			printf("\n\n%.2f %c %.2f = %.2f\n\n", a, o, b, a*b);
			break;
		case '/':
			if (b != 0){
				printf("\n\n%.2f %c %.2f = %.2f\n\n", a, o, b, a / b);
			}
			else{
				printf("No se puede dividir entre 0");
			}
			break;
		default:
			printf("Operador incorrecto. Ponga otro operador.");
			break;
		}
		printf("si deseas salir escribe ctrl + z y presiona enter...");
		c = getchar();
	}
	return 0;
}