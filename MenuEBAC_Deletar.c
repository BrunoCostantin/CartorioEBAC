#include <stdio.h> //biblioteca de comuniucal��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> // biblioteca respons�vel por cuidar das string
//printf("Esse Softare foi criado pelo Bruno Costantin em exerc�cio do curso da EBAC - TI do zero ao pro."); Escreva isso no final do exerc�cio

int registro() // cria��o da fun��o, respons�vel por cadastrar os usu�rios
{
	//inicio da cria��o das vari�veis/string
	char arquivo [40];
	char cpf [40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	//final da cria��o das vari�veis/string
	
	setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem, sempre que tiver assentos
	
	printf("Voc� escolheu registrar. \n");
	printf("Digite o CPF que gostaria de cadastrar: "); //Coletando a infirma��o do usu�rio
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); //respons�vel por copiar os valores das strings
	
	FILE *file; // FILE, abrir o carquivo file
	file = fopen(arquivo, "w"); // "w" cria o arquivo
	fprintf(file,cpf); //salva o valor da vari�vel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // "a" � de atualiza��o dentro do arquivo
	fprintf(file,","); //Est� colocando uma v�rgula para para melhorar a leitura
	fclose(file);
	
	printf("Digite o NOME que gostaria de cadastrar: "); //Coletando a infirma��o do usu�rio
	scanf("%s",nome);
	
	file = fopen(arquivo, "a"); // "a" � de atualiza��o dentro do arquivo
	fprintf(file,nome); //salva o valor da vari�vel
	fclose(file);// fecha o arquivo
	
	file = fopen(arquivo, "a");// "a" � de atualiza��o dentro do arquivo
	fprintf(file,","); //Est� colocando uma v�rgula para para melhorar a leitura
	fclose(file);// fecha o arquivo
	
	printf("Digite o SOBRENOME que gostaria de cadastrar: "); //Coletando a infirma��o do usu�rio
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a"); //"a" � de atualiza��o dentro do arquivo
	fprintf(file,sobrenome); //salva o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //"a" � de atualiza��o dentro do arquivo
	fprintf(file,","); //Est� colocando uma v�rgula para para melhorar a leitura
	fclose(file); //fecha o arquivo
	
	printf("Digite o CARGO que gostaria de cadastrar: "); //Coletando a infirma��o do usu�rio
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a"); //"a" � de atualiza��o dentro do arquivo
	fprintf(file,cargo); //salva o valor da vari�vel
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a"); //"a" � de atualiza��o dentro do arquivo
	fprintf(file,","); //Est� colocando uma v�rgula para para melhorar a leitura
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
		printf("Usu�rio n�o localizado.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
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
		printf("Usu�rio n�o se encontra no nosso sistema.\n");
	}
	
	system("pause");
}

int main()
{
	int opcao=0; //Definindo as vari�veis 
	int laco=1;
	
	for(laco=1; laco=1;){
		
		system("cls");
		
		setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem, sempre que tiver assentos
		
		printf("### Cart�rio da EBAC ###\n\n");//Inicio do Menu
		printf("Escolha a op��es desejada no menu: \n");
		printf("\t1 - Registrar nomes.\n");
		printf("\t2 - Consultar nomes.\n");
		printf("\t3 - Deletar nomes.\n");
		printf("\t4 - Sair do menu.\n\n");
		printf("Op��o: ");//Fim do menu
		
		scanf("%d", &opcao); //Armazenando a escolha do usu�rio 
		
		system("cls");
		
		switch(opcao)//inicio da sele��o do menu
		{
			case 1:
			registro(); //chamada da func��o registro
			break;
			
			case 2:
			consulta(); //chamada da func��o consulta
			break;
			
			case 3:
			deletar(); //chamada da func��o consultdeletar
			break;
			
			case 4:
			printf("\n\nOgrigado por utilizar o cart�rio EBAC.\n\n");
			return 0;
			break;
			
			default:
			printf("Essa op��o n�o est� dispon�vel!\n");
			system("pause");			
			break;
			// Fim da sele��o
		}
	
	}
	
}
