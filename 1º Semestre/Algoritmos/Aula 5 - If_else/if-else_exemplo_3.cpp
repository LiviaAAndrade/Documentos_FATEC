#include <stdio.h>
#include <locale.h>

main (){
	int n;
	setlocale(LC_ALL,"Portuguese");
	printf("N�mero: ");
	scanf("%i",&n);
	if(n>0)
		printf("\nPositivo\n");
	else if(n==0)
	    printf("\nZero\n");
	else 
	    printf("\nNegativo\n");	 
		
		
	}



