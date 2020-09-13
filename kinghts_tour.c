#include "stdio.h"
#include "stdlib.h"

void printea(int tabla[][8]);

void main(){
	int tablero[8][8], x, y, pc, pf, contador = 0, minimo, loop = 1, restantes;
	int vertical[] = {-1, -2, -2, -1, 1, 2, 2, 1};
	int horizontal[] = {2, 1, -1, -2, -2, -1, 1, 2};
	int movimientos[8][8] = {
			{ 2, 3, 4, 4, 4, 4, 3, 2 },
			{ 3, 4, 6, 6, 6, 6, 4, 3 },
			{ 4, 6, 8, 8, 8, 8, 6, 4 },
			{ 4, 6, 8, 8, 8, 8, 6, 4 },
			{ 4, 6, 8, 8, 8, 8, 6, 4 },
			{ 4, 6, 8, 8, 8, 8, 6, 4 },
			{ 3, 4, 6, 6, 6, 6, 4, 3 },
			{ 2, 3, 4, 4, 4, 4, 3, 2 } };

	for (size_t c = 0; c < 8; c++){
		for (size_t f = 0; f < 8; f++){
			tablero[c][f] = 0; //Asignar valor de cero a los elementos del tablero.
		}
	}

	puts("Este programa determinara si un caballo de ajedres puede hacer todos \nlos movimientos en una posicion dada.\n");
	puts("Da un lugar de inicio (1 - 8):");
	printf("x: ");
	scanf("%d", &x);
	printf("y: ");
	scanf("%d", &y);
	y--;
	x--;

	while (loop){
		contador++;
		tablero[x][y] = contador;
		movimientos[x][y] = 0;
		minimo = 9;
		restantes = 8;
		for (int i = 0; i < 8; i++)
		{
			if (restantes >= 0)
			{
				pc = x + horizontal[i];
				pf = y + vertical[i];

				if (pf >= 0 && pf < 8 && pc >= 0 && pc < 8 && tablero[pc][pf] == 0)
				{
					if (movimientos[pc][pf] < minimo)
					{
						--minimo;
						x = pc;
						y = pf;
						--restantes;
					}
				}
				else
				{
					--restantes;
				}
			}
			if (minimo == 9 && restantes == 0)
			{
				loop = 0;
				continue;
			}
		}
		printea(tablero);
	}//fin del while

	printf("Movimientos alcanzados: %d \n", contador);
	if (contador == 64)
	{
		puts("Se logro pasar por todos los espacios!");
	}
	else
	{
		puts("No se logro pasar por todos los lugares");
	}

	puts("\nEl recorrido fue: ");
	printea(tablero);


	system("PAUSE");
}

void printea(int tabla[8][8]){
	int row;
	int col;
	printf("   1  2  3  4  5  6  7  8\n");
	for (row = 0; row < 8; row++) {
		printf("%d", row);
		for (col = 0; col < 8; col++) {
			printf("%3d", tabla[row][col]);
		}
		printf("\n");
	}
	printf("\n");
}