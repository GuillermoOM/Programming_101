#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int rotacion[30];

void ciclar(char palabra[], int a){
	size_t l = strlen(palabra);
	for (size_t i = 0; i < l; i++)
	{
		rotacion[i] = i + a;
		while (rotacion[i] >(l - 1)){
			rotacion[i] -= l;
		}
		printf("%c", palabra[rotacion[i]]);
	}
	puts("\n");
}

void main(){
	char word[30];
	printf("Ingrese la palabra a ciclar (maximo 30 caracteres): ");
	gets(word);
	for (size_t i = 0; i < strlen(word); i++)
	{
		ciclar(word, i);
	}
	puts("\n");
	system("PAUSE");
}