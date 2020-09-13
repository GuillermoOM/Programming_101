#include "stdafx.h"
#include "stdlib.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int years;
	long days;
	printf("Dame tu edad en años : ");
	scanf_s("%d", &years);
	days = years * 525600;
	printf("Tu tienes %d minutos de edad \n", &days);
	system("PAUSE");
}
