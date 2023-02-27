#include <stdio.h> //biblioteca de comuniucalção com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> // biblioteca responsável por cuidar das string
//printf("Esse Softare foi criado pelo Bruno Costantin em exercício do curso da EBAC - TI do zero ao pro."); Escreva isso no final do exercício

int registro() // criação da função
{
	char arquivo [40];
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	
	setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem, sempre que tiver assentos
	
	printf("Você escolheu registrar. \n");
	printf("Digite o CPF que gostaria de cadastrar: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); //responsável por copiar os valores das strings
	
	FILE *file; // criar arquivo
	file = fopen(arquivo, "w"); // "w" cria o arquivo
	fprintf(file,cpf); //salva o valor da variável
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // "a" é de atualização dentro do arquivo
	fprintf(file,","); // colocar vírgula
	fclose(file);
	
	printf("Digite o NOME que gostaria de cadastrar: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o SOBRENOME que gostaria de cadastrar: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o CARGO que gostaria de cadastrar: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
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
	printf("Você escolheu deletar nomes. \n");
	printf("Escreva o nome do aluno que deseja deletar: \n");
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
		printf("\t3 - Deletar nomes.\n\n");
		printf("Opção: ");//Fim do menu
		
		scanf("%d", &opcao); //Armazenando a escolha do usuário 
		
		system("cls");
		
		switch(opcao)//inicio da seleção
		{
			case 1:
			registro(); //chamada da funcção
			break;
			
			case 2:
			consulta();
			break;
			
			case 3:
			deletar();
			break;
			
			default:
			printf("Essa opção não está disponível!\n"); // Fim da seleção
			system("pause");			
			break;
				
		}
	
	}
	
}
