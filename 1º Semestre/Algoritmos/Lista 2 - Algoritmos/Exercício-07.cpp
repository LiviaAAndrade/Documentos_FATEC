#include <stdio.h>
#include <locale.h>

main(){

    char turno,a;
    
    setlocale(LC_ALL,"Portuguese");
    printf("Em qual turno voc� estuda? (M,V,N): ");
    scanf(" %c",&turno);
    
    
	switch(turno){
    	case 'm':
    	case 'M':
			printf("\n\nBom dia!\n\n",turno);
		break;	
	
	  
    	case 'v':
    	case 'V':
			printf("\n\nBoa tarde!\n\n",turno);
		break;	
	
	  
    	case 'n':
    	case 'N':
	     	printf("\n\nBoa noite!\n\n",turno);
		break;	
			
	    default:
	    printf("\nOpera��o inv�lida\n\n");
}
}
	

