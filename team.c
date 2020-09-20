#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define COLUNAS 3
int main(){
  int n; //num de problemas
  scanf("%d", &n);
  int **mE, soma=0;
  mE = (int**)malloc( n * sizeof(int*));
// alocando cada uma das linhas da matriz
int i,j;
for(i = 0; i <n; i++){
  mE[i] = (int*)malloc(COLUNAS * sizeof(int));
}
  for (i = 0; i <n; i++)
  {
    for(j = 0; j <COLUNAS; j++)
    {
      scanf("%d", &mE[i][j]);
    }
  }
  int aux=0;
  for (i = 0; i <n; i++)
  {
    for(j = 0; j <COLUNAS; j++)
    {
      soma=soma+mE[i][j];

    }

    if(soma>=2){
      aux=aux+1;
    }
    soma=0;
  }
  printf("%d\n",aux);
  for(i = 0; i <n; i++){
    free(mE[i]);
  }
  free(mE);

  return 0;
}
