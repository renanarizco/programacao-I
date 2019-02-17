#include <stdio.h>
#include <stdlib.h>
int main () 
{

  int linha , coluna, n;
  int matriz[4][4];
  
    
    for (linha = 0; linha < 4; linha++){
    	
    	for (coluna = 0; coluna < 4; coluna++){
    		
    		printf("Digite o valor %i x %i: \n",linha + 1,coluna);
    		scanf("%i",&matriz[linha][coluna]);
    		
    	}
    }
    
    
     for (linha = 0; linha < 4; linha++){
    	
    	for (coluna = 0; coluna < 4; coluna++){
    		
    		printf ("%i ",matriz[linha][coluna]);
    		
    	}
    		printf("\n");
    	
    }
    
    
    
    
    printf ("Digite um numero para se fazer a multiplicacao \n");
    scanf ("%i",&n);
    
    
    
    for (linha = 0; linha < 4; linha++){
    
    	for (coluna = 0; coluna < 4; coluna++){
    		
    		matriz[linha][coluna] *= n;
    		
    	}
    
    	
    }
    
    
    for (linha = 0; linha < 4; linha++){
    	
    	for (coluna = 0; coluna < 4; coluna++){
    		
    		printf ("%i ",matriz[linha][coluna]);
    		
    	}
    		printf("\n");
    	
    }
    



}
