#include <stdio.h>
int main(void) {
  int idade_mae, idade_f1, idade_f2, idade_f3;

  //ENTRADA
  scanf("%d", &idade_mae);
  while (idade_mae < 40 || idade_mae > 110) {
      scanf("%d",&idade_mae);
  }
  scanf("%d", &idade_f1);
  while (idade_f1 < 1 || idade_f1 >= idade_mae) {
      scanf("%d", &idade_f1);
  }
  scanf("%d", &idade_f2);
  while (idade_f2 < 1 || idade_f2 >= idade_mae || idade_f2 == idade_f1) {
      scanf("%d", &idade_f2);
  }
  idade_f3 = 0;
  //PROCESSAMENTO
  idade_f3 = idade_mae - idade_f1 - idade_f2;
  if (idade_f1 > idade_f2 && idade_f1 > idade_f3) {
    printf("%d",idade_f1);
  } else if (idade_f2 > idade_f1 && idade_f2 > idade_f3) {
    printf("%d",idade_f2);
  } else if (idade_f3 > idade_f1 && idade_f3 > idade_f2) {
    printf("%d",idade_f3);
  } else {
    printf("Não existe apenas um irmão mais velho");
  }
}




















  
