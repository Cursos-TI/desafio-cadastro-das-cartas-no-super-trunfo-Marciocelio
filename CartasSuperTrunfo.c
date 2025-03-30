#include <stdio.h>

int main() {

//BASE DA CARTA 1
    int carta =1;
    char estado [40] = "Bahia";
    char codigo [25]='B03';
    char cidade [10] = "Salvador";
    int populacao =2418005;
    float area = 692.618;
    float PIB = 62.900000000;
    int Turistico = 20;
    float densidade;
    float PIBpercapta;

    //BASE DA CARTA 2
int CARTA =2;
char ESTADO [10]= "Ceará";
char CODIGO = 'C04';
char CIDADE [20]= "Fortaleza";
int POPULACAO = 2428678;
float AREA = 312.0353;
float PIB2 = 67.02;
int TURISTICO =23;
float DESIDADE;
float PIBPERCAPTA;


//PESQUISA DA CARTA A
printf("Digite o nome do estado:");
scanf("%c", &estado);

printf("Digite o codigo:");
scanf ("%s", &codigo);

printf("Digite o nome da Cidade:");
scanf ("%s", &cidade);

printf("Digite o numero da população:");
scanf("%s", &populacao );

printf("Digite a área da cidade em quilômetros quadrados:");
scanf ("%f", &area);

printf("Digite o PIB:");
scanf ("%f", &PIB);

printf("Digite o nímero de ponto turísticos:");
scanf("%d", &Turistico);
printf("\n");

//RESULTADO DA DESCRIÇÃO CARTA N1
printf("***Cartas do Super Trunfo***1\n");

printf ("> DESCRICÃO CARTA: 01\n");
printf("Carta: %d \n", carta);
printf("Estado: %s \n", estado);
printf("Código: %c \n",codigo);
printf("Nome da Cidade: %s \n", cidade);
printf("População: %d \n", populacao);
printf("Àrea: %.2f Km²\n", area);
printf("PIB: %.2f bilhões de reais \n", PIB);
printf("Número de Pontos Turísticos: %d \n", Turistico);
printf("\n");

//AULA 2 RESULTADO:
densidade = (populacao / area);
printf("A Densidade Populacional da carta A é: %f\n", densidade);

PIBpercapta = (PIB/populacao);
printf("O PIB per Capita da carta A é: %f\n", PIBpercapta); 


//PESQUISA DA CARTA B
printf("Digite o codigo:");
scanf ("%s", &CODIGO);

printf("Digite o nome da Cidade:");
scanf ("%s", &CIDADE);

printf("Digite o numero da população:");
scanf("%s", &POPULACAO );

printf("Digite a área da cidade em quilômetros quadrados:");
scanf ("%f", &AREA);

printf("Digite o PIB:");
scanf ("%f", &PIB2);

printf("Digite o nímero de ponto turísticos:\n");
scanf("%d \n", &TURISTICO);


//RESULTADOS DA DESCRIÇÃO CARTA N2
printf("\n");
printf (">*** DESCRICÃO CARTA: 02*** \n");
printf("Carta: %d \n",CARTA);
printf("Estado: %s \n", ESTADO);
printf("Código: %i \n", CODIGO);
printf("Nome da Cidade: %s \n", CIDADE);
printf("População: %d \n", POPULACAO);
printf("Área: %2.f Km² \n", AREA);
printf("PIB: %.2f bilhões de reais\n", PIB2);
printf("Número de Pontos Turísticos: %d \n", TURISTICO);


//SEGUNDA ATIVIDADE CARTA 01
densidade =(populacao/area);
printf("A Densidade Populacional da carta A é: %f\n", densidade); 

PIBpercapta =(PIB/populacao);
printf("O PIB per Capita da carta A é: %f\n", PIBpercapta); 

//SEGUNDA ATIVIDADE CARTA 02
densidade =(POPULACAO/AREA);
printf("A Densidade Populacional da carta A é: %f\n", densidade); 

PIBpercapta =(PIB2/POPULACAO);
printf("O PIB per Capita da carta A é: %f\n", PIBpercapta); 


return 0;
}
