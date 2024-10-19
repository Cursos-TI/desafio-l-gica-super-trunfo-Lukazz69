#include <stdio.h>

int main() {
    // Aqui eu defini quais são minhas variáveis.
    char codcity[3], codcity2[3];
    float populacao, populacao2;
    float area, area2;
    long int pib, pib2;
    int pontos_turisticos, pontos_turisticos2;
    float pibpercapita, pibpercapita2;
    float densidadepopulacional, densidadepopulacional2;

    //Aqui coleto os dados da primeira cidade.
    
    printf("Digite o código da primeira cidade:\n");
    scanf("%s", codcity);

    printf("Digite a população da primeira cidade\n");
    scanf("%f", &populacao);

    printf("Digite a área da primeira cidade.\n");
    scanf("%f", &area);

    printf("Digite o PIB da primeira cidade.\n");
    scanf(" %ld", &pib);

    printf("Digite quantos pontos turísticos a primeira cidade tem.\n");
    scanf(" %d", &pontos_turisticos);

    // Agora vamos calcular o PIB per capita e Densidade populacional.

    pibpercapita = (float) pib / populacao;

    densidadepopulacional = populacao / area;

    // Aqui eu coleto os dados da segunda cidade.

    printf("Digite o código da segunda cidade:\n");
    scanf("%s", codcity2);

    printf("Digite a população da segunda cidade\n");
    scanf("%f", &populacao2);

    printf("Digite a área da segunda cidade.\n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade.\n");
    scanf(" %ld", &pib2);

    printf("Digite quantos pontos turísticos a segunda cidade tem.\n");
    scanf(" %d", &pontos_turisticos2);

    // Agora vamos calcular o PIB per capita e Densidade populacional.

    pibpercapita2 = (float) pib2 / populacao2;

    densidadepopulacional2 = populacao2 / area2;

    // Aqui vou mostrar na tela os dados das duas cidades.

    printf("\n*** Dados da primeira cidade ***\n\n");
    
    printf("Código da cidade: %s\n", codcity);
    printf("População: %.2f habitantes\n", populacao);
    printf("Área: %.2f km\n", area);
    printf("PIB: %ld\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("PIB per Capita: %.2f\n", pibpercapita);
    printf("Densidade populacional: %.2f\n\n", densidadepopulacional);

    printf("*** Dados da segunda cidade ***\n\n");

    printf("Código da cidade: %s\n", codcity2);
    printf("População: %.2f habitantes\n", populacao2);
    printf("Área: %.2f km\n", area2);
    printf("PIB: %ld\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("PIB per Capita: %.2f\n", pibpercapita2);
    printf("Densidade populacional: %.2f\n", densidadepopulacional2);

    // Vamos comparar algumas características das cartas.

    printf("\n *** Vamos comparar alguns dados das cartas apresentadas! ***\n");

    if(populacao > populacao2){
        printf("A Cidade vencedora é a %s com %.2f de habitantes.\n", codcity, populacao);
    } else {
        printf("A Cidade vencedora é a %s com %.2f de habitantes.\n", codcity2, populacao2);
    }

    return 0;



}