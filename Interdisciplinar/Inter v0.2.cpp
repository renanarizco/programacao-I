#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#define MAX_LEN 128

//Variaveis Globais:
int escolhe_Menu;

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

//Função Chama Cabeçalho
void cabecalho()
{
 //Comando usado para mudar o padrão de acentuaçõa	
 setlocale(LC_ALL, "Portuguese");
 printf("                                                      © all rights reserved 2018\n");
 printf("________________________________________________________________________________\n");

}


//Função Cadastro de Cliente
void cadastro_cliente()
{
	setlocale(LC_ALL, "Portuguese");
	cabecalho();
	printf("Teste Cadastro");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

//Função Pesquisa Cadastro
void pesquisa_cadastro()
{
	setlocale(LC_ALL, "Portuguese");
	cabecalho();
	printf("Teste Pesquisa");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

//Função Altera Cadastro
void alterar_cadastro()
{
	setlocale(LC_ALL, "Portuguese");
	cabecalho();
	printf("Teste Altera Cadastro");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

//Função Exclui Cadastro
void excluir_cadastro()
{
	setlocale(LC_ALL, "Portuguese");
	cabecalho();
	printf("Teste Exclui Cadastro");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

//Função Sair do Sistema
void sair_sistema()
{
	system("cls");
	printf("Obrigado por usar nosso sistema!\nPressione enter para sair\n");
	system("exit");

}

//Função Menu Principal
void menuprincipal()
{
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf(" ________________________ \n");
	printf("|                        |\n");
	printf("|     MENU PRINCIPAL     |\n");
	printf("|                        |\n");
	printf("|1> Cadastro de Clientes |\n");
	printf("|2> Pesquisa de Clientes |\n");
	printf("|3> Alterar Cadastro     |\n");
	printf("|4> Excuir Cadastro      |\n");
	printf("|5> Sair                 |\n");
	printf("|________________________|\n");
	printf(">");
	scanf("%i", &escolhe_Menu);
    
    //Comando Escolhe opção
 	switch (escolhe_Menu)
	{
 	  case 1:
 	   system("cls");
 	   cabecalho();
 	   cadastro_cliente();
 	   break;
 	  case 2:
 	   system("cls");
 	   cabecalho();
 	   pesquisa_cadastro();
 	   break;
 	  case 3:
 	   system("cls");	
 	   cabecalho();	
 	   alterar_cadastro();
 	   break;
 	  case 4:
 	   system("cls");	
 	   cabecalho();
 	   excluir_cadastro();
 	   break;
 	  case 5:
 	   system("cls");	
 	   cabecalho();
 	   sair_sistema();
 	   break;
	}

}


 
 
 
//Corpo do sistema
int main()
{
	imagem();	
	cabecalho();
	menuprincipal();

} 
