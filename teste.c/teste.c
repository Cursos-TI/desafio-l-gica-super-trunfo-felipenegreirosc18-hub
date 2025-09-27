#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
        printf("### Desafio Super Trunfo! ###\n");

    // Declaração das variáveis da Carta 1
    char Estado1[2];
    char CodigoDaCarta1[4], NomeDaCidade1[50];
    unsigned long int Populacao1; 
    int NumeroDePontosTuristicos1;
    float Area1, PIB1;

    // Declaração das variáveis da Carta 2
    char Estado2[2];
    char CodigoDaCarta2[4], NomeDaCidade2[50];
    unsigned long int Populacao2; 
    int NumeroDePontosTuristicos2;
    float Area2, PIB2;


    // Entrada de dados da Carta 1
        printf("\n*** Cadastro da Carta1 ***\n");
        printf("Digite a letra do Estado (letra de A a H):\n");
        scanf ("%1s", Estado1);

        printf("Digite o Código Da Carta (ex: A01): \n");
        scanf("%3s", CodigoDaCarta1);

        printf("Digite o Nome Da Cidade: \n");
        scanf("%50s", NomeDaCidade1);

        printf("Digite o tamanho da População: \n");
        scanf("%lu", &Populacao1);

        printf("Digite a Área (em km²): \n");
        scanf("%f",  &Area1);

        printf("Digite o PIB: \n");
        scanf("%f", &PIB1);

        printf("Digite o Número De Pontos Turísticos: \n");
        scanf("%d", &NumeroDePontosTuristicos1);

        // Entrada de dados da Carta 2
        printf("\n*** Cadastro da Carta2 ***\n");
        printf("Digite a letra do Estado (letra de A a H):\n");
        scanf ("%1s", Estado2);

        printf("Digite o Código Da Carta (ex: A01): \n");
        scanf("%3s", CodigoDaCarta2);

        printf("Digite o Nome Da Cidade: \n");
        scanf("%50s", NomeDaCidade2);

        printf("Digite o tamanho da População: \n");
        scanf("%lu", &Populacao2);

        printf("Digite a Área (em km²): \n");
        scanf("%f",  &Area2);

        printf("Digite o PIB: \n");
        scanf("%f", &PIB2);

        printf("Digite o Número De Pontos Turísticos: \n");
        scanf("%d", &NumeroDePontosTuristicos2);

    // Exibição dos dados da Carta1
        printf("\n--- Carta1 ---\n");     
        printf("Estado: %s\n", Estado1);
        printf("Código: %s\n", CodigoDaCarta1);
        printf("Nome Da Cidade: %s\n", NomeDaCidade1);
        printf("População: %lu\n", Populacao1);
        printf("Área: %.2f km²\n", Area1);
        printf("PIB: %.2f bilhões de reais\n", PIB1);
        printf("Número de Pontos Turísticos: %d\n", NumeroDePontosTuristicos1);

        float DensidadePopulacional1 = Populacao1 / Area1;
        printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional1);

        //O Pib per Capita é multiplicado por 1.000.000.000 por estar informado ser em bilhões de reais
        float PibperCapita1 = PIB1 * 1000000000 / Populacao1;
        printf("Pib per Capita: %.2f Reais\n", PibperCapita1);

        //Criação do Inverso de Densidade Populacional
        float InversoDensidadePopulacional1 = 1 / DensidadePopulacional1;
        float SuperPoder1 = (float)Populacao1 + Area1 + PIB1 + NumeroDePontosTuristicos1 + PibperCapita1 + InversoDensidadePopulacional1;
        printf("Super Poder: %.2f\n", SuperPoder1);


        // Exibição dos dados da Carta2
        printf("\n---Carta2---\n");
        printf("Estado: %s\n", Estado2);
        printf("Código: %s\n", CodigoDaCarta2);
        printf("Nome Da Cidade: %s\n", NomeDaCidade2);
        printf("População: %lu\n", Populacao2);
        printf("Área: %.2f km²\n", Area2);
        printf("PIB: %.2f bilhões de reais\n", PIB2);
        printf("Número de Pontos Turísticos: %d\n", NumeroDePontosTuristicos2);
        float DensidadePopulacional2 = Populacao2 / Area2;
        printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional2);

        //O Pib per Capita é multiplicado por 1.000.000.000 por estar informado ser em bilhões de reais
        float PibperCapita2 = PIB2 * 1000000000 / Populacao2;
        printf("Pib per Capita: %.2f Reais\n", PibperCapita2);

        //Criação do Inverso de Densidade Populacional
        float InversoDensidadePopulacional2 = 1 / DensidadePopulacional2;
        float SuperPoder2 = (float)Populacao2 + Area2 + PIB2 + NumeroDePontosTuristicos2 + PibperCapita2 + InversoDensidadePopulacional2;
        printf("Super Poder: %.2f\n", SuperPoder2);

        //Foram criadas variáveis para o switch utilizar como base e o a variável resultadoAtributo como controle para as escolhas do jogador
        int AtributoEscolhido1, AtributoEscolhido2;
        int resultadoAtributo1, resultadoAtributo2;
        float somaDosAtributos;

        printf("\n### Escolha o primeiro atributo para utilizar na batalha! ###\n\n");
        printf("%s - %s\n", NomeDaCidade1, NomeDaCidade2);
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de pontos turísticos\n");
        printf("5. Densidade populacional\n");
        scanf("%d", &AtributoEscolhido1);

        switch (AtributoEscolhido1){
            case 1:
                printf("Você escolheu 'População' para a batalha!\n");
                resultadoAtributo1 = Populacao1 > Populacao2 ? 1 : 0;
                break;
                  
            case 2:
                printf("Você escolheu 'Área' para a batalha!\n");
                resultadoAtributo1 = Area1 > Area2 ? 1 : 0;
                break;
                  
            case 3:
                printf("Você escolheu 'PIB' para a batalha!\n");
                resultadoAtributo1 = PIB1 > PIB2 ? 1 : 0;
                break;
                  
            case 4:
                printf("Você escolheu 'Número de pontos turísticos' para a batalha!\n");
                resultadoAtributo1 = NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2 ? 1 : 0;
                break;
                    
            case 5:
                printf("Você escolheu 'Densidade Populacional' para a batalha!\n");
                resultadoAtributo1 = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0; 
                break;   
                default:
                    printf("Opção inválida! Escolha de 1 a 5.\n\n");
                    break;
                
               }

        printf("\n### Agora escolha o segundo atributo! ###\n\n");
        printf("Escolha um atributo diferente do anterior!\n");
        printf("%s - %s\n", NomeDaCidade1, NomeDaCidade2);
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de pontos turísticos\n");
        printf("5. Densidade populacional\n");
        scanf("%d", &AtributoEscolhido2);

        if (AtributoEscolhido1 == AtributoEscolhido2){
            printf("Essa opção já foi escolhida!\n");
        }   else{
        switch (AtributoEscolhido2){
            case 1:
                printf("Você escolheu 'População' para a batalha!\n");
                resultadoAtributo2 = Populacao1 > Populacao2 ? 1 : 0;
                break;
                  
            case 2:
                printf("Você escolheu 'Área' para a batalha!\n");
                resultadoAtributo2 = Area1 > Area2 ? 1 : 0;
                break;
                  
            case 3:
                printf("Você escolheu 'PIB' para a batalha!\n");
                resultadoAtributo2 = PIB1 > PIB2 ? 1 : 0;
                break;
                  
            case 4:
                printf("Você escolheu 'Número de pontos turísticos' para a batalha!\n");
                resultadoAtributo2 = NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2 ? 1 : 0;
                break;
                    
            case 5:
                printf("Você escolheu 'Densidade Populacional' para a batalha!\n");
                resultadoAtributo2 = DensidadePopulacional1 < DensidadePopulacional2 ? 1 : 0; 
                break;   
                default:
                    printf("Opção inválida! Escolha de 1 a 5.\n\n");
                    break;
                
               }
            }
            //Exibição dos dois atributos
            printf("%s vs %s\n", NomeDaCidade1, NomeDaCidade2);
            printf("Atributo 1: %s\n",
                (AtributoEscolhido1 == 1) ? "População" :
                (AtributoEscolhido1 == 2) ? "Área" :
                (AtributoEscolhido1 == 3) ? "PIB" :
                (AtributoEscolhido1 == 4) ? "Número de pontos turísticos" :
                (AtributoEscolhido1 == 5) ? "Densidade populacional" :
                "Atributo inválido");

           if (AtributoEscolhido1 == 1){
           printf("Carta 1: %lu\nCarta 2: %lu\n", Populacao1, Populacao2);
           } else if (AtributoEscolhido1 == 2){
            printf("Carta 1: %.2f\n Carta 2: %.2f\n", Area1, Area2);
           }    else if (AtributoEscolhido1 == 3){
            printf("Carta 1: %.2f\n Carta 2: %.2f\n", PIB1, PIB2);
           }    else if (AtributoEscolhido1 == 4){
            printf("Carta 1: %d\n Carta 2: %d\n", NumeroDePontosTuristicos1, NumeroDePontosTuristicos2);
           }    else if (AtributoEscolhido1 == 5){
            printf("Carta 1: %.2f\n Carta 2: %.2f\n", DensidadePopulacional1, DensidadePopulacional2);
           }

            printf("Atributo 2: %s\n",
            (AtributoEscolhido2 == 1) ? "População" :
            (AtributoEscolhido2 == 2) ? "Área" :
            (AtributoEscolhido2 == 3) ? "PIB" :
            (AtributoEscolhido2 == 4) ? "Número de pontos turísticos" :
            (AtributoEscolhido2 == 5) ? "Densidade populacional" :
            "Atributo inválido");
           if (AtributoEscolhido2 == 1){
            printf("Carta 1: %lu\nCarta 2: %lu\n", Populacao1, Populacao2);
           } else if (AtributoEscolhido2 == 2){
            printf("Carta 1: %.2f\nCarta 2: %.2f\n", Area1, Area2);
           }    else if (AtributoEscolhido2 == 3){
            printf("Carta 1: %.2f\nCarta 2: %.2f\n", PIB1, PIB2);
           }    else if (AtributoEscolhido2 == 4){
            printf("Carta 1: %d\nCarta 2: %d\n", NumeroDePontosTuristicos1, NumeroDePontosTuristicos2);
           }    else if (AtributoEscolhido2 == 5){
            printf("Carta 1: %.2f\nCarta 2: %.2f\n", DensidadePopulacional1, DensidadePopulacional2);
           }
        
        //    

    return 0;
    }