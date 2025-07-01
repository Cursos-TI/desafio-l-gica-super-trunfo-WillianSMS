#include <stdio.h>

//Obs.: A partir daqui deve se levar em consideração o ambiente Utilizado, o que no caso o ambiente é o GitHub

int main(){

//Definindo as variáveis carta A.

	int Numero_PontosTuristicos_A; //Variáveis referente a Quantidade de pontos turisticos
	unsigned long int Populacao_A; //Variável população em grandes quantidades
	float PIB_A, Areakm2_A, DensidadePopulacional_A, PIBperCapita_A, DensidadePopulacionalInvertida_A, superPoder_1A, superPoder_2A; //Variáveis referente ao PIB,area em km2, densidade populacional, densidade populaciona invertida, super poder
	char Estado_A; //Variável referente ao estado
	char Nome_cidade_A[50]; //Variável referente ao nome da cidade
	char Codigo_carta_A[10]; //Variavel referente ao codigo da carta
//Obs.: As variáveis estão terminando com uma letra A para que possa haver uma diferenciação entre as 2 cartas A e B
//Obs.: Devido a uma dúvida referente a densidade populacional invertida criei uma variavel nova referente a tal, do mesmo modo o criei duas variáveis super poder, calculando um com a densidade populacional e o outro com a densidade populacional invertida

//Inicio do código, onde será digitado os valores das variáveis da carta A.

    printf("Codigo da carta A: "); //neste campo devera digitar o codigo da carta.
	scanf(" %s", Codigo_carta_A);

	printf("Estado: "); //neste campo deverá digitar apenas uma letra que represente um dos estados, assim como pedido no enunciado do desafio.
	scanf(" %c", &Estado_A);

	printf("Nome da Cidade: "); // neste campo deverá digitar nome da cidade sem espaços, preferencialmente opte por usar nomes unico, ex: Manaus, evite utilizar nomes como São Paulo, se ainda sim quiser escrever nomes que possuam espaçamento escreva tudo junto colocando letras maiúsculas para identificar onde há espaço.
	scanf(" %s", Nome_cidade_A);

	printf("PIB: ");//neste campo digite um valor que represente o PIB. obs.: por ser um codigo para praticar o nivel iniciante de programação em C não há a nescessidade de utilizar um valor exato ou espcífico.
	scanf(" %f", &PIB_A);

	printf("Area: ");//neste campo digite um valor que ira representa a área da região. OBS.: assim como o PIB não a nescessidade de ser um valor específico.
	scanf(" %f", &Areakm2_A);

	printf("Populacao: ");//neste campo digite a população da região, não há a nescessidadede valores específico.
	scanf(" %lu", &Populacao_A);

	printf("Quantidade de pontos turisticos: ");//neste campo digite a quantidade de pontos turísticos.
	scanf(" %d", &Numero_PontosTuristicos_A);
	
//OBS.: Tudo o que foi explicado, ou especificado nos comentarios na carta A deverá ser aplicado na carta B.

//Calculo da densidade populacional e do PIB per Capita referentes a carta A
    DensidadePopulacional_A = (float) Populacao_A / Areakm2_A;
	PIBperCapita_A = (float) PIB_A / Populacao_A;
	
//Calculo da densidade populacional invertida
    DensidadePopulacionalInvertida_A = (float)Areakm2_A / Populacao_A;
	
//Calculo do super poder
    superPoder_1A = (float)Populacao_A + Areakm2_A + PIB_A + Numero_PontosTuristicos_A + PIBperCapita_A + DensidadePopulacional_A;
	superPoder_2A = (float)Populacao_A + Areakm2_A + PIB_A + Numero_PontosTuristicos_A + PIBperCapita_A + DensidadePopulacionalInvertida_A;

//A impressão da informação Carta A.

    printf("\n -------- Carta A -------- \n");
    printf("Codigo da carta A: %s\n", Codigo_carta_A);
	printf("Estado: %c\n", Estado_A);
	printf("Cidade: %s\n", Nome_cidade_A);
	printf("PIB: %.2f\n", PIB_A);
	printf("Area: %.2fkm2\n", Areakm2_A);
	printf("Populacao: %lu\n", Populacao_A);
	printf("Quantidade de pontos turisticos: %d\n", Numero_PontosTuristicos_A);
	printf("Densidade Populacional: %.2f\n", DensidadePopulacional_A);
	printf("Densidade Populacional invertida: %.2f km2\n", DensidadePopulacionalInvertida_A);
	printf("PIB per Capita: %.2f\n", PIBperCapita_A);
	printf("Super poder 1A: %.2f\n", superPoder_1A);
	printf("Super poder 2A: %.2f\n", superPoder_2A);
	printf("\n ------------------------- \n");
	  

//Definindo as variáveis carta B.

	int Numero_PontosTuristicos_B; //Variáveis referente a Quantidade de pontos turisticos
	unsigned long int Populacao_B; //Variável população em grandes quantidades
	float PIB_B, Areakm2_B, DensidadePopulacional_B, PIBperCapita_B, DensidadePopulacionalInvertida_B, superPoder_1B, superPoder_2B; //Variáveis referente ao PIB,area em km2, densidade populacional, densidade populaciona invertida, super poder
	char Estado_B; //Variável referente ao estado
	char Nome_cidade_B[50]; //Variável referente ao nome da cidade
	char Codigo_carta_B[10]; //Variavel referente ao codigo da carta
//Obs.: As variáveis estão terminando com uma letra B para que possa haver uma diferenciação entre as 2 cartas A e B

//Inicio do código, onde será digitado os valores das variáveis da carta B.

    printf("Codigo da carta B: ");
	scanf(" %s", Codigo_carta_B);

	printf("Estado: ");
	scanf(" %c", &Estado_B);

	printf("Nome da Cidade: ");
	scanf(" %s", Nome_cidade_B);

	printf("PIB: ");
	scanf(" %f", &PIB_B);

	printf("Area: ");
	scanf(" %f", &Areakm2_B);

	printf("Populacao: ");
	scanf(" %lu", &Populacao_B);

	printf("Quantidade de pontos turisticos: ");
	scanf(" %d", &Numero_PontosTuristicos_B);
	
//Calculo da densidade populacional e do PIB per Capita referentes a carta B	
	DensidadePopulacional_B = (float) Populacao_B / Areakm2_B;
	PIBperCapita_B = (float) PIB_B / Populacao_B;
	
//Calculo da densidade populacional invertida
    DensidadePopulacionalInvertida_B = (float)Areakm2_B / Populacao_B;
	
//Calculo do super poder
    superPoder_1B = (float)Populacao_B + Areakm2_B + PIB_B + Numero_PontosTuristicos_B + PIBperCapita_B + DensidadePopulacional_B;
	superPoder_2B = (float)Populacao_B + Areakm2_B + PIB_B + Numero_PontosTuristicos_B + PIBperCapita_B + DensidadePopulacionalInvertida_B;

//A impressão da informação Carta B.
                       
    printf("\n -------- Carta B -------- \n");
    printf("Codigo da carta B: %s\n", Codigo_carta_B);
	printf("Estado: %c\n", Estado_B);
	printf("Cidade: %s\n", Nome_cidade_B);
	printf("PIB: %.2f\n", PIB_B);
	printf("Area: %.2fkm2\n", Areakm2_B);
	printf("Populacao: %lu\n", Populacao_B);
	printf("Quantidade de pontos turisticos: %d\n", Numero_PontosTuristicos_B);
	printf("Densidade Populacional: %.2f\n", DensidadePopulacional_B);
	printf("Densidade Populacional invertida: %.2f km2\n", DensidadePopulacionalInvertida_B);
	printf("PIB per Capita: %.2f\n", PIBperCapita_B);
	printf("Super poder 1B: %.2f\n", superPoder_1B);
	printf("Super poder 2B: %.2f\n", superPoder_2B);
    printf("\n ------------------------- \n");
	
//Comparação das variáveis
    printf("\n \n");
	
	int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7, resultado8, resultado9;
	
	resultado1 = Numero_PontosTuristicos_A > Numero_PontosTuristicos_B;
	resultado2 = Populacao_A < Populacao_B;
	resultado3 = PIB_A > PIB_B;
	resultado4 = Areakm2_A > Areakm2_B;
	resultado5 = DensidadePopulacional_A > DensidadePopulacional_B;
	resultado6 = PIBperCapita_A > PIBperCapita_B;
	resultado7 = DensidadePopulacionalInvertida_A > DensidadePopulacionalInvertida_B;
	resultado8 = superPoder_1A > superPoder_1B;
	resultado9 = superPoder_2A > superPoder_2B;
	
	
	printf("Variaveis vencedoras da carta A sera representado pela validacao 1, ja os da carta B sera representado pela validacao 0\n");
	printf("Pontos Turisticos: %d\n", resultado1);
	printf("Populacao: %d\n", resultado2);
	printf("PIB: %d\n", resultado3);
	printf("Area km2: %d\n", resultado4);
	printf("Densidade Populacional: %d\n", resultado5);
	printf("PIB per Capita: %d\n", resultado6);
	printf("Densidade populacional invertida: %d\n", resultado7);
	printf("Super Poder 1: %d\n", resultado8);
	printf("Super Poder 2: %d\n", resultado9);
	
	
	printf("\n comparacoes adicionais, sera utilizada apenas uma variavel para demontracao da comparacao \n");
	
	printf("DensidadePopulacionalInvertida_A < DensidadePopulacionalInvertida_B: %d\n",(float)DensidadePopulacionalInvertida_A < DensidadePopulacionalInvertida_B);
	printf("DensidadePopulacionalInvertida_A <= DensidadePopulacionalInvertida_B: %d\n",(float)DensidadePopulacionalInvertida_A <= DensidadePopulacionalInvertida_B);
	printf("DensidadePopulacionalInvertida_A >= DensidadePopulacionalInvertida_B: %d\n",(float)DensidadePopulacionalInvertida_A >= DensidadePopulacionalInvertida_B);
	printf("DensidadePopulacionalInvertida_A == DensidadePopulacionalInvertida_B: %d\n",(float)DensidadePopulacionalInvertida_A == DensidadePopulacionalInvertida_B);
	printf("DensidadePopulacionalInvertida_A != DensidadePopulacionalInvertida_B: %d\n",(float)DensidadePopulacionalInvertida_A != DensidadePopulacionalInvertida_B);
	
	return 0;

//Fim do programa

}