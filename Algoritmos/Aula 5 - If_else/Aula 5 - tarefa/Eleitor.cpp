#include <stdio.h>
#include <locale.h>

main(){
	
	int id;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Idade: ");
	scanf("%i", &id);
	if(id<16)
		printf("\nN�o Eleitor\n\n");
	
	else if(id>=18 && id<65)
	       printf("\nEleitor Obrigat�rio\n\n");
	       
	else
	    printf("\nEleitor Facultativo\n\n");       
	       
	
}
