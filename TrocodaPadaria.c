#include <stdio.h>
int main(){
  int paes, troco;
  scanf("%d", &paes);
  troco=50-paes;
  if(troco>5){
    troco=0;
  }
  printf("%d\n",troco);
  return 0;
}
