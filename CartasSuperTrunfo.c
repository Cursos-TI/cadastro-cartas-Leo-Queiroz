#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
//Váriaveis

		char Estado1;
		char Estado2;

		char Codigo1 [4];
		char Codigo2[4];

		char NomeCidade1[30];
		char NomeCidade2[31];

		int Populacao1;
		int Populacao2;

		float AreaEmkm1;
		float AreaEmkm2;

		float PIB1;
		float PIB2;

		int PontoT1;
		int PontoT2;

  // Área para entrada de dados
    //carta 1
		printf("Vamos fazer a Primeira carta\n");

		printf("Digite a letra do estado(apenas letras de A até H): ");
		scanf(" %c", &Estado1);

		printf("Digite o código da cidade(Codigo exemplo:A01): ");
		scanf(" %s",&Codigo1);

		printf("digite o nome da cidade(Caso tenha espaço digite apenas a sigla(ex: RJ): ");
		scanf(" %s", &NomeCidade1);

		printf("Digite a População: (numero inteiro) ");
		scanf(" %d", &Populacao1);

		printf("Digite a A Area em km²: ");
		scanf("%f", &AreaEmkm1);

		printf("Digite o PIB: ");
		scanf("%f", &PIB1);

		printf("Digite a Quantidade de pontos Turísticos: ");
		scanf("%d", &PontoT1);



		//carta 2
		printf("\nAgora faremos a segunda carta\n");

		printf("Digite a letra do estado(apenas letras de A até H): ");
		scanf(" %c", &Estado2);

		printf("Digite o código da cidade(Codigo exemplo:A01): ");
		scanf("%s",Codigo2);

		printf("digite o nome da cidade(Caso tenha espaço digite apenas a sigla(ex: RJ): ");
		scanf("%s", NomeCidade2);

		printf("Digite a População: (numero inteiro) ");
		scanf("%d", &Populacao2);

		printf("Digite a A Area em km²: ");
		scanf("%f", &AreaEmkm2);

		printf("Digite o PIB: ");
		scanf("%f", &PIB2);

		printf("Digite a Quantidade de pontos Turísticos: ");
		scanf("%d", &PontoT2);
    
  // Área para exibição dos dados da cidade

  //printando

		printf("\nCARTA 1:\n");

		printf("Estado: %c\n", Estado1);
		printf("Código: %s\n", Codigo1);
		printf("Nome da cidade: %s\n", NomeCidade1);
		printf("Populaçao: %d\n", Populacao1);
		printf("Área: %f km²\n",AreaEmkm1);
		printf("PIB: %.2f Bilhões de reais\n",PIB1);
		printf("Numero de pontos turísticos: %d\n",PontoT1);


		printf("\nCARTA 2:\n");

		printf("Estado: %c\n", Estado2);
		printf("Código: %s\n", Codigo2);
		printf("Nome da cidade: %s\n", NomeCidade2);
		printf("Populaçao: %d\n", Populacao2);
		printf("Área: %f km²\n",AreaEmkm2);
		printf("PIB: %.2f Bilhões de reais\n",PIB2);
		printf("Numero de pontos turísticos: %d",PontoT2);

return 0;
} 
