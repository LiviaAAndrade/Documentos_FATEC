#include <stdio.h>
#include <locale.h>

main(){
	
	float sb,vp,res;
	
	
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o sal�rio bruto: ");
	scanf("%f",&sb);
	printf("Digite o valor da presta��o: ");
	scanf("%f",&vp);
	
	res=30*sb/100;

	
	if(vp>=res){
		printf("\nO empr�stimo n�o pode ser concedido");
		}
	else
	    printf("\nO empr�stimo pode ser concedido");	}


