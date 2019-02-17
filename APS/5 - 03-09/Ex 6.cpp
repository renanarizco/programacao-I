#include <stdio.h>

int main () {

int l,c,win, p ;
int matriz [5][5];


printf ("Digite o numero de jogos que os times jogaram \n");


for (l = 0; l < 5; l++){
    	
    
    		printf ("O time %i jogou quantos jogos ? \n",l + 1);
    		scanf ("%i",&matriz[l][1]);
    		
    		
    	
    	printf ("\n");
    }


printf ("Digite o numero de vitorias que os times obtiveram \n");


for (l = 0; l < 5; l++){
    	
    	
    		printf ("O time %i teve quantas vitorias ? \n",l + 1);
    		scanf ("%i",&matriz[l][2]);
    		
    		
    	
    	printf ("\n");
    }


printf ("Digite o numero de empates que os times obtiveram \n");

for (l = 0; l < 5; l++){
    	
    	
    		printf ("O time %i teve quantos empates ? \n",l + 1);
    		scanf ("%i",&matriz[l][3]);
    		
    		
    	
    	printf ("\n");
    }


printf ("Digite o saldo de gols que os times obtiveram \n");

for (l = 0; l < 5; l++){
    	
    	
    		printf ("O time %i teve quantos gols ? \n",l + 1);
    		scanf ("%i",&matriz[l][4]);
    		
    		
    	
    	printf ("\n");
    }







for (l = 0; l < 5; l++){
    	
    matriz[l][5] = ((matriz[l][2] * 3) + (matriz[l][3])) ;
    
    
    	printf ("\n");
    }

 p = 0;

 for (l = 0 ; l < 5 ; l++) {
 	
 	if (p < matriz[l][5]) {
 		
 		p = matriz[l][5];
 		win = l;
 		
 	}
 	
 }

 matriz[4][5] = matriz[4][2] * 3 + matriz[4][3] ;


      printf ("Times  : Jogos : Vitorias : empates : gols : pontos \n");

 for (l = 0; l < 5; l++){
 	
 	       
    	
            printf ("Time:%i: : %i : %i : %i : %i : %i \n", l + 1, matriz[l][1],matriz[l][2],matriz[l][3],matriz[l][4],matriz[l][5]);
    
            
    
    		printf("\n");
    	
    }
    
    
    
    

    printf ("Campeao: Time: %i ", win + 1);

}
