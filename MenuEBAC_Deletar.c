#include <stdio.h> //biblioteca de comuniucalção com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> // biblioteca responsável por cuidar das string
//printf("Esse Softare foi criado pelo Bruno Costantin em exercício do curso da EBAC - TI do zero ao pro."); Escreva isso no final do exercício

int registro() // criação da função, responsável por cadastrar os usuários
{
	//inicio da criação das variáveis/string
	char arquivo [40];
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	//final da criação das variáveis/string
	
	setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem, sempre que tiver assentos
	
	printf("Você escolheu registrar. \n");
	printf("Digite o CPF que gostaria de cadastrar: "); //Coletando a infirmação do usuário
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); //responsável por copiar os valores das strings
	
	FILE *file; // FILE, abrir o carquivo file
	file = fopen(arquivo, "w"); // "w" cria o arquivo
	fprintf(file,cpf); //salva o valor da variável
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // "a" é de atualização dentro do arquivo
	fprintf(file,","); //Está colocando uma vírgula para para melhorar a leitura
	fclose(file);
	
	printf("Digite o NOME que gostaria de cadastrar: "); //Coletando a infirmação do usuário
	scanf("%s",nome);
	
	file = fopen(arquivo, "a"); // "a" é de atualização dentro do arquivo
	fprintf(file,nome); //salva o valor da variável
	fclose(file);// fecha o arquivo
	
	file = fopen(arquivo, "a");// "a" é de atualização dentro do arquivo
	fprintf(file,","); //Está colocando uma vírgula para para melhorar a leitura
	fclose(file);// fecha o arquivo
	
	printf("Digite o SOBRENOME que gostaria de cadastrar: "); //Coletando a infirmação do usuário
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a"); //"a" é de atualização dentro do arquivo
	fprintf(file,sobrenome); //salva o valor da variável
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //"a" é de atualização dentro do arquivo
	fprintf(file,","); //Está colocando uma vírgula para para melhorar a leitura
	fclose(file); //fecha o arquivo
	
	printf("Digite o CARGO que gostaria de cadastrar: "); //Coletando a infirmação do usuário
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a"); //"a" é de atualização dentro do arquivo
	fprintf(file,cargo); //salva o valor da variável
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //"a" é de atualização dentro do arquivo
	fprintf(file,","); //Está colocando uma vírgula para para melhorar a leitura
	fclose(file); //fecha o arquivo
	
	system("pause");
	
}

int consulta()
{
	char cpf[40];
	char conteudo[200];
	
	setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem, sempre que tiver assentos
	
	printf("Digite o CPF que gostaria de consultar: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r"); //"r" ler o arquivo
	
	if(file == NULL)
	{
		printf("Usuário não localizado.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}

int deletar()
{
	char cpf[40];
	
	setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem, sempre que tiver assentos
	
	printf("Digite o CPF que gostaria de DELETAR: "); 
	scanf("%s",cpf); 
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Usuário não se encontra no nosso sistema.\n");
	}
	
	system("pause");
}

int main()
{
	int opcao=0; //Definindo as variáveis 
	int laco=1;
	
	for(laco=1; laco=1;){
		
		system("cls");
		
		setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem, sempre que tiver assentos
		
		printf("### Cartório da EBAC ###\n\n");//Inicio do Menu
		printf("Escolha a opções desejada no menu: \n");
		printf("\t1 - Registrar nomes.\n");
		printf("\t2 - Consultar nomes.\n");
		printf("\t3 - Deletar nomes.\n");
		printf("\t4 - Sair do menu.\n\n");
		printf("Opção: ");//Fim do menu
		
		scanf("%d", &opcao); //Armazenando a escolha do usuário 
		
		system("cls");
		
		switch(opcao)//inicio da seleção do menu
		{
			case 1:
			registro(); //chamada da funcção registro
			break;
			
			case 2:
			consulta(); //chamada da funcção consulta
			break;
			
			case 3:
			deletar(); //chamada da funcção consultdeletar
			break;
			
			case 4:
			printf("\n\nOgrigado por utilizar o cartório EBAC.\n\n");
			return 0;
			break;
			
			default:
			printf("Essa opção não está disponível!\n");
			system("pause");			
			break;
			// Fim da seleção
		}
	
	}
	
}
