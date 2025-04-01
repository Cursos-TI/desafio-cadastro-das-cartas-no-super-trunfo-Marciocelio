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


//PESQUISA DA CARTA A
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

printf("Digite o nímero de ponto turísticos:");
scanf("%d", &Turistico1);
printf("\n");

//RESULTADO DA DESCRIÇÃO CARTA N1
printf("***Cartas do Super Trunfo***1\n");

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

printf("A Densisdade Populacional da carta A é: %.2f\n", densidade1);
printf("O PIB per Capita da carta A é: %.2f\n", PIBpercapta1); 

printf("\n");
//PESQUISA DA CARTA B
printf ("> DESCRICÃO CARTA: 02\n");
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

printf("Digite o nímero de ponto turísticos:");
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

densidade1 = (populacao2 / area1);
PIBpercapta1 = (PIB2/populacao2);

printf("A Densisdade Populacional da carta A é: %.2f\n", densidade2);
printf("O PIB per Capita da carta A é: %.2f\n", PIBpercapta2); 

double = calcularValorTotal (populacao1, area1, PIB1, Turistico1);
double = calcularValorTotral (populacao2, area2, PIB2, Turistico2);

printf("carta 01(%s) - valor total %2.f\n", estado1);
printf("carta 02(%s) - valor total %2.f\n", estado2);

return 0;
}
