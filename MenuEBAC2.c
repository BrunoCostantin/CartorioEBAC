#include <stdio.h> //biblioteca de comuniucal��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o

int main()
{
	int opcao=0; //Defiinindo a vari�veis 
	setlocale(LC_ALL, "Portuguese");
	printf("### Cart�rio da EBAC ###\n\n");
	printf("Escolha a op��es desejada no menu: \n");
	printf("\t1 - Registrar nomes.\n");
	printf("\t2 - Consultar nomes.\n");
	printf("\t3 - Deletar nomes.\n\n");
	printf("Op��o: \n\n");//Fim do menu
	
	printf("Esse Softare foi criado pelo Bruno Costantin em exerc�cio do curso da EBAC - TI do zero ao pro.");
}
