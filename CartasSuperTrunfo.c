#include <stdio.h>

int main (){

// Desafio Cartas de Super Trunfo;
// Queren Hapuque de Santana Silva.
// Prof: Sergio Cardoso;

// Dados da primeira carta;

char estado;
char codigo [10];
char cidade [20];
float habitantes;
float area;
float pib;
int pontos_turisticos;

// Dados da segunda carta;

char estado1;
char codigo1 [15];
char cidade1[30];
float populacao;
float areaTotal;
float pib1;
int pontosTuristicos;

// SAIDA DA PRIMEIRA CARTA;

printf("Estado: A \n");

printf("Codigo: A01 \n");

printf("Cidade:Salvador\n");

printf("Habitantes (em milhôes): 2.418\n");

printf("Area :693.8 km²\n");

printf("Pib (em bilhões) :62.954\n");

printf("Pontos Turisticos:70 \n");


printf("\n");

// Saida da segunda carta;

printf("Estado: B \n");

printf("Código: BO2\n");

printf("Cidade: Ilhéus\n");

printf("População:178.649\n");

printf("Area:1.585 km²\n");

printf("Pib:5.16 bilhões\n");

printf("Pontos Turisticos:32\n");


// Entrada de dados da primeira carta;

scanf("%c", &estado);
scanf("%s", codigo);
scanf("%s",cidade);
scanf("%f", habitantes);
scanf("%f", area);
scanf("%f", pib);
scanf("%d",pontos_turisticos);

//Entrada de dados da segunda carta;

scanf("%c", &estado1);
scanf("%s",codigo1);
scanf("%s",cidade1);
scanf("%f",populacao);
scanf("%f", areaTotal);
scanf("%f", pib1);
scanf("%d", pontosTuristicos);

return 0 ;




}