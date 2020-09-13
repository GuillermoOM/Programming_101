#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int dado1;
int dado2;

int tiro(){
	dado1 = 1 + (rand() % 6);
	dado2 = 1 + (rand() % 6);
	return dado1 + dado2;
}

int main()
{
	system("color 1F");
	srand(time(NULL));
	bool activo = true;
	int contador = 1;
	int primero = tiro();
	int dados;

	printf("               ______ \n");
	printf("   .-------.  /\\     \\ \n");
	printf("  /   o   /| /o \\  o  \\ \n");
	printf(" /_______/o|/   o\\_____\\ \n");
	printf(" | o     | |\\o   /o    / \n");
	printf(" |   o   |o/ \\ o/  o  / \n");
	printf(" |     o |/   \\/____o/ \n");
	printf(" '-------'");
	printf("\nJuguemos craps!\n");
	printf("\nPrimer tiro: %d + %d = %d", dado1, dado2, primero);

	switch (primero)
	{
	case 7:
	case 11:
		activo = false;
		printf("\nQue suerte! ganaste a la primera!");
		break;
	case 2:
	case 3:
	case 12:
		activo = false;
		printf("\nBuuu! perdiste a la primera! vaya...");
		break;
	default:

		break;
	}

	while (activo)
	{
		dados = tiro();
		contador++;
		printf("\n%d + %d = %d", dado1, dado2, dados);
		if (dados == 7){
			activo = false;
			printf("\nPerdiste! total de tiros: %d", contador);
			//pierde
		}
		else if (dados == primero){
			activo = false;
			printf("\nGanaste! total de tiros: %d", contador);
			//gana
		}
	}
	printf("\n");
	system("PAUSE");
	return 0;
}