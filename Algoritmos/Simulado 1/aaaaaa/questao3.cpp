#include <stdio.h>
#include <locale.h>

main(){

	char pct;
	float conv,preco;

	setlocale(LC_ALL,"Portuguese");
	printf("Insira o pacote: ");
	scanf(" %c",&pct);
	printf("Quantidade de convidados: ");
	scanf("%f",&conv);
	
	switch(pct){
		
		case 'a':
		case 'A':
			
			if(conv<=100){
				printf("\nValor a ser pago: %.2f",conv*100);
				printf("\nParab�ns!!");
				break;
			}
			else if(conv>100 && conv<=200){
				printf("\nValor a ser pago: %.2f",conv*95);
				printf("\nParab�ns!!");
				break;
			}
			else if(conv>200){
				printf("\nValor a ser pago: %.2f",conv*92);
				printf("\nParab�ns!!");
				break;
			}
		
		case 'b':
		case 'B':
			
			if(conv<=100){
				printf("\nValor a ser pago: %.2f",conv*90);
				printf("\nParab�ns!!");
				break;
			}
			else if(conv>100 && conv<=200){
				printf("\nValor a ser pago: %.2f",conv*85);
				printf("\nParab�ns!!");
				break;
			}
			else if(conv>200){
				printf("\nValor a ser pago: %.2f",conv*80);
				printf("\nParab�ns!!");
				break;
			}
		
		case 'c':
		case 'C':
			
			if(conv<=100){
				printf("\nValor a ser pago: %.2f",conv*75);
				printf("\nParab�ns!!");
				break;
			}
			else if(conv>100 && conv<=200){
				printf("\nValor a ser pago: %.2f",conv*72);
				printf("\nParab�ns!!");
				break;
			}
			else if(conv>200){
				printf("\nValor a ser pago: %.2f",conv*69);
				printf("\nParab�ns!!");
				break;
			}
	}

}
