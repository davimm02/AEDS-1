#include <stdio.h>
int main(void) {
//VARIAVEIS
int original,novo,temp;
//ENTRADA
scanf("%d",&original);
while(original>=10){
  temp=original%10;
  novo=novo*10+temp;
  original=original/10;
}
novo=novo*10+original;
printf("%d",novo);






























}