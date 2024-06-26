#include <stdio.h>
int main(void) {
//VARIAVEIS
int voto=3,i,c1=0,c2=0,c3=0,c4=0,nulo=0,total=0;
float branco;
//ENTRADA
while(voto!=0){
  scanf("%d",&voto);
  switch (voto){
    case 1:
    c1=c1+1;
    total=total+1;
    break;
    case 2:
    c2=c2+1;
    total=total+1;
    break;
    case 3:
    c3=c3+1;
    total=total+1;
    break;
    case 4:
    c4=c4+1;
    total=total+1;
    break;
    case 5:
    nulo=nulo+1;
    total=total+1;
    break;
    case 6:
    branco=branco+1;
    total=total+1;
    break;
    default:
    break;
  }
}
printf("%d %d %d %d\n",c1,c2,c3,c4);
printf("%d\n",nulo);
branco=(branco/total)*100;
printf("%.2f",branco);}
















































