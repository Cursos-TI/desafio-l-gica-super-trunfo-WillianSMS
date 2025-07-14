#include <stdio.h>

//Obs.: A partir daqui deve se levar em consideração o ambiente Utilizado, o que no caso o ambiente é o GitHub

int main(){

//Definindo as variáveis carta A.

	int Numero_PontosTuristicos_A; //Variáveis referente a Quantidade de pontos turisticos
	unsigned long int Populacao_A; //Variável população em grandes quantidades
	float PIB_A, Areakm2_A, DensidadePopulacional_A, PIBperCapita_A, DensidadePopulacionalInvertida_A, superPoder_1A, superPoder_2A; //Variáveis referente ao PIB,area em km2, densidade populacional, densidade populaciona invertida, super poder
	char Estado_A; //Variável referente ao estado
	char Nome_cidade_A[50], Nome_pais_A[50]; //Variável referente ao nome da cidade
	char Codigo_carta_A[10]; //Variavel referente ao codigo da carta
//Obs.: As variáveis estão terminando com uma letra A para que possa haver uma diferenciação entre as 2 cartas A e B
//Obs.: Devido a uma dúvida referente a densidade populacional invertida criei uma variavel nova referente a tal, do mesmo modo o criei duas variáveis super poder, calculando um com a densidade populacional e o outro com a densidade populacional invertida

//Inicio do código, onde será digitado os valores das variáveis da carta A.

    printf("Codigo da carta A: "); //neste campo devera digitar o codigo da carta.
	scanf(" %s", Codigo_carta_A);
	
	printf("País:"); //neste campo deverá digitar nome do país sem espaços, preferencialmente opte por usar nomes unico, ex: Inglaterra, evite utilizar nomes como Estados Unidos, se ainda sim quiser escrever nomes que possuam espaçamento escreva tudo junto colocando letras maiúsculas para identificar onde há espaço.
	scanf(" %s", Nome_pais_A);

	printf("Estado: "); //neste campo deverá digitar apenas uma letra que represente um dos estados, assim como pedido no enunciado do desafio.
	scanf(" %c", &Estado_A);

	printf("Nome da Cidade: "); //neste campo deverá digitar nome da cidade sem espaços, preferencialmente opte por usar nomes unico, ex: Manaus, evite utilizar nomes como São Paulo, se ainda sim quiser escrever nomes que possuam espaçamento escreva tudo junto colocando letras maiúsculas para identificar onde há espaço.
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
	printf("País: %s\n", Nome_pais_A);
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
	char Nome_cidade_B[50], Nome_pais_B[50]; //Variável referente ao nome da cidade
	char Codigo_carta_B[10]; //Variavel referente ao codigo da carta
//Obs.: As variáveis estão terminando com uma letra B para que possa haver uma diferenciação entre as 2 cartas A e B

//Inicio do código, onde será digitado os valores das variáveis da carta B.

    printf("Codigo da carta B: ");
	scanf(" %s", Codigo_carta_B);
	
	printf("País: ");
	scanf(" %s", Nome_pais_B);

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
    printf("País: %s\n", Nome_pais_B);
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
	
//uso do switch
    int opcao, resultado1, resultado2;
	float soma1, soma2;
    char primeiroAtributo, segundoAtributo;
	
	printf("Bem Vindo ao Jogo Super Trunfo");
	printf("Menu:\n");
	printf("1. Regras\n");
	printf("2. Iniciar Jogo\n");
	printf("3. Sair\n");
	printf("Selecione uma Opção:");
	scanf(" %d", &opcao);
	
	switch (opcao)
	{
	case 1:
		printf("Bem Vindo ao Jogo Super Trunfo.\n");
		printf("Regras:\n");
		printf("Neste jogo o jogador ou Jogadores deveram escolher 2 atributos DIFERENTES para comparação.\n");
		printf("Vence o atributo com maior valor.\n");
		printf("Porém a uma excessão, a Densidade Populacional, no caso em que envolver a densidade populacional vence aquele que for menor.\n");
		printf("O mesmo valera para Densidade Populacional Invertida\n");
		printf("Os jogadores poderam estabelecer uma regra entres eles, a de utilizar a densidade populacional e a densidade populacional invertida, como um coringa ou uma garantia de um ponto extra, para um jogo mais justo\n");
		printf("Cada Comparação rendera 1 ponto para o Vencedor, porém empates não renderam nenhum ponto.\n");
		printf("A soma de pontos deverá ser feita com Lapis(caneta) e pepel, pelo(s) jogador(es).\n");
		printf("Para que não haja complicações no código do jogo.\n");
		printf("Se os jogares escolher mesmo atributo o jogo não proseguirá e deverá ser reiniciado.\n");
		printf("Os resultados seram dados como 1 e 0, para identificar qual venceu.\n");
		printf("se o resultado1 e resultado2 der 1, sera dado como vitória.\n");
		printf("se o resultado1 e o resultado2 for diferentes, sera dado como empate.\n");
		printf("No final haverá uma pontuação extra onde será a soma de todos os atributos.\n");
		printf("se o não for nenhum dos dois será dado como derrota.\n");
		printf("não será usado valores gerado por computador, séra usado apenas os valores dados no inicio da programação.\n");
		
		break;
		
	case 2:
		printf("Bem Vindo ao Jogo\n");
		printf("Menu de Atributos:\n");
		printf("A. PIB\n");
		printf("B. Area\n");
		printf("C. População\n");
		printf("D. Numero Pontos de Turísticos\n");
		printf("E. Densidade Populacional\n");
		printf("F. Densidade Populacional Invertida\n");
		printf("G. PIB per Capita\n");
		printf("H. Super Poder Um\n");
		printf("I. Super Poder Dois\n");
		printf("Por favor selecione um atributo:");
		scanf(" %c", &primeiroAtributo);
//nos dois switch eu coloquei todos os atributos de comparação, 	
		switch (primeiroAtributo)
		{
			
		case 'A':
			resultado1 = PIB_A > PIB_B ? 1 : 0;
			break;
			
		case 'B':
			resultado1 = Areakm2_A > Areakm2_B ? 1 : 0;
			break;

	    case 'C':
			resultado1 = Populacao_A > Populacao_B ? 1 : 0;
			break;
			
		case 'D':
			resultado1 = Numero_PontosTuristicos_A > Numero_PontosTuristicos_B ? 1 : 0;
			break;
			
		case 'E':
			resultado1 = DensidadePopulacional_A < DensidadePopulacional_B ? 1 : 0;
			break;
			
	    case 'F':
			resultado1 = DensidadePopulacionalInvertida_A < DensidadePopulacionalInvertida_B ? 1 : 0;
			break;
			
		case 'G':
			resultado1 = PIBperCapita_A > PIBperCapita_B ? 1 : 0;
			break;
			
		case 'H':
			resultado1 = superPoder_1A > superPoder_1B ? 1 : 0;
			break;
			
	    case 'I':
			resultado1 = superPoder_2A > superPoder_2B ? 1 : 0;
			break;
			
		default:
			printf("Atributo Inválido!");
			break;
		}
		
		printf("Por favor selecione um atributo:");
		scanf(" %c", &segundoAtributo);
		
		if(primeiroAtributo == segundoAtributo){
			printf("Você escolheu o mesmo atributo, por favor Reinicie o jogo!");	
		}else{
		switch (segundoAtributo)
		{
			
		case 'A':
			resultado2 = PIB_A > PIB_B ? 1 : 0;
			break;
			
		case 'B':
			resultado2 = Areakm2_A > Areakm2_B ? 1 : 0;
			break;
			
	    case 'C':
			resultado2 = Populacao_A > Populacao_B ? 1 : 0;
			break;
			
		case 'D':
			resultado2 = Numero_PontosTuristicos_A > Numero_PontosTuristicos_B ? 1 : 0;
			break;
			
		case 'E':
			resultado2 = DensidadePopulacional_A < DensidadePopulacional_B ? 1 : 0;
			break;
			
	    case 'F':
			resultado2 = DensidadePopulacionalInvertida_A < DensidadePopulacionalInvertida_B ? 1 : 0;
			break;
			
		case 'G':
			resultado2 = PIBperCapita_A > PIBperCapita_B ? 1 : 0;
			break;
			
		case 'H':
			resultado2 = superPoder_1A > superPoder_1B ? 1 : 0;
			break;
			
	    case 'I':
			resultado2 = superPoder_2A > superPoder_2B ? 1 : 0;
			break;
		default:
			printf("Atributo Inválido!");
			break;
		}
		}
		soma1 = PIB_A + Areakm2_A + Populacao_A + Numero_PontosTuristicos_A + DensidadePopulacional_A + DensidadePopulacionalInvertida_A + PIBperCapita_A + superPoder_1A + superPoder_2A;
		soma2 = PIB_B + Areakm2_B + Populacao_B + Numero_PontosTuristicos_B + DensidadePopulacional_B + DensidadePopulacionalInvertida_B + PIBperCapita_B + superPoder_1B + superPoder_2B;
		
//para poupar tempo eu coloquei as 2 cartas inteiras para exibir, pois de outra forma eu teria que produzir um if-else mais longo para mostrar cada atributo
//fazendo dessa forma eu simplifiquei e poupei tempo que seria gasto de forma desnecessária
		if((resultado1 == 1) && (resultado2 == 1)){
			printf("O resultado 1 é: %d, e o Resultado 2 é: %d\n", resultado1, resultado2);
			printf("\n -------- Carta A -------- \n");
			printf("Codigo da carta A: %s\n", Codigo_carta_A);
			printf("País: %s\n", Nome_pais_A);
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
			printf("Soma dos Atributos: %.2f\n", soma1);
			printf("\n ------------------------- \n");
			
			printf("\n -------- Carta B -------- \n");
			printf("Codigo da carta B: %s\n", Codigo_carta_B);
			printf("País: %s\n", Nome_pais_B);
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
			printf("Soma dos Atributos: %.2f\n", soma2);
			printf("\n ------------------------- \n");
		
			printf("### VOCÊ VENCEU! ###\n");
	
		}else if ((resultado1 == 0)&&(resultado2 == 0)){
			printf("O resultado 1 é: %d, e o Resultado 2 é: %d\n", resultado1, resultado2);
			printf("\n -------- Carta A -------- \n");
			printf("Codigo da carta A: %s\n", Codigo_carta_A);
			printf("País: %s\n", Nome_pais_A);
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
			printf("Soma dos Atributos: %.2f\n", soma1);
			printf("\n ------------------------- \n");
		
			printf("\n -------- Carta B -------- \n");
			printf("Codigo da carta B: %s\n", Codigo_carta_B);
			printf("País: %s\n", Nome_pais_B);
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
			printf("Soma dos Atributos: %.2f\n", soma2);
			printf("\n ------------------------- \n");
			
			printf("### VOCÊ PERDEU! ###\n");
	    }else{
			printf("O resultado 1 é: %d, e o Resultado 2 é: %d\n", resultado1, resultado2);
			printf("\n -------- Carta A -------- \n");
			printf("Codigo da carta A: %s\n", Codigo_carta_A);
			printf("País: %s\n", Nome_pais_A);
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
			printf("Soma dos Atributos: %.2f\n", soma1);
			printf("\n ------------------------- \n");
		
			printf("\n -------- Carta B -------- \n");
			printf("Codigo da carta B: %s\n", Codigo_carta_B);
			printf("País: %s\n", Nome_pais_B);
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
			printf("Soma dos Atributos: %.2f\n", soma2);
			printf("\n ------------------------- \n");
			
			printf("### EMPATE! ### \n");
	    }

	break;
		
	case 3:
	    printf("Saindo do Jogo...\n");
		break;
		
	default:
		printf("Opção Inválida!\n");
		break;
		
	}
	
	return 0;
}