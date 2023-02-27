#include <stdio.h> //biblioteca de comuniucalção com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região

int main()
{
	int opcao=0; //Defiinindo a variáveis 
	setlocale(LC_ALL, "Portuguese");
	printf("### Cartório da EBAC ###\n\n");
	printf("Escolha a opções desejada no menu: \n");
	printf("\t1 - Registrar nomes.\n");
	printf("\t2 - Consultar nomes.\n");
	printf("\t3 - Deletar nomes.\n\n");
	printf("Opção: \n\n");//Fim do menu
	
	printf("Esse Softare foi criado pelo Bruno Costantin em exercício do curso da EBAC - TI do zero ao pro.");
}
