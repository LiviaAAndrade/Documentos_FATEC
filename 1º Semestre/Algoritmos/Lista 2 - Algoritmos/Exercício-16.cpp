#include <stdio.h>
#include <locale.h>

main(){

    char op;
    float raio;

	setlocale(LC_ALL,"Portuguese");
	printf("1 - para calcular a �rea da circunfer�ncia");
	printf("\n\n2 - para calcular o per�metro da circunfer�ncia");
	printf("\n\nInsira o indicador da opera��o: ");
	scanf(" %c",&op);
	printf("Insira o raio da circunfer�ncia: ");
	scanf("%f",&raio);
	
	switch(op){
		
		case '1':
			printf("\nA �rea da circunfer�ncia �: %.2f",(raio*raio)*3.14159);
			break;
			
		case '2':
			printf("\nO per�metro da circunfer�ncia �: %.2f",2*3.14159*raio);
			break;
			
	    default:
	    	printf("o indicador de opera��o foi mal fornecido");
	    	break;
	
	}


}


