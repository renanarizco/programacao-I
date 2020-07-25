#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#define MAX_LEN 128


//Variaveis Globais:
int escolhe_menu;

//Cria o logo da empresa
void imagem()
{
void print_image(FILE *fptr);
    char *filename = "logo.txt";
    FILE *fptr = NULL;
 
    if((fptr = fopen(filename,"r")) == NULL)
    {
        fprintf(stderr,"error opening %s\n",filename);
    }
 
    char read_string[MAX_LEN];
 
    while(fgets(read_string,sizeof(read_string),fptr) != NULL)
        printf("%s",read_string);
 
    fclose(fptr);
}

//Cria o Cabeçalho
void cabecalho()
{
 //Comando usado para mudar o padrão de acentuação
	setlocale(LC_ALL, "Portuguese");
	imagem();
	printf("                                             © todos os direitos reservados 2018\n");
	printf("________________________________________________________________________________\n");

}

//Função Cadastro de Cliente
void cadastro_cliente()
{
	setlocale(LC_ALL, "Portuguese");
	cabecalho();
	printf("Teste Cadastro");
	printf("\n");
}

//Função Pesquisa Cadastro
void pesquisa_cadastro()
{
	setlocale(LC_ALL, "Portuguese");
	cabecalho();
	printf("Teste Pesquisa");
	printf("\n");
}

//Função Altera Cadastro
void alterar_cadastro()
{
	setlocale(LC_ALL, "Portuguese");
	cabecalho();
	printf("Teste Altera Cadastro");
	printf("\n");
}

//Função Exclui Cadastro
void excluir_cadastro()
{
	setlocale(LC_ALL, "Portuguese");
	cabecalho();
	printf("Teste Exclui Cadastro");
	printf("\n");
}

//Função Sair do Sistema
void sair_sistema()
{
	system("cls");
	cabecalho();
	printf("Obrigado por usar nosso sistema!\nPressione enter para sair\n");
	system("exit");

}

//Função Menu Principal
void menu_principal()
{
	printf("\n");
	printf("\n");
	printf("\n");
	printf(" __________________________ \n");
	printf("|                          |\n");
	printf("|      MENU PRINCIPAL      |\n");
	printf("|                          |\n");
	printf("| (1) Cadastro de Clientes |\n");
	printf("| (2) Pesquisa de Clientes |\n");
	printf("| (3) Alterar Cadastro     |\n");
	printf("| (4) Excuir Cadastro      |\n");
	printf("| (5) Sair                 |\n");
	printf("|__________________________|\n");
	printf(">");
	scanf("%i", &escolhe_menu);
    
    //Comando Escolhe opção
 	switch (escolhe_menu)
	{
 	  case 1:
 		system("cls");
 		cadastro_cliente();
 	   break;
 	  case 2:
 		system("cls");	
 		pesquisa_cadastro();
 	   break;
 	  case 3:
 		system("cls");			
 		alterar_cadastro();
 	   break;
 	  case 4:
 		system("cls");		
 		excluir_cadastro();
 	   break;
 	  case 5:
 		system("cls");	
 		sair_sistema();
 	   break;
	}

}



//Corpo do sistema
int main()
{
	system ("color 0A");
	cabecalho();
	menu_principal();
}
