/* 
            Serão duas cartas com as seguintes informações
1- o codigo das cartas devem ter uma letra seguida de um dos seguintes numeros: 01 / 02 / 03 /04
2- nome de uma cidade
3- poupulação da cidade
4- area em km quadrado
5- PIB (valor em dinheiro)
6- numero de pontos turistiscos

        Objetivos adicionais 
1- Dividir a população da cidade pela sua área.( identifica numero de habitantes por km²)
2- Dividir o PIB da cidade pela sua população.(indica a riqueza média por pessoa na cidade)
3- Calcular o poder da carta.(soma de todos os valores numericos{o valor da densidade 
populacional deve estar invertida(Dividir o numero 1 pelo valor, o resultado ficara invertido)})
*/
#include <stdio.h>

     //   Comandos para otimizar o codigo:
    // 1 - Função para limpar o buffer do teclado
    void limpaBuffer() {
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    int main(){

        char codigo1[4];
        char codigo2[4];
        char cidade1[20];
        char cidade2[20];
        unsigned long int populacao1;
        unsigned long int populacao2;
        float area1;
        float area2;
        float PIB1;
        float PIB2;
        int pontos1;
        int pontos2;
        float mediapopcid1;
        float mediapib1;
        float mediapopcid2;
        float mediapib2;
        
        printf("Para iniciarmos o jogo, identificaremos a carta_1: \n");
        printf("Digite o codigo da primeira carta: \n");
        scanf("%s", codigo1);

        printf("Digite o nome da cidade: \n");
        limpaBuffer();
        fgets(cidade1, 20, stdin);
      
        printf("Qual o número de habitantes? \n");
        scanf("%lu", &populacao1);

        printf("Qual a area em km²? \n");
        scanf("%f", &area1);

        printf("Valor do PIB da cidade: \n");
        scanf("%f", &PIB1);

        printf("Número de pontos turisticos: \n");
        scanf("%d", &pontos1);

        printf("Muito bem, agora vamos dar sequencia para a carta_2: \n");
        printf("Digite o codigo da segunda carta: \n");
        scanf("%s", codigo2);

        printf("Digite o nome da cidade: \n");
        limpaBuffer();
        fgets(cidade2, 20, stdin);
        
        printf("Qual o número de habitantes? \n");
        scanf("%lu", &populacao2);

        printf("Qual a area em km²? \n");
        scanf("%f", &area2);

        printf("Valor do PIB da cidade: \n");
        scanf("%f", &PIB2);

        printf("Número de pontos turisticos: \n");
        scanf("%d", &pontos2);

        mediapopcid1 = (populacao1 / area1);
        mediapopcid2 = (populacao2 / area2);
        mediapib1 = (PIB1 / populacao1);
        mediapib2 = (PIB2 / populacao2);

        printf("O jogo será baseados nas seguintes informações: \n");
        
        printf("A carta_1 contém as seguintes informações: \n");
        printf("Codigo: %s \n", codigo1);
        printf("Cidade: %s \n", cidade1);
        printf("Número de habitantes: %d \n", populacao1);
        printf("A area é de: %.3f km² \n", area1);
        printf("PIB da carta: %.3f dolares \n", PIB1);
        printf("Número de pontos turisticos: %d \n", pontos1);
        printf("A cidade desta carta contém %.3f habitantes por km² \n", mediapopcid1);
        printf("A riqueza média por pessoa desta carta é aproximadamente de %.2f mil dolares \n", mediapib1);

        printf("A carta_2 contém as seguintes informações: \n");
        printf("Codigo: %s \n", codigo2);
        printf("Cidade: %s \n", cidade2);
        printf("Número de habitantes: %d \n", populacao2);
        printf("A area é de %.3f km² \n", area2);
        printf("PIB da carta: %.3f dolares \n", PIB2);
        printf("Número de pontos turisticos: %d \n", pontos2);
        printf("A cidade desta carta contém %.3f habitantes por km² \n", mediapopcid2);
        printf("A riqueza média por pessoa desta carta é aproximadamente de %.2f mil dolares \n", mediapib2);


        // Invertendo a densidade populacional:

        signed inversopopcid1;
        signed inversopopcid2;
        inversopopcid1 = 1 / mediapopcid1;
        inversopopcid2 = 1 / mediapopcid2;

        // Calculando o poder:

        float poderCarta1, poderCarta2;
        poderCarta1 = populacao1 + area1 + PIB1 + mediapib1 + pontos1 + inversopopcid1;
        poderCarta2 = populacao2 + area2 + PIB2 + mediapib2 + pontos2 + inversopopcid2;

        printf("O poder da carta_1 é de %f \n", poderCarta1);
        printf("O poder da carta_2 é de %f \n", poderCarta2);

        // Exibir o resultado da comparação das cartas:

        printf("Comparando as cartas: \n");
        printf("População: Carta_1 vence? (%d) \n", populacao1 > populacao2);
        printf("Área: Carta_1 vence? (%d) \n", area1 > area2);
        printf("PIB: Carta_2 vence? (%d) \n", PIB1 > PIB2);
        printf("Pontos Turisticos: Carta_2 vence? (%d) \n", pontos1 > pontos2);
        printf("Densidade Populacional: Carta_1 vence? (%d) \n", mediapopcid1 > mediapopcid2);
        printf("PIB per Capita: Carta_2 vence? (%d) \n", mediapib1 > mediapib2);
        printf("Poder: Carta_1 vence? (%d) \n", poderCarta1 > poderCarta2);

    
    
    




    return 0;
    }
    