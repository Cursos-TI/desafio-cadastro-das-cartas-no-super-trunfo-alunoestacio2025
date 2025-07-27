/* 
Serão duas cartas com as seguintes informações

1- o codigo das cartas devem ter uma letra seguida de um dos seguintes numeros: 01 / 02 / 03 /04
2- nome de uma cidade
3- poupulação da cidade
4- area em km quadrado
5- PIB (valor em dinheiro)
6- numero de pontos turistiscos 

*/
#include <stdio.h>
    int main(){

        char codigo1[4];
        char codigo2[4];
        char cidade1[20];
        char cidade2[20];
        int população1;
        int população2;
        float area1;
        float area2;
        float PIB1;
        float PIB2;
        int pontos1;
        int pontos2;
        
        
        printf("Para iniciarmos o jogo, identificaremos a primeira carta: \n");
        printf("Digite o codigo da primeira carta: \n");
        scanf("%s", &codigo1);

        printf("Digite o nome da cidade: \n");
        scanf("%s", &cidade1);

        printf("Qual o número de habitantes? \n");
        scanf("%d", &população1);

        printf("Qual a area em km²? \n");
        scanf("%f", &area1);

        printf("Valor do PIB da cidade: \n");
        scanf("%f", &PIB1);

        printf("Número de pontos turisticos: \n");
        scanf("%d", &pontos1);

        printf("Muito bem, agora vamos dar sequencia para a segunda carta: \n");
        printf("Digite o codigo da segunda carta: \n");
        scanf("%s", &codigo2);

        printf("Digite o nome da cidade: \n");
        scanf("%s", &cidade2);

        printf("Qual o número de habitantes? \n");
        scanf("%d", &população2);

        printf("Qual a area em km²? \n");
        scanf("%f", &area2);

        printf("Valor do PIB da cidade: \n");
        scanf("%f", &PIB2);

        printf("Número de pontos turisticos: \n");
        scanf("%d", &pontos2);

        printf("O jogo será baseados nas seguintes informações: \n");
        
        printf("A primeira carta contém as seguintes informações: \n");
        printf("Codigo: %s \n", codigo1);
        printf("Cidade: %s \n", cidade1);
        printf("Número de habitantes: %.d \n", população1);
        printf("A area é de %.3f km² \n", area1);
        printf("PIB da carta: %.3f dolares \n", PIB1);
        printf("Número de pontos turisticos: %d \n", pontos1);

        printf("A carta 2 contém as seguintes informações: \n");
        printf("Codigo: %s \n", codigo2);
        printf("Cidade: %s \n", cidade2);
        printf("Número de habitantes: %d \n", população2);
        printf("A area é de %.3f km² \n", area2);
        printf("PIB da carta: %.3f dolares \n", PIB2);
        printf("Número de pontos turisticos: %d \n", pontos2);
    
    
    
    
    }
    
