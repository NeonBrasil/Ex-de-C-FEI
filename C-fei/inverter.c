#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int numero, inverso = 0, temp;



  scanf("%d", &numero);

  // enquanto n�mero for diferente de zero
  while(numero != 0){
    // temp recebe o resto da divis�o do n�mero por 10
    temp = numero % 10;
    // e vamos guardando no inverso
    inverso = inverso * 10 + temp;
    // n�mero recebe ele dividido por 10
    numero = numero / 10;
  }

  // e agora mostramos o resultado
  printf("%d", inverso);


}
