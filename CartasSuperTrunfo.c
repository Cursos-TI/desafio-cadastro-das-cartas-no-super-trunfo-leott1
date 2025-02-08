#include <stdio.h>

int main() {
    // definindo variaveis 
    int qtdpon;
    char nomecit[50], codcit[50];
    double  pop, area, pib;

    // solicitando entradas do usuario, separados por tipo de variavel (char)
    printf("Digite o código da cidade: \n");
    scanf("%s", &codcit);

    printf("Digite o nome: \n");
    scanf("%s", &nomecit);

    // solicitando entradas do usuario, separados por tipo de variavel (double)
    printf("Digite a população: \n");
    scanf("%lf", &pop);

    printf("Digite a área: \n");
    scanf("%lf", &area);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib);

    // solicitando entradas do usuario, separados por tipo int
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &qtdpon);

    // exibindo entradas ao usuário separados por tipo char
    printf("O codigo de sua cidade é: %s\nO nome é: %s\n", codcit, nomecit);
  

    // exibindo entradas ao usuário separados por tipo double
    printf("A população é:  %lf\nA área é: %lf\nO PIB é: %lf\n", pop, area, pib);

    // exibindo entradas ao usuário separados por tipo int
    printf("A quantidade de pontos turísticos são: %d\n", qtdpon);
  


    return 0;
}
