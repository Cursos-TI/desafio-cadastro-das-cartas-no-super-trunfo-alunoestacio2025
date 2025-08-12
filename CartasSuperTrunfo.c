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

        printf("\n\n\n");

        printf("Muito bem, agora vamos dar sequencia para a carta_2: \n\n");
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
        poderCarta1 = populacao1 + area1 + PIB1 + mediapib1 + pontos1 + inversopopcid1;
        poderCarta2 = populacao2 + area2 + PIB2 + mediapib2 + pontos2 + inversopopcid2;

        // INFORMAÇÕES:
        printf("O jogo será baseados nas seguintes informações: \n\n\n");
        
        printf("A carta_1 contém as seguintes informações: \n\n");
        printf("Codigo: %s \n", codigo1);
        printf("Cidade: %s \n", cidade1);
        printf("Número de habitantes: %lu \n", populacao1);
        printf("A area é de: %.3f km² \n", area1);
        printf("PIB da carta: %.3f dolares \n", PIB1);
        printf("Número de pontos turisticos: %d \n", pontos1);
        printf("A cidade desta carta contém %.3f habitantes por km² \n", mediapopcid1);
        printf("A riqueza média por pessoa desta carta é aproximadamente de %.2f mil dolares \n", mediapib1);
        printf("O poder da carta_1 é de %f \n\n\n", poderCarta1);

        printf("A carta_2 contém as seguintes informações: \n\n");
        printf("Codigo: %s \n", codigo2);
        printf("Cidade: %s \n", cidade2);
        printf("Número de habitantes: %lu \n", populacao2);
        printf("A area é de %.3f km² \n", area2);
        printf("PIB da carta: %.3f dolares \n", PIB2);
        printf("Número de pontos turisticos: %d \n", pontos2);
        printf("A cidade desta carta contém %.3f habitantes por km² \n", mediapopcid2);
        printf("A riqueza média por pessoa desta carta é aproximadamente de %.2f mil dolares \n", mediapib2);
        printf("O poder da carta_2 é de %f \n\n\n", poderCarta2);

        // Duelo entre as cartas:
        unsigned int i;
        printf("A seguir você deverá escolher uma opção referente às informações obtidas das cartas.\n");
        printf("Após escolher uma opção, as cartas irão travar um duelo baseado na sua escolha.\n");
        printf("Após o duelo uma será declarada vencedora!\n");
        printf("Escolha sabiamente uma das opções:\n");
        printf("1.População      2.Área      3.PIB      4.Pontos Turisticos \n5.Densidade Populacional     6.PIB per Capita      7.Poder \nDigite o número escolhido: \n");
        scanf("%u", &i);
        
        printf("\n\n\n");

        switch (i)
        {
        case 1:
          printf("#### Duelo entre população ####\n");
          printf("A maior população vencerá.\n");
          printf("Iniciando o duelo...\n");
          break;
        case 2:
          printf("#### Duelo entre Área ####\n");
          printf("A maior Área vencerá.\n");
          printf("Iniciando o duelo...\n");
          break;
          case 3:
          printf("#### Duelo entre PIB ####\n");
          printf("A maior PIB vencerá.\n");
          printf("Iniciando o duelo...\n");
          break;
          case 4:
          printf("#### Duelo entre Pontos Turisticos ####\n");
          printf("Quem possuir mais Pontos Turisticos vencerá.\n");
          printf("Iniciando o duelo...\n");
          break;
          case 5:
          printf("#### Duelo entre Densidade Populacional ####\n");
          printf("Quem possuir menor Densidade Populacional vencerá.\n");
          printf("Iniciando o duelo...\n");
          break;
          case 6:
          printf("#### Duelo entre PIB per Capita ####\n");
          printf("A maior PIB per Capita vencerá.\n");
          printf("Iniciando o duelo...\n");
          case 7:
          printf("#### Duelo entre Poder ####\n");
          printf("O maior Poder vencerá.\n");
          printf("Iniciando o duelo...\n");
          break;
        default:
          printf("#### Opção inválida ####\n");
          break;
        }
        
        //RESULTADO
        if (i == 1){ 
          if (populacao1 > populacao2){ printf("A carta_1 vence!!!\n");
          } else if (populacao1 < populacao2){ printf("A carta_2 vence!!!\n");}
        } else if (i == 2){ 
          if (area1 > area2){ printf("A carta_1 vence!!!\n");
          } else if (area1 < area2){ printf("A carta_2 vence!!!\n");}
        } else if (i == 3){ 
          if (PIB1 > PIB2){ printf("A carta_1 vence!!!\n");
          } else if (PIB1 < PIB2){ printf("A carta_2 vence!!!\n");}
        } else if (i == 4){ 
          if (pontos1 > pontos2){ printf("A carta_1 vence!!!\n");
          } else if (pontos1 < pontos2){ printf("A carta_2 vence!!!\n");}
        } else if (i == 5){ 
          if (mediapopcid1 < mediapopcid2){ printf("A carta_1 vence!!!\n");
          } else if (mediapopcid1 > mediapopcid2){ printf("A carta_2 vence!!!\n");}
        } else if (i == 6){ 
          if (mediapib1 > mediapib2){ printf("A carta_1 vence!!!\n");
          } else if (mediapib1 < mediapib2){ printf("A carta_2 vence!!!\n");}
        } else if (i == 7){ 
          if (poderCarta1 > poderCarta2){ printf("A carta_1 vence!!!\n");
          } else if (poderCarta1 < poderCarta2){ printf("A carta_2 vence!!!\n");}
        } else { printf("#### O duelo deu empate ####\n");}








    return 0;
    }