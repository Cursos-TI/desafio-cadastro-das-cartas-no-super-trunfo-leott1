#include <stdio.h>

int main() {
    // definindo variaveis intuitivas
    int qtdpon;
    int qtdpon1;
    int comp;
    unsigned long int pop1, pop;
    char estado[50], nomecit[50], codcit[50];
    char estado1[50], nomecit1[50], codcit1[50];
    float area, pib, densp, pbp, sup;
    float area1, pib1, densp1, pbp1, sup1;
    
    // solicitando entradas do usuario Carta0
    printf("Insira as propriedades da primeira carta: \n"); //instrução para usuário
    printf("Digite o estado: \n");
    scanf("%s", &estado);
    
    printf("Digite o código da cidade: \n");
    scanf("%s", &codcit);
    
    printf("Digite o nome: \n");
    scanf("%s", &nomecit);
    
    printf("Digite a população: \n");
    scanf("%u", &pop);
    
    printf("Digite a área: \n");
    scanf("%f", &area);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &qtdpon);
    
    // realizando operacoes aritmeticas e armazenando nas variaveis 
    densp = (float) (pop / area);
    pbp = (float) (pib / pop);
    sup = (float) (pop + area + pib + qtdpon + pbp + densp);
    
    // solicitando entradas do usuario Carta1
    printf("Insira as propriedades da segunda carta: \n");  //instrução para usuário
    printf("Digite o estado: \n");
    scanf("%s", &estado1);
    
    printf("Digite o código da cidade: \n");
    scanf("%s", &codcit1);
    
    printf("Digite o nome: \n");
    scanf("%s", &nomecit1);
    
    printf("Digite a população: \n");
    scanf("%u", &pop1);
    
    printf("Digite a área: \n");
    scanf("%f", &area1);
    
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &qtdpon1);
    
    // realizando operacoes aritmeticas e armazenando nas variaveis para exibir resultado de densidade populacional e pib per capita carta1
    densp1 = (float) (pop1 / area1);
    pbp1 = (float) (pib1 / pop1);
    sup1 = (float) (pop1 + area1 + pib1 + qtdpon1 + pbp1 + densp1);
    
    // exbindo resultados carta0
    printf("Propridades primeira carta inserida: \n");
    printf("O estado é: %s\nO codigo de sua cidade é: %s\nO nome é: %s\n", estado, codcit, nomecit);
    
    printf("A população é:  %u\nA área é: %f\nO PIB é: %f\n", pop, area, pib);
    
    printf("A quantidade de pontos turísticos são: %d\n", qtdpon);
    
    printf("A densidade populacional é: %f\n", densp);
    
    printf("O pib percapita é: %f\n", pbp);

    printf("SUPER PODER: %f\n", sup);
    
    // exbindo resultados carta1
    printf("Propridades segunda carta inserida: \n");
    printf("O estado é: %s\nO codigo de sua cidade é: %s\nO nome é: %s\n", estado1, codcit1, nomecit1);
    
    printf("A população é:  %u\nA área é: %f\nO PIB é: %f\n", pop1, area1, pib1);
    
    printf("A quantidade de pontos turísticos são: %d\n", qtdpon1);
    
    printf("A densidade populacional é: %f\n", densp1);
    
    printf("O pib percapita é: %f\n", pbp1);
    
    printf("SUPER PODER: %f\n", sup1);

    // consideracoes finais resultado

    //  criando menu comparação

    printf("Digite qual dos atributos você deseja comparar:\n");
    printf("População: 1;\nÁrea: 2;\nPib: 3;\nPontos turísticos: 4;\nDensidade populacional: 5;\nPibpercapita: 6;\nSuper poder: 7;\n");
     scanf("%d", &comp);

     switch (comp)
     {
     case 1:
        printf("Carta 1 - População: %u\n", pop);
        printf("Carta 2 - População: %u\n", pop1);

        // realizando comparacoes
        if (pop > pop1){
            printf("Carta 1 venceu! \n");
        } else if (pop == pop1) {
            printf("Empate!");
        
    } else {
        printf("Carta 2 venceu! \n");
    
        }
        break;
     
     case 2:
        printf("Carta 1 - Área: %f\n", area);
        printf("Carta 2 - Área: %f\n", area1);
// realizando comparacoes
        if (area > area1){
            printf("Carta 1 venceu! \n!");
        } else if (area == area1){
            printf("Empate! \n!");
        } else 
        {
            printf("Carta 2 venceu! \n!");
            
        }
        break;
        
        case 3:
        printf("Carta 1 - PIB: %f\n", pib);
        printf("Carta 2 - PIB: %f\n", pib1);
    // realizando comparacoes
        if (pib > pib1){
            printf("Carta 1 venceu! \n");
        } else if (pib == pib1){
            printf("Empate! \n");
        } else
        {
            printf("Carta 2 venceu! \n");

        }
        
        break;
        
        case 4:
        printf("Carta 1 - Pontos turístiscos: %d\n", qtdpon);
        printf("Carta 2 - Pontos turístiscos: %d\n", qtdpon1);
    // realizando comparacoes
        if (qtdpon > qtdpon1){
            printf("Carta 1 venceu! \n");
        } else if (qtdpon == qtdpon1){
            printf("Empate!\n");
        } else 
        {
            printf("Carta 2 venceu! \n");

        }
        
        break;
        
        case 5:
        printf("Carta 1 - Densidade populacional: %f\n", densp);
        printf("Carta 2 - Densidade populacional: %f\n", densp1);
    // realizando comparacoes
        if (densp < densp1){
            printf("Carta 1 venceu! \n");
        } else if (densp == densp1){
            printf("Empate! \n");
        } else 
        {
            printf("Carta 2 venceu! \n");

        }
        
        break;
        
        case 6:
        printf("Carta 1 - Pib per Capita: %f\n", pbp);
        printf("Carta 2 - Pib per Capita: %f\n", pbp1);
    // realizando comparacoes
        if (pbp > pbp1){
            printf("Carta 1 venceu! \n");
        } else if (pbp == pbp1){
            printf("Empate! \n");
        } else 
        {
            printf("Carta 2 venceu! \n");

        }
        
        break;
        
        case 7:
        printf("Carta 1 - SUPERPODER: %f\n", sup);
        printf("Carta 2 - SUPERPODER: %f\n", sup1);
    // realizando comparacoes
        if (sup > sup1){
            printf("Carta 1 venceu! \n");
        } else if (sup == sup1){
            printf("Empate!\n");
        } else
        {
            printf("Carta 2 venceu! \n");
            
        }

        break;
        
     default:
        printf("Opção digitada é inválida.\n");
        break;
     }


    return 0;
}
