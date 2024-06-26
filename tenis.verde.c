#include <stdio.h>
#include <stdbool.h>
int main(void) {
//VARIAVEIS
int contagem = 0;
char letra;
int i;
for(i=1;i<7;i++){
scanf(" %c",&letra);
switch (letra){
  case 'V':
  contagem=contagem+1;
  break;
  case 'P':
  break;
  default:
  printf("Apenas aceitamos V ou P, tente novamente\n");
  i=i-1;
}
}
  if(contagem==6 || contagem==5){
    printf("3");
  }
   if(contagem==4 || contagem==3){
     printf("2");
   }
  if(contagem==2 || contagem==1){
    printf("1");}
 if (contagem==0) {
    printf("-1");
  }

























  
}