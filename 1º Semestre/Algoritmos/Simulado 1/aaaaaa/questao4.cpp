#include <stdio.h>
#include <locale.h>

main(){

	float sf,tv,comissao,inss;

	setlocale(LC_ALL,"Portuguese");
	printf("Insira o sal�rio fixo do vendedor: ");
	scanf("%f",&sf);
	printf("Total de vendas: ");
	scanf("%f",&tv);
	
	comissao=tv*0.15;
	inss=(sf+comissao)*0.11;
	
	printf("\n\nComiss�o: %.2f",comissao);
	printf("\nINSS: %.2f",inss);
	printf("\nSal�rio do vendedor: %.2f",sf+comissao-inss);

}


