#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int recebaN();
char recebaS();
int main(void) {
  int N;
   N= recebaN();
  char *i;
  char *j;
  int tamanho[N],confia=0,y=0,lex=0;
  char bolso[N][100];
  for(int h=0;h<N;h++){
    //printf("Digite a string %d\n",h+1);
    fgets(bolso[h],100,stdin);
    tamanho[h]=strlen(bolso[h]);
    if(tamanho[h]>confia){
      confia=tamanho[h];
      y=h;
    }
    if(strcmp(bolso[h],bolso[lex])>0){
      lex=h;
    }
}
//printf("maior tamanho string:\n");
printf("%s\n",bolso[y]);
//printf("maior alfabeto:\n");
printf("%s\n",bolso[lex]);
}

int recebaN(){
  int N;
  //printf("Digitw um numero\n");
  scanf("%d",&N);
  getchar();
  return N;
}
/*char recebaS(){
  
  printf("Digite a string q sera utlizada:");
  
}*/