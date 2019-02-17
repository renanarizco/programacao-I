#include <stdio.h>

int main () {

  int l , c, med = 0 ;
  int matriz[5][5];
  
    
    for (l = 0; l < 5; l++){
    	
    	for (c = 0; c < 4; c++){
    		
    		printf("Digite o valor %i x %i: \n",l + 1,c);
    		scanf("%i",&matriz[l][c]);
    		
    	}
    }
    
    for (l = 0; l < 5; l++){
    	med = 0;
    	for (c = 0; c < 4; c++){
    		
    		printf ("Nota %i: %i ",c + 1,matriz[l][c]);
    		med += matriz[l][c];
    		
    	}
    	printf ("Media: %i \n",med/4);
    	
    	
    }
    
    
    



}
