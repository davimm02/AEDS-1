#include <stdio.h>

int main(void) {
  // ENTRADA DOS DADOS
  double nota1;
  double nota2;
  double nota3;
  double resultado;

  printf("Digite a primeira nota: ");
  scanf("%lf", &nota1);
  printf("Digite a segunda nota: ");
  scanf("%lf", &nota2);
  printf("Digite a terceira nota: ");
  scanf("%lf", &nota3);

  // PROCESSAMENTO
  resultado = (nota1 + nota2 + nota3) / 3;

  // SAÍDA
  printf("Este foi seu resultado: %lf\n", resultado);

  // VERIFICAÇÃO DE APROVAÇÃO
  if (resultado >= 60) {
    printf("Aprovado\n");
  } else {
    printf("Reprovado\n");
  }

  return 0;
}
