#include <stdio.h>
#include <locale.h>

main(){
	
	float n1,n2,media;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Insira a 1� Nota: ");
	scanf("%f",&n1);
	printf("Insira a 2� Nota: ");
	scanf("%f",&n2);
	
	media=(n1+n2)/2;
	
	if (media<4){
		printf("\n\nM�dia: %.1f\n",(n1+n2)/2);
		printf("\n\nAluno reprovado. \n\n");
	}
	else if (media>=4 && media<6){
		printf("\n\nM�dia: %.1f\n",(n1+n2)/2);
		printf("\n\nAluno em recupera��o. \n\n");
	}
	else if(media>=6){
		printf("\n\nM�dia: %.1f\n",(n1+n2)/2);
		printf("\n\nAluno aprovado. \n\n");
	}
	    
}
