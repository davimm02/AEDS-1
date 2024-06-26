#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int receba();
void string(char *str,int N);
int main(){
    int N;
    char *str;
    N=receba();
    char* bamos[N];
    for(int i=0;i<N;i++){
        bamos[i]=string();
    }
   
}
int receba(){
    int N;
    printf("Digita N");
    scanf("%d",&N);
    return N;
}
char* string(){
    char yo[100];
    char* bolsonaro;
    printf("digita string:");
    fgets(yo,100,stdin);
    bolsonaro=yo;
    return bolsonaro;

}