#include <stdio.h>
#include <locale.h>

main (){
	float n1,n2;
	char op;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o 1� n�mero: ");
	scanf("%f",&n1);
	printf("\nOpera��o: ");
	scanf(" %c",&op);
	printf("\nDigite o 2� n�mero: ");
	scanf("%f",&n2);
	
	switch(op){
		case '+':
			printf("\nResultado: %.2f\n\n",n1+n2);
		break;
		case '-':
			printf("\nResultado: %.2f\n\n",n1-n2);
		break;
		case '*':
			printf("\nResultado: %.2f\n\n",n1*n2);
		break;
		case '/':
			printf("\nResultado: %.2f\n\n",n1/n2);
		break;
		default:
			printf("\nOpera��o inv�lida\n\n")
			
	}
	
}
