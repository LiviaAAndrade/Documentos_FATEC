#include <stdio.h>
#include <locale.h>

main(){

    char tipotemp;
    float temp,r;

	setlocale(LC_ALL,"Portuguese");
	printf("Insira o tipo de temperatura: ");
	scanf(" %c",&tipotemp);
	printf("Insira a temperatura: ");
	scanf("%f",&temp);
	
	
	switch(tipotemp){
		
		case 'c':
		case 'C':
			
			r=9.0/5*(temp+32);
			
			printf("A convers�o entre as temperaturas �: %.1f", r);
			break;
		
		case 'f':
		case 'F':
			
		
			r=(temp-32)/1.8;
			
			printf("A convers�o entre as temperaturas �: %.1f", r);
			break;
			
		default:
			printf("Temperatura inv�lida");
			break;
	
	}
}





