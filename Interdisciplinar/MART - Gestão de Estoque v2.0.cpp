#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define MAX_LEN 128

struct cadastro
{
	char nome[20];
	char marca[20];
	int quantidade;
	int valor;
	char fabricante[20];
	int cod;
	char existente;
};
typedef struct cadastro cad;

int Size = 1;
cad* C;

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

void cabecalho()
{
	system("cls");
	imagem();
	printf("                                             © todos os direitos reservados 2018\n");
	printf("________________________________________________________________________________\n");

}

void Incluir()
{
	char l = 's';
	while(l != 'n')
	{
		C = (cad*)realloc(C, (Size + 1) * sizeof(cad));
		fflush(stdin);

		cabecalho();
        C[Size].existente = 1;
		C[Size].cod = Size;

		printf("\nDigite o nome do produto: ");
		scanf("%s", &C[Size].nome);


        printf("Digite a marca do produto: ");
        scanf("%s", &C[Size].marca);


        printf("Digite a quantidade do produto: ");
        scanf("%i", &C[Size].quantidade);


        printf("Digite o valor do produto: ");
        scanf("%i", &C[Size].valor);


		printf("Digite o fabricante: ");
        scanf("%s", &C[Size].fabricante);

		printf("Código do produto: %i", C[Size].cod);

		fflush(stdin);
        printf(" \n");
        printf("\nDeseja cadastrar outro produto? (s/n) ");
        scanf("%c",&l);
        system("cls");
		fflush(stdin);
		Size++;
	}
}

void Exibir()
{
	int i;
	char l = 'n', U;
	while(l != 's')
	{
            int cd;
            fflush(stdin);
            cabecalho();
           
            for(i = 1; i < Size; i++)
            {
                if(C[i].existente != 0)
                {
                	printf("--------------------------------------------------------------------------------\n");
                	printf("\n");
		   			printf("Nome: %s                               \n",C[i].nome );
	        		printf("Marca: %s                              \n",C[i].marca );
	        		printf("Quantidade: %i                         \n",C[i].quantidade );
	        		printf("Valor: %i                              \n",C[i].valor );
	        		printf("Fabricante: %s                         \n",C[i].fabricante);
               	    printf("Código: %i                             \n",C[i].cod);
        			printf("\n");
        			printf("--------------------------------------------------------------------------------\n");
                }

           }

                printf("\n");
                printf("Insira um código para buscar: ");
                scanf("%i", &cd);
                if (cd > 0 && cd == C[cd].cod && C[cd].existente != 0)
                {
                	cabecalho();
                	printf("\n");
                	printf("--------------------------------------------------------------------------------\n");
                	printf("\n");
                	printf("Nome: %s",C[cd].nome );
                	printf("\nMarca: %s",C[cd].marca );
                	printf("\nQuantidade: %i",C[cd].quantidade );
                	printf("\nValor: %i",C[cd].valor );
                	printf("\nFabricante: %s",C[cd].fabricante);
                	printf("\nCódigo: %i\n", cd);
                	printf("\n");
                	printf("--------------------------------------------------------------------------------\n");

                 	fflush(stdin);
                 	printf("\n");
                 	printf("Deseja voltar ao Menu Principal? (s/n) ");
                 	scanf("%c",&l);
                 	system("cls");
                }
                else
                {
                    fflush(stdin);
                    system("cls");
					cabecalho();
                    printf("Cadastro não encontrado. \n");
                    printf("Deseja voltar ao Menu Principal? (s/n) ");
                    scanf("%c", &l);
                }

	}
}

void Excluir()
{
	int i;
	int cd, encontrou = 0;
	char l = 'n', U;
	while(l != 's')
	{
		fflush(stdin);
		system("cls");
		cabecalho();
		printf("Informe um código para pesquisar: ");
		scanf("%i", &cd);
		fflush(stdin);
		for(i = 1; i < Size; i++)
	   	{
			if (cd > 0 && cd == C[i].cod)
			{
				encontrou = 1;
				printf("\n");
				printf("--------------------------------------------------------------------------------\n");
	   			printf("Nome: %s \n",C[i].nome );
        		printf("Marca: %s \n",C[i].marca );
        		printf("Quantidade: %i \n",C[i].quantidade );
        		printf("Valor: R$%i \n",C[i].valor );
        		printf("Fabricante: %s \n",C[i].fabricante);
        		printf("Código do Produto: %i \n", cd);
        		printf("\n");
        		printf("--------------------------------------------------------------------------------\n");
				 fflush(stdin);
				 printf("Você deseja excluir esse cadastro permanentemente? (s/n) ");
				 scanf("%c", &U);
				 if(U == 's')
				 {
					C[i].existente = 0;
				 }
				break;
			}
		}
		if (encontrou == 0)
		{
			system("cls");
			cabecalho();
			printf("Cadastro não encontrado.");
		}

		l = 's';
	}
}

