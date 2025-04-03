#include <stdio.h>

int main() {

//BASE DA CARTA 1
int carta1;
char estado1 [40];
char codigo1 [20];
char cidade1 [10];
int populacao1;
float area1;
float PIB1;
int Turistico1;
float densidade1;
float PIBpercapta1;
float ValorTotal1;
float Superpoder1;

//BASE DA CARTA 2
int carta2;
char estado2 [40];
char codigo2 [20];
char cidade2 [10];
int populacao2;
float area2;
float PIB2;
int Turistico2;
float densidade2;
float PIBpercapta2;
float ValorTotal2;
float Superpoder2;


//PESQUISA DA CARTA A
printf ("> REQUISITOS CARTA: 01\n");
printf("Digite o nome do estado:");
scanf("%s", &estado1);

printf("Digite o codigo:");
scanf ("%s", &codigo1);

printf("Digite o nome da Cidade:");
scanf ("%s", &cidade1);

printf("Digite o numero da população:");
scanf("%d", &populacao1);

printf("Digite a área da cidade em quilômetros quadrados:");
scanf ("%f", &area1);

printf("Digite o PIB:");
scanf ("%f", &PIB1);

printf("Digite o numero de ponto turísticos:");
scanf("%d", &Turistico1);
printf("\n");

//RESULTADO DA DESCRIÇÃO CARTA N1
printf("***Cartas do Super Trunfo***\n");

printf ("> DESCRICÃO CARTA: 01\n");
printf("Carta: %d \n", carta1);
printf("Estado: %s \n", estado1);
printf("Código: %c \n",codigo1);
printf("Nome da Cidade: %s \n", cidade1);
printf("População: %d \n", populacao1);
printf("Àrea: %.2f Km²\n", area1);
printf("PIB: %.2f bilhões de reais \n", PIB1);
printf("Número de Pontos Turísticos: %d \n", Turistico1);
printf("\n");

densidade1 = (populacao1 / area1);
PIBpercapta1 = (PIB1/populacao1);

printf("A Densisdade Populacional da carta 1 é: %.2f\n", densidade1);
printf("O PIB per Capita da carta 1 é: %.2f\n", PIBpercapta1); 

printf("\n");

//BASE DE CALCULO DENSIDADE P. E PIB PER CAPITA
float signedNumber1 = densidade1;
float unsignedNumber1 = PIBpercapta1;

printf("\n");
printf("O valor total entre Densidade Populacional e o PIB per Capita é: %.2f\n", signedNumber1 + unsignedNumber1);
printf("\n");

//CALCULO SUPER PODER

float inversoDensidade1 = 1 / densidade1;

Superpoder1 = (float)populacao1 + area1 + PIB1 + Turistico1 + PIBpercapta1 + inversoDensidade1;

printf("\n");
printf("O Super Poder da carta 1 é: %.2f\n", Superpoder1);
printf("\n");

//PESQUISA DA CARTA 2
printf ("> REQUISITOS CARTA: 02\n");
printf("Digite o nome do estado:");
scanf("%s", &estado2);

printf("Digite o codigo:");
scanf ("%s", &codigo2);

printf("Digite o nome da Cidade:");
scanf ("%s", &cidade2);

printf("Digite o numero da população:");
scanf("%d", &populacao2);

printf("Digite a área da cidade em quilômetros quadrados:");
scanf ("%f", &area2);

printf("Digite o PIB:");
scanf ("%f", &PIB2);

printf("Digite o numero de ponto turísticos:");
scanf("%d", &Turistico2);
printf("\n");

//RESULTADO DA DESCRIÇÃO CARTA N2

printf ("> DESCRICÃO CARTA: 02\n");
printf("Carta: %d \n", carta2);
printf("Estado: %s \n", estado2);
printf("Código: %c \n",codigo2);
printf("Nome da Cidade: %s \n", cidade2);
printf("População: %d \n", populacao2);
printf("Àrea: %.2f Km²\n", area2);
printf("PIB: %.2f bilhões de reais \n", PIB2);
printf("Número de Pontos Turísticos: %d \n", Turistico2);
printf("\n");

densidade2 = (populacao2 / area2);
PIBpercapta2 = (PIB2/populacao2);

printf("A Densisdade Populacional da carta 2 é: %.2f\n", densidade2);
printf("O PIB per Capita da carta 2 é: %.2f\n", PIBpercapta2); 


//BASE DE CALCULO DENSIDADE P. E PIB PER CAPITA
float signedNumber2 = densidade2;
float unsignedNumber2 = PIBpercapta2;

printf("\n");
printf("O valor total entre Densidade Populacional e o PIB per Capita é: %.2f\n", signedNumber2 + unsignedNumber2);
printf("\n");

//CALCULO SUPER PODER

float inversoDensidade2 = 1 / densidade2;

Superpoder2 = (float)populacao2 + area2 + PIB2 + Turistico2 + PIBpercapta2 + inversoDensidade2;

printf("\n");
printf("O Super Poder da carta B é: %.2f\n", Superpoder2);
printf("\n");

// Comparação de Cartas

printf("Comparação de Cartas:01 e 02\n");

printf("População: Carta1 > Carta2: %d\n", populacao1 > populacao2);
printf("Área: Carta1 > Carta2: %d\n", area1 > area2);
printf("PIB: Carta1 > Carta2: %d\n", PIB1 > PIB2);
printf("Pontos Turísticos: Carta1 => Carta2: %d\n", Turistico1 > Turistico2);
printf("Densidade Populacional:Carta1 > Carta2: %d\n", densidade1 > densidade2);
printf("PIB per Capita: Carta1 > Carta2: %d\n", PIBpercapta1 > PIBpercapta2);
printf("Super Poder:Carta1 > Carta2: %d\n", Superpoder1 > Superpoder2);
printf("\n");

printf ("Resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence");

return 0;

}
