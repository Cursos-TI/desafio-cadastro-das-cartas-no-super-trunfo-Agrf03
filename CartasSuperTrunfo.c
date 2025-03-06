#include <stdio.h>

int main(){

    char Estado;
    char Codigo[30];
    char Cidade[30];
    int Populacao;
    float AreaKm2;
    float PIB;
    int NpontoTuristicos;

    printf("Carta 1: \n");

    printf("Estado: ");
    scanf("%s", &Estado);

    printf("Código: ");
    scanf("%s", &Codigo);
    
    printf("Nome da cidade: ");
    scanf("%s", &Cidade);

    printf("População: ");
    scanf("%d", &Populacao);

    printf("Área em Km²: ");
    scanf("%f", &AreaKm2);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &NpontoTuristicos);

    printf("\nCarta 2: \n");

    printf("Estado: ");
    scanf("%s", &Estado);
    printf("Código: ");
    scanf(" %s", &Codigo);
    
    printf("Nome da cidade: ");
    scanf("%s", &Cidade);

    printf("População: ");
    scanf("%d", &Populacao);

    printf("Área em Km²: ");
    scanf("%f", &AreaKm2);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &NpontoTuristicos);

    return 0;
}