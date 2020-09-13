#include "stdio.h"
#include "stdlib.h"

int suma_matriz(int af, int bc, int ac, int bf, int x[af][ac], int y[bf][bc], int z[af][bc]);
int resta_matriz(int af, int bc, int ac, int bf, int x[af][ac], int y[bf][bc], int z[af][bc]);
int multiplica_matriz(int af, int bc, int ac, int bf, int x[af][ac], int y[bf][bc], int z[af][bc]);
void imprimir(int af, int ac, int bf, int bc, int x[af][ac], int y[bf][bc], int z[af][bc]);

int main(){
  unsigned int af, ac, bf, bc, i, j, k;
  char c;
  printf("Escribe el tipo de operacion que deseas realizar: \nA: Suma \nB: Resta \nC: Multiplicaci�n\n ");
  c = getchar();
  printf("\nNumero de renglonesde la matriz  A-->");
  scanf("%d", &af);
  printf("Numero de columnas de la matriz  A-->");
  scanf("%d", &ac);
  printf("Numero de renglones de la matriz B-->");
  scanf("%d", &bf);
  printf("Numero de columnas de la matriz  B-->");
  scanf("%d", &bc);
  if(ac!=bf){
             printf("no es posible hacer la multiplicacion\n");
             system("PAUSE");
             return 0;
  }
  if (ac != bc && af != bf)
  {
	  printf("no es posible hacer las operaciones suma/resta\n");
	  system("PAUSE");
	  return 0;
  }
  int A[af][ac], B[bf][bc], C[af][bc]; /*Rutina para cargar los valores*/
  for(i=0;i<af;i++){
      for(j=0;j<ac;j++){
          printf("Escribe el valor de la matriz 1 (%d, %d)-->",i+1, j+1);
          scanf("%d", &A[i][j]);
      }
  }
  printf("\n\n");
  for(i=0;i<bf;i++){
      for(j=0;j<bc;j++){
          printf("Escribe el valor de la matriz 2 (%d, %d)-->", i+1, j+1);
          scanf("%d", &B[i][j]);
      }
  }

  switch (c)
  {
  case 'A':
  case 'a':
    // Suma
    suma_matriz(af, bc, ac, bf, A, B, C);
    imprimir(af, ac, bf, bc, A, B, C);
  case 'B':
  case 'b':
    // Resta
    resta_matriz(af, bc, ac, bf, A, B, C);
    imprimir(af, ac, bf, bc, A, B, C);
  case 'C':
  case 'c':
    // Multiplicaci�n
    multiplica_matriz(af, bc, ac, bf, A, B, C);
    imprimir(af, ac, bf, bc, A, B, C);

  default:
	  break;
  }
  system("PAUSE");
}

/*  Suma  */
int suma_matriz(int af, int bc, int ac, int bf, int x[af][ac], int y[bf][bc], int z[af][bc])
{
    int i,j;
    for(i=0;i<af;i++){
      for(j=0;j<bc;j++){
          z[i][j]=x[i][j]+y[i][j];
      }
    }
}

/*  Resta  */
int resta_matriz(int af, int bc, int ac, int bf, int x[af][ac], int y[bf][bc], int z[af][bc])
{
    int i, j;
    for(i=0;i<af;i++){
        for(j=0;j<bc;j++){
            z[i][j]=x[i][j]-y[i][j];
        }
    }
}

/*  Multiplicaci�n  */
int multiplica_matriz(int af, int bc, int ac, int bf, int x[af][ac], int y[bf][bc], int z[af][bc])
{
    int i, j, k;
    for(i=0;i<af;i++){
        for(j=0;j<bc;j++){
            z[i][j]=0;
            for(k=0;k<ac;k++){
                z[i][j]=(z[i][j]+(x[i][k]*y[k][j]));
            }
        }
    }

}
/*  Rutina para imprimir  */
void imprimir(int af, int ac, int bf, int bc, int x[af][ac], int y[bf][bc], int z[af][bc])
{
    int i,j;
  printf("\n\n\t\t\t Matriz A");
  printf("\n");
  for(i=0;i<af;i++){
      printf("\n\t\t");
      for(j=0;j<ac;j++){
          printf("  %6d  ", x[i][j]);
      }
  }
  printf("\n\n\t\t\t Matriz B");
  printf("\n");
  for(i=0;i<bf;i++){
      printf("\n\t\t");
      for(j=0;j<bc;j++){
          printf("  %6d  ", y[i][j]);
      }
  }

  printf("\n\n\t\t\t Matriz C");
  printf("\n");
  for(i=0;i<af;i++){
      printf("\n\t\t");
      for(j=0;j<bc;j++){
          printf("  %6d  ", z[i][j]);
      }
  }
  printf("\n");
}