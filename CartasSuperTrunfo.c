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
          while ( populacao1 == 0 ){
          printf("Você deve digitar um valor maior referente à população. \n");
          printf("Sugestão: Digite um valor acima de 2000. \n");
          scanf("%lu", &populacao1);}

        printf("Qual a área em km²? \n");
        scanf("%f", &area1);
            while ( area1 == 0 ){
          printf("Você deve digitar um valor maior referente à área. \n");
          printf("Sugestão: Digite um valor acima de 20000Km². \n");
          scanf("%f", &area1);}

        printf("Valor do PIB da cidade: \n");
        scanf("%f", &PIB1);

        printf("Número de pontos turisticos: \n");
        scanf("%d", &pontos1);

        printf("\n\n\n");

        printf("Muito bem, agora vamos dar sequencia para a carta_2: \n\n");
        printf("Digite o codigo da segunda carta: \n");
        scanf("%s", codigo2);

        printf("Digite o nome da cidade: \n");
        limpaBuffer();
        fgets(cidade2, 20, stdin);
        
        printf("Qual o número de habitantes? \n");
        scanf("%lu", &populacao2);
          while ( populacao2 == 0 ){
          printf("Você deve digitar um valor maior referente à população. \n");
          printf("Sugestão: Digite um valor acima de 2000. \n");
          scanf("%lu", &populacao2);}

        printf("Qual a area em km²? \n");
        scanf("%f", &area2);
          while ( area2 == 0 ){
          printf("Você deve digitar um valor maior referente à área. \n");
          printf("Sugestão: Digite um valor acima de 20000Km². \n");
          scanf("%f", &area2);}

        printf("Valor do PIB da cidade: \n");
        scanf("%f", &PIB2);

        printf("Número de pontos turisticos: \n");
        scanf("%d", &pontos2);
        
        printf("\n\n\n");


        mediapopcid1 = (populacao1 / area1);
        mediapopcid2 = (populacao2 / area2);
        mediapib1 = (PIB1 / populacao1);
        mediapib2 = (PIB2 / populacao2);

        // Invertendo a densidade populacional:

        double inversopopcid1;
        double inversopopcid2;
        inversopopcid1 = (float)1 / mediapopcid1;
        inversopopcid2 = (float)1 / mediapopcid2;

        // Calculando o poder:

        float poderCarta1, poderCarta2;
        poderCarta1 = populacao1 + area1 + PIB1 + pontos1 + inversopopcid1;
        poderCarta2 = populacao2 + area2 + PIB2 + pontos2 + inversopopcid2;

        // INFORMAÇÕES:
        printf("O jogo será baseados nas seguintes informações: \n\n\n");
        
        printf("A carta_1 contém as seguintes informações: \n\n");
        printf("Codigo: %s \n", codigo1);
        printf("Cidade: %s \n", cidade1);
        printf("Número de habitantes: %lu \n", populacao1);
        printf("A area é de: %.3f km² \n", area1);
        printf("PIB da carta: %.3f  mil dolares \n", PIB1);
        printf("Número de pontos turisticos: %d \n", pontos1);
        printf("A cidade desta carta contém %.3f habitantes por km² \n", mediapopcid1);
        printf("A riqueza média por pessoa desta carta é aproximadamente de %.2f mil dolares \n", mediapib1);
        printf("O poder da carta_1 é de %f \n\n\n", poderCarta1);

        printf("A carta_2 contém as seguintes informações: \n\n");
        printf("Codigo: %s \n", codigo2);
        printf("Cidade: %s \n", cidade2);
        printf("Número de habitantes: %lu \n", populacao2);
        printf("A area é de %.3f km² \n", area2);
        printf("PIB da carta: %.3f mil dolares \n", PIB2);
        printf("Número de pontos turisticos: %d \n", pontos2);
        printf("A cidade desta carta contém %.3f habitantes por km² \n", mediapopcid2);
        printf("A riqueza média por pessoa desta carta é aproximadamente de %.2f mil dolares \n", mediapib2);
        printf("O poder da carta_2 é de %f \n\n\n", poderCarta2);

        // Duelo entre as cartas:
        int resultado1, resultado2;
        int primeiroatributo, segundoatributo;

        printf("Você deverá escolher dois atributos referentes às informações obtidas das cartas.\n");
        printf("Após escolher o primeiro e o segundo atributo, as cartas irão travar um duelo baseado nas suas escolhas.\n");
        printf("Após o duelo uma será declarada vencedora!\n");
        printf("######## ATENÇÃO ########\n");
        printf("Você será eliminado automaticamente caso digite um número que não esteja nas opções!!!\n");
        printf("Escolha o primeiro atributo. \n");
        printf("1.População      2.Área      3.PIB      4.Pontos Turisticos \n5.Densidade Populacional     6.PIB per Capita      7.Poder \nDigite o número escolhido: \n");
        scanf("%d", &primeiroatributo);
        
        printf("\n");
 
        switch (primeiroatributo)
        {
        case 1:
          printf("Você escolheu opção 1.População!!! \n");
          resultado1 = populacao1 > populacao2 ? 1 : 0;      
          break;
        case 2:
          printf("Você escolheu opção 2.Área!!! \n");
          resultado1 = area1 > area2 ? 1 : 0;      
          break;
        case 3:
          printf("Você escolheu opção 3.PIB!!! \n");
          resultado1 = PIB1 > PIB2 ? 1 : 0;      
          break;        
          case 4:
          printf("Você escolheu opção 4.Pontos Turisticos!!! \n");
          resultado1 = pontos1 > pontos2 ? 1 : 0;      
          break;        
          case 5:
          printf("Você escolheu opção 5.Densidade Populacional!!! \n");
          resultado1 = mediapopcid1 < mediapopcid2 ? 1 : 0;      
          break;        
          case 6:
          printf("Você escolheu opção 6.PIB per Capita!!! \n");
          resultado1 = mediapib1 > mediapib2 ? 1 : 0;      
          break;        
          case 7:
          printf("Você escolheu opção 7.Poder!!! \n");
          resultado1 = poderCarta1 > poderCarta2 ? 1 : 0;      
          break;        
        default:
        printf("#### Opção inválida / Você fracassou ####\\n");
          break;
        }
        printf("\n\n");
        printf("Escolha o segundo atributo. \n");
        printf("1.População      2.Área      3.PIB      4.Pontos Turisticos \n5.Densidade Populacional     6.PIB per Capita      7.Poder \nDigite o número escolhido: \n");
        scanf("%d", &segundoatributo);

        while (primeiroatributo == segundoatributo){
           printf("O segundo atributo deverá ser diferente do primeiro. \n");
           scanf("%d", &segundoatributo);
           printf("\n\n");
        } 

          switch (segundoatributo)
        {
        case 1:
          printf("Você escolheu opção 1.População!!! \n");
          resultado2 = populacao1 > populacao2 ? 1 : 0;      
          break;
        case 2:
          printf("Você escolheu opção 2.Área!!! \n");
          resultado2 = area1 > area2 ? 1 : 0;      
          break;
        case 3:
          printf("Você escolheu opção 3.PIB!!! \n");
          resultado2 = PIB1 > PIB2 ? 1 : 0;      
          break;        
          case 4:
          printf("Você escolheu opção 4.Pontos Turisticos!!! \n");
          resultado2 = pontos1 > pontos2 ? 1 : 0;      
          break;        
          case 5:
          printf("Você escolheu opção 5.Densidade Populacional!!! \n");
          resultado2 = mediapopcid1 < mediapopcid2 ? 1 : 0;      
          break;        
          case 6:
          printf("Você escolheu opção 6.PIB per Capita!!! \n");
          resultado2 = mediapib1 > mediapib2 ? 1 : 0;      
          break;        
          case 7:
          printf("Você escolheu opção 7.Poder!!! \n");
          resultado2 = poderCarta1 > poderCarta2 ? 1 : 0;      
          break;        
        default:
        printf("#### Opção inválida / Você fracassou ####\\n");
          break;
        }

        if (resultado1 && resultado2){
          printf("###### Você venceu ##### \n");
        } else if (resultado1 != resultado2){
          printf ("Você empatou!!! \n");
        }
        else { printf("Você perdeu!!! \n");
        }

    return 0;
    }