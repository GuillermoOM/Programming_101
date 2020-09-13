
#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int n = 50, a = 100;
	bool done = false;
	int r;
	printf("Adivinare el numero que estas pensando...");

	while (done != true){
		printf("\nEs tu numero %d? (s/g/m): ", n);
		r = getchar();
		getchar();
		a /= 2;
		switch (r)
		{
		case 'g':
			n += a;
			break;
		case 'm':
			n -= a;
			break;
		case 's':
			done = true;
			break;
		default:
			printf("\nIngrese una letra valida...");
			break;
		}
	}
	printf("Viva yo!!\n");
	system("PAUSE");
	return 0;
}

