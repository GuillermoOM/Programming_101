

#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int maxcd(int x, int y)
{
	int z;
	if (x<y){
		z = x;
		x = y;
		y = z;
	}
	if (x == 0 || y == 0){
		if (x == 0 && y != 0){
			return y;
		}

		else if (x != 0 && y == 0){
			return x;
		}
	}

	else{
		return maxcd(x%y, y);
	}
}

int reversa(int n){
	int r = 0;
	while (n > 0){
		r *= 10;
		r += n % 10;
		n /= 10;
	}
	return r;
}

double exp_pos(double num, unsigned int exp){
	switch (exp){
	case 0:
		return 1;
		break;
	case 1:
		return num;
		break;
	default:
		return num*(exp_pos(num, --exp));
	}
}

void main(){
	int programa;
	int fin = 0;
	int num1;
	int num2;
	double x;
	unsigned int y;
	int z;
	printf("Bienvenido, elige la tarea escribiendo su numero: \n");
	while (fin == 0){
		printf("\n0: Cerrar programa");
		printf("\n1: Maximo comun divisor");
		printf("\n2: Escribe un numero en reversa");
		printf("\n3: Elevador de flotantes\n");
		scanf("%d", &programa);
		printf("\n");
			switch (programa)
			{
			case 0:
				fin = 1;
				continue;

			case 1:
				printf("Se calculara el maximo comun divisor de dos numeros. Por favor, introduzca dos numeros pulsando enter al introducir cada uno:\n");
				scanf("%d", &num1);
				scanf("%d", &num2);
				printf("El maximo comun divisor es %d\n", maxcd(num1, num2));
				break;

			case 2:
				printf("Se escribira en reversa el numero que quiera introducir:\n");
				scanf("%d", &num1);
				printf("El numero %d en reverza es %d\n", num1, reversa(num1));
				break;

			case 3:
				printf("Se calculara un numero elevado a un exponente \"positivo\". Por favor, introduzca el valor de la base, despues, el exponente:\n");
				scanf("%lf", &x);
				scanf("%u", &y);
				printf("El resultado es %.4lf\n", exp_pos(x, y));
				break;

			default:
				printf("\nERROR: No hay programa con ese numero.\n");
				break;
			}
			printf("\nDesea ejecutar otra tarea?");
	}
	system("PAUSE");
}