#include <stdio.h>
#include <locale.h>

main (){
	
	float c,f;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite a temperatura em �F: ");
	scanf("%f",&f);
	c=5.0/9*(f-32);
	printf("\nTemperatura em �C: .2f\n\n",c);
	if (c<=20){
		printf("Levar roupa de frio\n");
	} else {
		printf("N�o levar roupa de frio\n");
	}
	

}

