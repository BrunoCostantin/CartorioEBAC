#include <stdio.h> //biblioteca de comuniucal��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
//printf("Esse Softare foi criado pelo Bruno Costantin em exerc�cio do curso da EBAC - TI do zero ao pro."); Escreva isso no final do exerc�cio

int main()
{
	int opcao=0; //Definindo as vari�veis 
	int laco=1;
	
	for(laco=1; laco=1;){
		
		system("cls");
		
		setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem
		
		printf("### Cart�rio da EBAC ###\n\n");//Inicio do Menu
		printf("Escolha a op��es desejada no menu: \n");
		printf("\t1 - Registrar nomes.\n");
		printf("\t2 - Consultar nomes.\n");
		printf("\t3 - Deletar nomes.\n\n");
		printf("Op��o: ");//Fim do menu
		
		scanf("%d", &opcao); //Armazenando a escolha do usu�rio 
		
		system("cls");
	
		if(opcao==1)
		{ //inicio da sele��o
			printf("Voc� escolheu registrar nomes. \n");
			printf("Escreva o nome do aluno que deseja registrar: \n");
			system("pause");
		}
		if(opcao==2)
		{
			printf("Voc� escolheu consultar nomes. \n");
			printf("Escreva o nome do aluno que deseja consultar: \n");
			system("pause");
		}
		if(opcao==3)
		{
			printf("Voc� escolheu deletar nomes. \n");
			printf("Escreva o nome do aluno que deseja deletar: \n");
			system("pause");
		}
		if(opcao>=4 || opcao<=0)
		{
			printf("Essa op��o n�o est� dispon�vel!"); // Fim da sele��o
			system("pause");
		}	
	}
	
}
