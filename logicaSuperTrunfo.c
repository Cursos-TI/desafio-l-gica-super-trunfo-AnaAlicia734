#include <stdio.h>
#include <stdlib.h>

int main() {
    // Primeira Carta
    char estado1[50] = "Pará";
    char codigo1[50] = "A01";
    char cidade1[50] = "Belém";
    unsigned long int populacao1 = 1398531; 
    float Area1 = 1059.458; // Área em km²
    float PIB1 = 30.8; // PIB em bilhões de reais
    int Numero_de_pontos_turisticos1 = 50;
    float densidade_populacional1 = populacao1 / Area1; // pessoas por km²
    float PIB_per_capita1 = (PIB1 * 1000000000) / populacao1; // PIB per capita em reais

    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f Bilhões\n", PIB1);
    printf("Número de pontos turísticos: %d\n", Numero_de_pontos_turisticos1);
    printf("Densidade populacional: %2f\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", PIB_per_capita1);

    printf("==========================\n");

    // Segunda Carta
    int Carta2 = 2; 
    char estado2[50] = "Ceará"; 
    char codigo2[50] = "B02";
    char cidade2[50] = "Fortaleza";
    unsigned long int populacao2 = 2574412; 
    float Area2 = 312.353;
    float PIB2 = 73.43;
    int Numero_de_pontos_turisticos2 = 60;
    float densidade_populacional2 = populacao2 / Area2;
    float PIB_per_capita2 = (PIB2 * 1000000000)/ populacao2; // A multiplicação por 1 bilhão é para converter o PIB de bilhões para reais
    printf("\nCarta %d:\n", Carta2);
  
    printf("Carta: %d\n", Carta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f Bilhões\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Numero_de_pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", PIB_per_capita2);

    printf("==========================\n");

    int escolhaAtributo1, escolhaAtributo2;
    printf("Escolha 2 atributo para comparar as cartas:\n");
    printf("1. PIB\n"); 
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. Densidade Populacional\n");
    printf("5. Número de Pontos Turísticos\n");
    printf("Digite o número da sua escolha:  \n");
    scanf("%d", &escolhaAtributo1);
    printf("Digite o número do segundo atributo:  \n");
    scanf("%d", &escolhaAtributo2);
    if(escolhaAtributo1 == escolhaAtributo2) {
        printf("Você escolheu o mesmo atributo duas vezes. Por favor, escolha atributos diferentes.\n");
        return 1; // Encerra o programa se os atributos forem iguais
    }

// Coloquei as escolhas em diferente Switch para aparesentar os resultados de forma mais clara
    printf("==========================\n");
    switch (escolhaAtributo1) {    
        case 1:
        if ((PIB1 < PIB2) || (PIB1 > PIB2)){
            printf("\nComparação de Cartas (Atributos: PIB):\n");
            printf("Carta 1 - Belém (BEL) = %.2f\n", PIB1);
            printf("Carta 2 - Fortaleza (FOR) = %.2f\n", PIB2);
            printf("PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2) ? 1 : 2, (PIB1 > PIB2));
        } else {
            printf("EMPATE!\n");
        }
        break;

        case 2:
        if ((populacao1 < populacao2) || (populacao1 > populacao2)){
            printf("\nComparação de Cartas (Atributos: População):\n");
            printf("Carta 1 - Belém (BEL) = %lu\n", populacao1);
            printf("Carta 2 - Fortaleza (FOR) = %lu\n", populacao2);
            printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
        } else {
            printf("EMPATE!\n");
        }
        break;

        case 3:
        if ((Area1 < Area2) || (Area1 > Area2)){
            printf("\nComparação de Cartas (Atributos: Área):\n");
            printf("Carta 1 - Belém (BEL) = %.2f km²\n", Area1);
            printf("Carta 2 - Fortaleza (FOR) = %.2f km²\n", Area2);
            printf("Área: Carta %d venceu (%d)\n", (Area1 > Area2) ? 1 : 2, (Area1 > Area2));
            } else {
                printf("EMPATE!\n");
            }
        break;

        case 4: 
        if ((densidade_populacional1 < densidade_populacional2) || (densidade_populacional1 > densidade_populacional2)){
            printf("\nComparação de Cartas (Atributos: Densidade Populacional):\n");
            printf("Carta 1 - Belém (BEL) = %.2f pessoas/km²\n", densidade_populacional1);
            printf("Carta 2 - Fortaleza (FOR) = %.2f pessoas/km²\n", densidade_populacional2);
            printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_populacional1 > densidade_populacional2) ? 1 : 2, (densidade_populacional1 > densidade_populacional2));
         } else {
                printf("EMPATE!\n");
            }
        break;

        case 5:
        if ((Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2) || (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2)){
            printf("\nComparação de Cartas (Atributos: Número de Pontos Turísticos):\n");
            printf("Carta 1 - Belém (BEL) = %d pontos turísticos\n", Numero_de_pontos_turisticos1);
            printf("Carta 2 - Fortaleza (FOR) = %d pontos turísticos\n", Numero_de_pontos_turisticos2);
            printf("Número de Pontos Turísticos: Carta %d venceu (%d)\n", (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2) ? 1 : 2, (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2));
        } else{
            printf("EMPATE!\n");
        }
        break;

        default:
            printf("Opção inválida!\n");
            break;
    }
    printf("==========================\n");
    switch (escolhaAtributo2) {
        case 1:
        if ((PIB1 < PIB2) || (PIB1 > PIB2)){
            printf("\nComparação de Cartas (Atributos: PIB):\n");
            printf("Carta 1 - Belém (BEL) = %.2f\n", PIB1);
            printf("Carta 2 - Fortaleza (FOR) = %.2f\n", PIB2);
            printf("PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2) ? 1 : 2, (PIB1 > PIB2));
        } else {
            printf("EMPATE!\n");
        }
        break;

        case 2:
        if ((populacao1 < populacao2) || (populacao1 > populacao2)){
            printf("\nComparação de Cartas (Atributos: População):\n");
            printf("Carta 1 - Belém (BEL) = %lu\n", populacao1);
            printf("Carta 2 - Fortaleza (FOR) = %lu\n", populacao2);
            printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
        } else {
            printf("EMPATE!\n");
        }
        break;

        case 3:
        if ((Area1 < Area2) || (Area1 > Area2)){
            printf("\nComparação de Cartas (Atributos: Área):\n");
            printf("Carta 1 - Belém (BEL) = %.2f km²\n", Area1);
            printf("Carta 2 - Fortaleza (FOR) = %.2f km²\n", Area2);
            printf("Área: Carta %d venceu (%d)\n", (Area1 > Area2) ? 1 : 2, (Area1 > Area2));
            } else {
                printf("EMPATE!\n");
            }
        break;

        case 4: 
        if ((densidade_populacional1 < densidade_populacional2) || (densidade_populacional1 > densidade_populacional2)){
            printf("\nComparação de Cartas (Atributos: Densidade Populacional):\n");
            printf("Carta 1 - Belém (BEL) = %.2f pessoas/km²\n", densidade_populacional1);
            printf("Carta 2 - Fortaleza (FOR) = %.2f pessoas/km²\n", densidade_populacional2);
            printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_populacional1 > densidade_populacional2) ? 1 : 2, (densidade_populacional1 > densidade_populacional2));
         } else {
                printf("EMPATE!\n");
            }
        break;

        case 5:
        if ((Numero_de_pontos_turisticos1 < Numero_de_pontos_turisticos2) || (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2)){
            printf("\nComparação de Cartas (Atributos: Número de Pontos Turísticos):\n");
            printf("Carta 1 - Belém (BEL) = %d pontos turísticos\n", Numero_de_pontos_turisticos1);
            printf("Carta 2 - Fortaleza (FOR) = %d pontos turísticos\n", Numero_de_pontos_turisticos2);
            printf("Número de Pontos Turísticos: Carta %d venceu (%d)\n", (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2) ? 1 : 2, (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2));
        } else{
            printf("EMPATE!\n");
        }
        break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
