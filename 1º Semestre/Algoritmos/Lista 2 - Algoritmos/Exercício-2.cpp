#include <stdio.h>
#include <locale.h>

main(){
	
	int n;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o n�mero: ");
	scanf("%i",&n);
	
	
	
	if(n%10==0){
	        printf("\nDivis�vel por 10");}
	else if(n%5==0){
	        printf("\nDivis�vel por 5");}
	else if(n%2==0){
	        printf("\nDivis�vel por 2");}
	else{
			printf("\nN�o � divis�vel por nenhum deles.");     
	}
		}   
