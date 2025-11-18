#include <stdio.h>

int main() {

    char Estado1[3], Estado2[3];                //Entrada nome do Estado                    Carta1, Carta2
    char Codigo1[4], Codigo2[4];                //Entrada Código da Carta                   Carta1, Carta2
    char Cidade1[20], Cidade2[20];              //Entrada nome da Cidade                    Carta1, Carta2

    unsigned long int Populacao1, Populacao2;   //Entrada nº Populacional da Cidade         Carta1, Carta2

    int PTuristicos1, PTuristicos2;             //Entrada quantidade de Pontos Turísticos   Carta1, Carta2

    float Area1, Area2;                         //Entrada Área (em km²)                     Carta1, Carta2
    float PIB1, PIB2;                           //Entrada PIB da Cidade                     Carta1, Carta2

    float DensPop1, DensPop2;                   //Entrada Densidade Populacional            Carta1, Carta2
    float PIBpCap1, PIBpCap2;                   //Entrada PIB per Capita                    Carta1, Carta2
    float SuperP1, SuperP2;                     //Entrada Super Poder                       Carta1, Carta2

    // Cabeçalho e instruções
    printf("------- Cadastro de Cartas Super Trunfo -------\n\n");
    printf(" Cadastre inserindo as informações solicitadas:\n");
    printf("     OBS: digite os números sem pontos(.)\n");

    // Formulário de cadastro CARTA 1
    printf("\n              - Cadastro CARTA 1 - \n");

    printf("Digite o nome do ESTADO: ");
    scanf("%s", Estado1);

    printf("Digite o Código da Carta: ");
    scanf("%s", Codigo1);

    printf("Digite o nome da Cidade: ");
    scanf("%s", Cidade1);

    printf("Digite a quantidade de Habitantes: ");
    scanf("%lu", &Populacao1);

    printf("Digite a Área em Km²: ");
    scanf("%f", &Area1);

    printf("Digite o PIB - Produto Interno Bruto: ");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%d", &PTuristicos1);

    //Cálculo das variáveis derivadas de operações
    DensPop1 = Populacao1 / Area1;
    PIBpCap1 = PIB1 / Populacao1;

    //Cálculo do Super Poder (soma dos atributos numéricos + inverso da densidade)
    SuperP1 = Populacao1 + Area1 + PIB1 + PTuristicos1 + PIBpCap1 + (1 / DensPop1);

    // Exibição dos dados cadastrados CARTA 1
    printf("\n - CARTA 1 cadastrada com sucesso!\n");
    printf(
        "Estado: %s\n"
        "Código: %s\n"
        "Cidade: %s\n"
        "População: %lu\n"
        "Área: %.2f Km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turisticos: %d\n"
        "Densidade Populacional: %.2f hab/km²\n"
        "PIB per Capita: %.2f reais\n"
        "Super Poder: %.2f\n\n",
        Estado1, Codigo1, Cidade1, Populacao1, Area1, PIB1, PTuristicos1, DensPop1, PIBpCap1, SuperP1
    );

    // Formulário de cadastro CARTA 2
    printf("\n              - Cadastro CARTA 2 - \n");

    printf("Digite o nome do ESTADO: ");
    scanf("%s", Estado2);

    printf("Digite o Código da Carta: ");
    scanf("%s", Codigo2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", Cidade2);

    printf("Digite a quantidade de Habitantes: ");
    scanf("%lu", &Populacao2);

    printf("Digite a Área em Km²: ");
    scanf("%f", &Area2);

    printf("Digite o PIB - Produto Interno Bruto: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de Pontos Turísticos: ");
    scanf("%d", &PTuristicos2);

    //Cálculo das variáveis derivadas de operações
    DensPop2 = Populacao2 / Area2;
    PIBpCap2 = PIB2 / Populacao2;

    //Cálculo do Super Poder
    SuperP2 = Populacao2 + Area2 + PIB2 + PTuristicos2 + PIBpCap2 + (1 / DensPop2);

    // Exibição dos dados cadastrados CARTA 2
    printf("\n - CARTA 2 cadastrada com sucesso!\n");
    printf(
        "Estado: %s\n"
        "Código: %s\n"
        "Cidade: %s\n"
        "População: %lu\n"
        "Área: %.2f Km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turisticos: %d\n"
        "Densidade Populacional: %.2f hab/km²\n"
        "PIB per Capita: %.2f reais\n"
        "Super Poder: %.2f\n\n",
        Estado2, Codigo2, Cidade2, Populacao2, Area2, PIB2, PTuristicos2, DensPop2, PIBpCap2, SuperP2
    );

    // ---------- COMPARAÇÃO ENTRE AS CARTAS ----------
    printf("\n\n-------------------- Comparação de Cartas -------------------------\n");
    printf("(Se RESULTADO = 1: Carta 1 venceu, Se RESULTADO = 0: Carta 2 venceu)\n\n");

    printf("População:  (%d)\n", Populacao1 > Populacao2);
    printf("Área:  (%d)\n", Area1 > Area2);
    printf("PIB:  (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos:  (%d)\n", PTuristicos1 > PTuristicos2);

    //Para densidade quem vence é o MENOR valor
    printf("Densidade Populacional:  (%d)\n", DensPop1 < DensPop2);

    printf("PIB per Capita:  (%d)\n", PIBpCap1 > PIBpCap2);

    printf("Super Poder:  (%d)\n", SuperP1 > SuperP2);

    return 0;
}
