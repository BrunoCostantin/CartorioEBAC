#include <stdio.h> //biblioteca de comuniucalção com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
//printf("Esse Softare foi criado pelo Bruno Costantin em exercício do curso da EBAC - TI do zero ao pro."); Escreva isso no final do exercício

int main()
{
	int opcao=0; //Definindo as variáveis 
	int laco=1;
	
	for(laco=1; laco=1;){
		
		system("cls");
		
		setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem
		
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
			printf("Você escolheu registrar nomes. \n");
			printf("Escreva o nome do aluno que deseja registrar: \n");
			system("pause");
			break;
			
			case 2:
			printf("Você escolheu consultar nomes. \n");
			printf("Escreva o nome do aluno que deseja consultar: \n");
			system("pause");
			break;
			
			case 3:
			printf("Você escolheu deletar nomes. \n");
			printf("Escreva o nome do aluno que deseja deletar: \n");
			system("pause");
			break;
			
			default:
			printf("Essa opção não está disponível!\n"); // Fim da seleção
			system("pause");			
			break;
				
		}
	
	}
	
}
