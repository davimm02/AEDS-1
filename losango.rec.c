#include <stdio.h>

void UPlosango(int X, int yeah);
void NAHlosango(int X, int yeah);

int main(void) {
int N; 
//printf("digite quantas linha sera o mano LOS\n");
scanf("%d",&N);
if(N%2==0){
  UPlosango(N,0);
  NAHlosango(N,N);
} else {
  UPlosango(N,1);
  NAHlosango(N,N-2);
}
}

void UPlosango(int X,int yeah){
  if(X>0 && yeah<=X){
    for(int i=1;i<=yeah;i++){
      printf("*");
    }
    printf("\n");
    UPlosango(X,yeah+2);
  }
}
void NAHlosango(int X,int yeah){
  if(X>0 && yeah>0){
    for(int i=yeah;i>0;i--){
       printf("*");
    }
    printf("\n");
    NAHlosango(X,yeah-2);
  }
}