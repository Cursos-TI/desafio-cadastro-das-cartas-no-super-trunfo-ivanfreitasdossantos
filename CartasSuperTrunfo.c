#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char codigo[10], codigo2[10], nomeCidade[30], nomeCidade2[30], estado[1], estado2[1];
    int populacao, populacao2 , numPontosTuristicos, numPontosTuristicos2;
    float area, area2, PIB, PIB2;

    printf("Digite o nome Primeiro Estado: \n");
    scanf("%s", &estado);

    printf("Digite o cdigo da cidade: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade : \n");
    scanf("%s", &nomeCidade);

    printf("Digite quantidade populacional: \n");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &numPontosTuristicos);


    printf("Agora vamo inserir os daods de um novo estado\n");
    printf("Digite o nome  Estado: \n");
    scanf("%s", &estado2);

    printf("Digite o cdigo da cidade: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade : \n");
    scanf("%s", &nomeCidade2);

    printf("Digite quantidade populacional: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &numPontosTuristicos2);

    printf("\n \n Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidadee: %s \n", nomeCidade);
    printf("População: %d \n", populacao);
    printf("Área: %f  km² \n", area);
    printf("Valor do PIB: %f bilhões de reais \n", PIB);
    printf("Número de Pontos Turístico: %d \n \n \n", numPontosTuristicos);


    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidadee: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f  km² \n", area2);
    printf("Valor do PIB: %f bilhões de reais \n", PIB2);
    printf("Número de Pontos Turístico: %d \n", numPontosTuristicos2);




 
 


    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
