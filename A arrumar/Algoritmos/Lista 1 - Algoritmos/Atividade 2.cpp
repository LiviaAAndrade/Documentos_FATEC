#include <stdio.h>
#include <stdlib.h>
main(){
	int a,b,c,d,e;
	printf("Digite o valor do 1� produto: ");
	scanf("%i",&a);
	printf("Digite o valor do 2� produto: ");
	scanf("%i",&b);
	printf("Digite o valor do 3� produto: ");
	scanf("%i",&c);
	d=(a+b+c);
	e=(a+b+c)/5;
	printf("\nValor total da compra: %i\n\n",d);
	printf("\nValor de cada prestacao: %i\n\n",e);
	
}

