#include <stdio.h>

int main()
{
    char state1[3], CardCode1[5], cityName1[20], state2[3], CardCode2[5], cityName2[20];
    int polulation1, touristAttractions1, polulation2, touristAttractions2;
    double pib1, area1, pib2, area2;

    printf("Vamos cadastrar sua primeira carta!\n");
    printf("Digite as siglas do seu estado:");
    scanf("%s", &state1);

    printf("Digite o nome da cidade:");
    scanf("%s", &cityName1);

    printf("Digite o número de população:");
    scanf("%i", &polulation1);

    printf("Qual tamanho da cidade em km²:");
    scanf("%lf", &area1);

    printf("Digite PIB da cidade:");
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turisticos da cidade:");
    scanf("%i", &touristAttractions1);

    float pibPerCapita1 = (float)pib1 / polulation1, densidade1 = (float)polulation1 / area1;

    printf("Vamos cadastrar sua segunda carta!\n");
    printf("Digite as siglas do seu estado:");
    scanf("%s", &state2);

    printf("Digite o nome da cidade:");
    scanf("%s", &cityName2);

    printf("Digite o número de população:");
    scanf("%i", &polulation2);

    printf("Qual tamanho da cidade em km²:");
    scanf("%lf", &area2);

    printf("Digite PIB da cidade:");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turisticos da cidade:");
    scanf("%i", &touristAttractions2);

    float pibPerCapita2 = (float)pib2 / polulation2, densidade2 = (float)polulation2 / area2;

    printf("CARTA 1\n Estado: %s\n Código: %s01\n Nome da Cidade: %s\n População: %i\n Área: %.3f km²\n PIB: %.2fR$\n Número de Pontos Turísticos: %i\n PIB per Capita: %.2f reais\n Densidade Populacional:  %.2f hab/km² ", state1, state1, cityName1, polulation1, area1, pib1, touristAttractions1, pibPerCapita1, densidade1);
    printf("CARTA 2\n Estado: %s\n Código: %s02\n Nome da Cidade: %s\n População: %i\n Área: %.3f km²\n PIB: %.2fR$\n Número de Pontos Turísticos: %i\n  PIB per Capita: %.2f reais\n Densidade Populacional:  %.2f hab/km² ", state2, state2, cityName2, polulation2, area2, pib2, touristAttractions2, pibPerCapita2, densidade2);
}