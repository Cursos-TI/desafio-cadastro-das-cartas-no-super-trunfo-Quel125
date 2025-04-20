#include <stdio.h>

int main (){

    // Desafio Cartas de Super Trunfo;
    // Queren Hapuque de Santana Silva.
    // Prof: Sergio Cardoso;
    
    // Dados da primeira carta;
    
    char estado = 'A';
    char codigo [10] = "A01";
    char cidade [20]= "Salvador";
    float habitantes = 2.417678;
    float area = 693.4;
    double pib = 63.52609349; 
    int pontos_turisticos = 70;
    float Divisao = area/habitantes;
    float divisao1 = pib / habitantes;
    float densidadepopulacional;
    float Percapita;
    float superPoder = habitantes + area + pib + pontos_turisticos+ densidadepopulacional+ Percapita;
    
    // Dados da segunda carta;
    
    char estado1 = 'B';
    char codigo1 [15] = "B02";
    char cidade1[30] = "Brasilia";
    float populacao = 2.817098;
    float areaTotal = 5.761;
    float pib1 = 286.94807;
    int pontosTuristicos = 57;
    float divisao = areaTotal/populacao;
    float divisao2 = pib1 / populacao;
    float densidadePopulacional;
    float Per_capita;
    float Super_poder = populacao + areaTotal + pib1 + pontosTuristicos + densidadePopulacional + Per_capita ;
    
    // SAIDA DE DADOS DA PRIMEIRA CARTA;
    
    printf("Carta 1 \n");
    
    printf("Estado: A \n");
    
    printf("Codigo: A01 \n");
    
    printf("Cidade:Salvador\n");
    
    printf("Habitantes: 2.417678 milhões \n");
    
    printf("Area :693.44 km²\n");
    
    printf("Pib:63.52609349 bilhões\n");
    
    printf("Pontos Turisticos:70 \n");
    
    printf("Densidade Populacional: %f \n", Divisao);
    
    printf("Renda per capita: %f \n", divisao1);
    
    printf("Super Poder: %f \n", superPoder);
    
    
    printf("\n");
    
    // saida da segunda carta;
    
    printf ("Carta 2\n");
    
    printf("Estado: B \n");
    
    printf("Código: BO2\n");
    
    printf("Cidade: Brasilia \n");
    
    printf("População:2.817381 milhões \n");
    
    printf("Area:5.761 km²\n");
    
    printf("Pib:286.94807 bilhões\n");
    
    printf("Pontos Turisticos:57\n");
    
    printf("Densidade populacional: %f \n", divisao);
    
    printf("Renda per capita: %f \n ", divisao2);
    
    printf ("Super Poder: %f \n",Super_poder);
    
    printf ("\n");
    
    // Comparação de dado;
    
    printf("carta 1 populacao1 < carta 2 populacao : %d\n", habitantes < populacao);
    printf("carta 1area > carta 2 areaTotal = %d \n", area > areaTotal);
    printf("carta1 pib < carta 2 pib1 : %d \n",area > areaTotal);
    printf("carta 1 pontos_turisticos > carta 2 pontosTuristicos: %d \n", pontos_turisticos > pontosTuristicos);
    printf("Carta 1 densidadepopulacional < carta2 densidadePopulacional:%d \n", densidadepopulacional < densidadePopulacional);
    printf("carta 1 percarpita < carta 2 per_capita: %d \n", Percapita < Per_capita);
    
    // Entrada de dados da primeira carta;
    
    scanf("%c", &estado);
    scanf("%s", codigo);
    scanf("%s",cidade);
    scanf("%f", habitantes);
    scanf("%f", area);
    scanf("%f", pib);
    scanf("%d",pontos_turisticos);
    scanf("%f",Divisao);
    scanf("%f",divisao1);
    
    //Entrada de dados da segunda carta;
    
    scanf("%c", &estado1);
    scanf("%s",codigo1);
    scanf("%s",cidade1);
    scanf("%f",populacao);
    scanf("%f", areaTotal);
    scanf("%f", pib1);
    scanf("%d", pontosTuristicos);
    scanf("%f", divisao);
    scanf("%f",divisao2);
    
    return 0 ;
    
    
    
    
    }