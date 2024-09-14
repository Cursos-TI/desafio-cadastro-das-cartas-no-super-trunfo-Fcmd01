#include <stdio.h>  // i/o in e out, entrada e saida de dados, printf, scanf
#include <stdlib.h> // vai emular os comandos do DOS
#include <locale.h> // usar acentos

void main (){
    //Permite usar acentos
    setlocale (LC_ALL, "");

    
    // Cadastro usuário 1
    
    printf ("Ola usuario 1! Por Gentileza insira os dados da CARTA 1\n");

    char estado1;
    //inserir nome do estado
    printf ("Digite o nome do Estado:\n ");
    //scannear um valor para a vari�vel endere�ada no char estado
    scanf ("%c", &estado1);


    char codigo1;

    printf ("Digite c�digo da carta: \n");
    fflush (stdin);
    scanf ("%c", &codigo1);


    char cidade1;

    printf ("Digite o nome da Cidade: \n");
    fflush (stdin);
    scanf ("%c", &cidade1);


    unsigned long int pop1;

    printf("Digite a populacao da Cidade:\n");
    fflush (stdin);
    scanf("%u", &pop1);

    float area1;

    printf("Digite a area da Cidade:\n ");
    fflush(stdin);
    scanf("%f", &area1);

    float densidade1;

    densidade1 = pop1 / area1;
    printf("\nA densidade populacional: %f\n", densidade1);



    unsigned long int pib1;

    printf("\nDigite o PIB da Cidade:\n ");
    fflush(stdin);
    scanf("%u", &pib1);


    printf("\nO PIB per Capita: %u\n", pib1 / pop1);

    int pontost1;

    printf("Digite o numero de pontos turisticos da Cidade:\n ");
    fflush (stdin);
    scanf("%d", &pontost1);

    printf("\nCadastro da CARTA1 concluido!\n");

    
    //Cadastro da carta usuario 2
    
    printf ("Ola usuario 2! Por Gentileza insira os dados da CARTA 2\n");
    
    char estado2;
    //inserir nome do estado
    printf ("Digite o nome do Estado:\n ");
    fflush(stdin);

    //scannear um valor para a vari�vel endere�ada no char estado
    scanf ("%c", &estado2);


    char codigo2;

    printf ("Digite codigo da carta:\n ");
    fflush(stdin);
    scanf ("%c", &codigo2);


    char cidade2;

    printf ("Digite o nome da Cidade:\n ");
    fflush (stdin);
    scanf ("%c", &cidade2);


    unsigned long int pop2;

    printf("Digite a populacao da Cidade:\n ");
    fflush (stdin);
    scanf("%u", &pop2);

    float area2;

    printf("\nDigite a area da Cidade: ");
    fflush(stdin);
    scanf("%f", &area2);

    float densidade2;

    densidade2 = pop2 / area2;

    printf("\nA densidade populacional: %f\n", densidade2);



    unsigned long int pib2;

    printf("Digite o PIB da Cidade:\n");
    fflush(stdin);
    scanf("%u", &pib2);
    printf("O PIB per Capita: %u\n", pib2 / pop2);

    int pontost2;

    printf("Digite o numero de pontos turisticos da Cidade:\n ");
    fflush (stdin);
    scanf("%d", &pontost2);

    printf("\nCadastro da CARTA2 concluido!\n");


    // Comparação 

    int comppop = pop1 > pop2 ;
    printf ("A populção da CARTA1 venceu a CARTA2: %d\n", comppop);
    printf ("A area da CARTA1 venceu a CARTA2: %d\n", area1 > area2);
    printf ("A densidade populacional da CARTA1 venceu a CARTA2: %d\n", densidade1 < densidade2);
    printf ("O pib da CARTA1 venceu a CARTA2: %d\n", pib1 > pib2);
    
    float pibpercap1 = pib1 / pop1 ; 
    float pibpercap2 = pib2 / pop2 ;
    printf ("O pib per capita da CARTA1 venceu a CARTA2: %f\n", pibpercap1 > pibpercap2);
    printf ("Os pontos turisticos da CARTA1 venceu a CARTA2: %d\n", pontost1 > pontost2);


    //Resultado
    int resultado = (pop1 + area1 - densidade1 + pib1 + pibpercap1 + pontost1) > (pop2 + area2 - densidade2 + pib2 + pibpercap2 + pontost2);


    printf ("A CARTA 1 VENCEU A CARTA 2:%d \n", resultado);


}