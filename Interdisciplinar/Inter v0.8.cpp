#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#define MAX_LEN 128

//Variaveis Globais:
int escolhe_menu;
int i, verificacad;
int contacad = 0;
char excluicad, editcad;

//Cria o logo da empresa:
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
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	imagem();
	printf("                                             © todos os direitos reservados 2018\n");
	printf("________________________________________________________________________________\n");

}

struct estrutura{
	char nome[50];
	char razao[50];
	char endereco[50];
	char telefone[50];
	char cnpj[50];
};

typedef estrutura cadastro;

int qtd = 0;
cadastro *cad;

//Função Cadastro de Cliente
void cadastro_cliente()
{	
	verificacad = 1;
	char novamente;
		
	do
	{
		qtd++;
		cad = (cadastro*)realloc(cad,qtd*sizeof(cadastro));
		system("cls");
		cabecalho();
		
		fflush(stdin);
		printf("Informe a razão social: \n");
		scanf("%s", &cad[qtd-1].razao);
		
		fflush(stdin);
		printf("Informe o nome do proprietário: \n");
		scanf("%s", &cad[qtd-1].nome);
		
		fflush(stdin);
		printf("Informe o CNPJ: \n");
		scanf("%s", &cad[qtd-1].cnpj);
		
		fflush(stdin);
		printf("Informe o telefone da empresa: \n");
		scanf("%s", &cad[qtd-1].telefone);
		
		fflush(stdin);
		printf("Informe o endereço da empresa: \n");
		scanf("%s", &cad[qtd-1].endereco);
		
		contacad++;
		
		fflush(stdin);
		printf("\n\nDeseja realizar outro cadastro? (s/n): ");
		scanf("%c", &novamente);
		
    }while (novamente == 's');
    

}

//Função Pesquisa Cadastro
void pesquisa_cadastro()
{
	cabecalho();

	if (verificacad == 0)
		printf("Não há nenhum cadastro em registro\n");	
	else
	{

	int i = 0;
	for(i = 0; i < qtd; i++)
	{
		printf("Razão social: %s\n",cad[i].razao);
		printf("Nome do proprietario: %s\n",cad[i].nome);
		printf("CNPJ: %s\n",cad[i].cnpj);
		printf("Telefone: %s\n",cad[i].telefone);
		printf("Endereço: %s\n",cad[i].endereco);
		printf("________________________________________________________________________________\n");
	}
	}
	system("pause");
}

//Função Altera Cadastro
void alterar_cadastro()
{
	cabecalho();
	
	if (verificacad == 0)
		printf("Não há nenhum cadastro em registro\n");	
	else
	{
		
	int i = 0;
	for(i = 0; i < qtd; i++)
	{
		printf("Empresa %i: \n", i+1);
		printf("Razão social: %s\n",cad[i].razao);
		printf("Nome do proprietario: %s\n",cad[i].nome);
		printf("CNPJ: %s\n",cad[i].cnpj);
		printf("Telefone: %s\n",cad[i].telefone);
		printf("Endereço: %s\n",cad[i].endereco);
		printf("________________________________________________________________________________\n");
	}
		printf("Digite o numero da empresa para editar as informações:");
		scanf("%s", &editcad);
	fflush(stdin);
	}
	system("pause");
}

//Função Exclui Cadastro
void excluir_cadastro()
{
	cabecalho();
	
	if (verificacad == 0)
		printf("Não há nenhum cadastro em registro\n");	
	else
	{
		
	int i = 0;
	for(i = 0; i < qtd; i++)
	{
		printf("Empresa %i: \n", i+1);
		printf("Razão social: %s\n",cad[i].razao);
		printf("Nome do proprietario: %s\n",cad[i].nome);
		printf("CNPJ: %s\n",cad[i].cnpj);
		printf("Telefone: %s\n",cad[i].telefone);
		printf("Endereço: %s\n",cad[i].endereco);
		printf("________________________________________________________________________________\n");
	}
		printf("Digite o numero da empresa para excluir as informações:");
		scanf("%s", &excluicad);
		
	fflush(stdin);
	}
	system("pause");
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
	cad = (cadastro*)malloc(0);
	setlocale(LC_ALL, "Portuguese");
	do{
		
		cabecalho();
		menu_principal();	
	}
	while (escolhe_menu != 5);
	
	setlocale(LC_ALL, "Portuguese");
}
