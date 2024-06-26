#include <stdio.h>

int main() {
    int n1,n2;

  
    scanf("%d", &n1);
    scanf("%d", &n2);
    for (int num = n1; num <= n2; num++) {
        int ehPrimo = 1; 
        if (num <= 1) {
            ehPrimo = 0; 
        }
        for (int i = 2; i<= num/2; i++) {
            if (num % i == 0) {
                ehPrimo = 0; 
                break; 
            }
        }
        if (ehPrimo) {
            printf("%d ", num);
        }
    }
}




