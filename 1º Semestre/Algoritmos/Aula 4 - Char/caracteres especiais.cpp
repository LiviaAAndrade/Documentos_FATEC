#include <stdio.h>
#include <locale.h>

main(){
	printf("Acentua��o com erro!\n\n");
	setlocale(LC_ALL,"Portuguese");//portuguese n�o � necess�rio
	printf("Acentua��o funcionou!\n\n");
	
	float a=5.75;
	scanf("%f",&a);
	printf("\n%f\n\n",a);
	
	
}