void Alterar()
{
    int i, nQuantidade, nValor, U;
    char nNome[20], nMarca[20], nFabricante[20], ver;
	int cd, encontrou = 0;
	char l = 'n';
	
	cabecalho();
	
	while(l != 's')
	{
		fflush(stdin);
		printf("Informe um código para pesquisar: ");
		scanf("%i", &cd);
		system("cls");
		fflush(stdin);
		for(i  = 1; i < Size; i++)
	   	{
			if (cd > 0 && cd == C[i].cod)
			{
				encontrou = 1;
				cabecalho();
				printf("Cadastro N°: %i \n", cd);
	   			printf("Nome Produto: %s \n",C[i].nome );
        		printf("Marca: %s \n",C[i].marca );
        		printf("Quantidade: %i \n",C[i].quantidade );
        		printf("Valor: R$%i \n",C[i].valor );
        		printf("Fabricante: %s \n",C[i].fabricante);
				printf(" __________________________ \n");
				printf("|                          |\n");
				printf("| (1) Alterar Nome         |\n");
				printf("| (2) Alterar Marca        |\n");
				printf("| (3) Alterar Quantidade   |\n");
				printf("| (4) Alterar Valor        |\n");
				printf("| (5) Alterar Fabricanter  |\n");
				printf("|__________________________|\n");
                printf("Escolha o campo que pretende alterar\n");
				printf(">");
        		
				 fflush(stdin);
				 scanf("%i", &U);
				 system("cls");
				 cabecalho();
                 if(U == 1)
                 {
                    printf("Insira o novo nome do produto: ");
                    scanf("%s", &nNome);
                    strcpy(C[i].nome, nNome);
                    fflush(stdin);
                    printf("\n");
                    printf("Deseja alterar outro campo? (s/n)");
                    scanf("%c", &ver);
                    if(ver == 's')
                    {
                        l = 'n';
                        system("cls");
                        cabecalho();
                    }
                    else
                    {
                       l = 's';
                       system("cls");
                        cabecalho();
                    }
                 }

                if(U == 2)
                 {
                    printf("Insira a nova marca do produto: ");
                    scanf("%s", &nMarca);
                    strcpy(C[i].marca, nMarca);
                    fflush(stdin);
                    printf("Deseja alterar outro campo? (s/n)");
                    scanf("%c", &ver);
                    if(ver == 's')
                    {
                        l = 'n';
                        system("cls");
                        cabecalho();
                    }
                    else
                    {
                       l = 's';
                       system("cls");
                       cabecalho();
                    }
                 }

                 if(U == 3)
                 {
                    printf("Insira a nova quantidade: ");
                    scanf("%i", &nQuantidade);
                    C[i].quantidade = nQuantidade;
                    fflush(stdin);
                    printf("Deseja alterar outro campo? (s/n)");
                    scanf("%c", &ver);
                    if(ver == 's')
                    {
                        l = 'n';
                        system("cls");
                        cabecalho();
                    }
                    else
                    {
                       l = 's';
                       system("cls");
                       cabecalho();
                    }
                 }

                  if(U == 4)
                 {
                    printf("Insira o novo valor: ");
                    scanf("%i", &nValor);
                    C[i].valor = nValor;
                    fflush(stdin);
                    printf("Deseja alterar outro campo? (s/n)");
                    scanf("%c", &ver);
                    if(ver == 's')
                    {
                        l = 'n';
                        system("cls");
                        cabecalho();
                    }
                    else
                    {
                       l = 's';
                    system("cls");
                    cabecalho();
					}
                 }
                 if(U == 5)
                 {
                    printf("Insira o novo fabricante: ");
                    scanf("%s", &nFabricante);
                    strcpy(C[i].fabricante, nFabricante);
                    fflush(stdin);
                    printf("Deseja alterar outro campo? (s/n) ");
                    scanf("%c", &ver);
                    if(ver == 's')
                    {
                        l = 'n';
                        system("cls");
                        cabecalho();
                    }
                    else
                    {
                    	system("cls");
                       l = 's';
                       cabecalho();
                    }
                 }


                }

			}
			if (encontrou == 0)
            {
            	system("cls");
            	cabecalho();
                printf("Cadastro não encontrado");
                l = 's';
            }



	   	}
    }


int main()
{
	
	system("color 0A");
	
	setlocale(LC_ALL, "Portuguese");
	int menu;
	char Exit = 's';
	while(Exit != 'n')
	{
		system("cls");
		cabecalho();
		printf("\n");
		printf("\n");
		printf("\n");
		printf(" __________________________ \n");
		printf("|                          |\n");
		printf("|      MENU PRINCIPAL      |\n");
		printf("|                          |\n");
		printf("| (1) Cadastro de Produtos |\n");
		printf("| (2) Pesquisa de Produtos |\n");
		printf("| (3) Alterar Cadastro     |\n");
		printf("| (4) Excluir Cadastro     |\n");
		printf("| (5) Sair do Sistema      |\n");
		printf("|__________________________|\n");
		printf(">");
        scanf("%i", &menu);
        system("cls");


		switch (menu)
		{
			case 1:
				Incluir();
				break;

			case 2:
				Exibir();
				break;

			case 3:
			    Alterar();
				break;

			case 4:
				Excluir();
				break;

			case 5:
				system("cls");
				cabecalho();
				printf("O programa foi Finalizado.");
    			return 0;
			    break;


		}
	}





}
