#include <stdio.h>
#include <locale.h>

main(){

	int n1,n2;

	setlocale(LC_ALL,"Portuguese");
	printf("Insira o primeiro n�mero: ");
	scanf("%i",&n1);
	printf("\nInsira o segundo n�mero: ");
	scanf("%i",&n2);
	
	if(n1==n2){
		printf("\nN�meros iguais");
	}
	else if(n1<n2){
		printf("\nN�meros diferentes: %i %i",n1,n2);
	}
	else
		printf("\nN�meros diferentes: %i %i",n2,n1);
		


}


