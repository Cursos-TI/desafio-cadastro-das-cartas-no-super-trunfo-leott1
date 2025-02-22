#include <stdio.h>

int main() {
    // definindo variaveis intuitivas
    int qtdpon;
    char estado[50], nomecit[50], codcit[50];
    float  pop, area, pib, densp, pbp;
    
    // solicitando entradas do usuario
    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite o código da cidade: \n");
    scanf("%s", &codcit);

    printf("Digite o nome: \n");
    scanf("%s", &nomecit);

    printf("Digite a população: \n");
    scanf("%f", &pop);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &qtdpon);

    // realizando operacoes aritmeticas e armazenando nas variaveis para exibir resultado de densidade populacional e pib per capita
    densp = (float) (pop / area);
    pbp = (float) (pib / pop);

    // exbindo resultados

    printf("O estado é: %s\nO codigo de sua cidade é: %s\nO nome é: %s\n", estado, codcit, nomecit);
  
    printf("A população é:  %.2f\nA área é: %.2f\nO PIB é: %.2f\n", pop, area, pib);
   
    printf("A quantidade de pontos turísticos são: %d\n", qtdpon);

    printf("A densidade populacional é: %.2f\n", densp);
    
    printf("O pib percapita é: %.2f\n", pbp);
  


    return 0;
}
