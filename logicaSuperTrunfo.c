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
	
//Comparação das variáveis com if
    printf("\n Comparação de Variáveis utilizando função IF \n");
	
	if(PIB_A > PIB_B){
		printf("O PIB da carta A venceu!\n");
	}
	
	if(Areakm2_A > Areakm2_B){
		printf("A area da carta A venceu!\n");
	}
	
	if(Populacao_A > Populacao_B){
		printf("A população da carta A venceu\n!");
	}
	
	if(Numero_PontosTuristicos_A > Numero_PontosTuristicos_B){
		printf("Pontos Turisticos carta A venceu!\n");
	}
	
	if(DensidadePopulacional_A < DensidadePopulacional_B){
		printf("Densidade Populacional carta B venceu!\n");
	}
	
	if (DensidadePopulacionalInvertida_A > DensidadePopulacionalInvertida_B){
		printf("Densidade Populacional invertida carta A venceu!\n");
	}
	
	if (PIBperCapita_A > PIBperCapita_B){
		printf("PIB per Capita carta A venceu!\n");
	}
	
	if(superPoder_1A > superPoder_1B){
		printf("Super Poder 1A venceu!\n");
	}
	
	if(superPoder_2A > superPoder_2B){
		printf("Super Poder 2A venceu!\n");
	}
	
//Comparação das variáveis com if-else
	printf("\n Mesma comparação anterio porem com função IF-ELSE \n");

    if(PIB_A > PIB_B){
		printf("O PIB da carta A venceu!\n");
	}else{
		printf("O PIB da carta B venceu!\n");
	}
	
	if(Areakm2_A > Areakm2_B){
		printf("A area da carta A venceu!\n");
	}else{
		printf("A area da carta B venceu!\n");
	}
	
	if(Populacao_A > Populacao_B){
		printf("A população da carta A venceu!\n");
	}else{
		printf("A população da carta B venceu!\n");
	}
	
	if(Numero_PontosTuristicos_A > Numero_PontosTuristicos_B){
		printf("Pontos Turisticos carta A venceu!\n");
	}else{
		printf("Pontos Turisticos carta B venceu!\n");
	}
	
	if(DensidadePopulacional_A < DensidadePopulacional_B){
		printf("Densidade Populacional carta B venceu!\n");
	}else{
		printf("Densidade Populacional carta A venceu!\n");
	}
	
	if (DensidadePopulacionalInvertida_A > DensidadePopulacionalInvertida_B){
		printf("Densidade Populacional invertida carta A venceu!\n");
	}else{
		printf("Densidade Populacional invertida carta B venceu!\n");
	}
	
	if (PIBperCapita_A > PIBperCapita_B){
		printf("PIB per Capita carta A venceu!\n");
	}else{
		printf("PIB per Capita carta B venceu!\n");
	}
	
	if(superPoder_1A > superPoder_1B){
		printf("Super Poder 1A venceu!\n");
	}else{
		printf("Super Poder 1B venceu!\n");
	}
	
	if(superPoder_2A > superPoder_2B){
		printf("Super Poder 2A venceu!\n");
	}else{
		printf("Super Poder 2B venceu!\n");
	}
	
	return 0;

//Fim do programa

}