#include <stdio.h>
#include <locale.h>

main(){
	
	float sf,tv,comissao,INSS,salario;
	
	
	setlocale(LC_ALL,"Portuguese");
	printf("Insira o sal�rio fixo: ");
	scanf("%f",&sf);
	printf("Insita o total de vendas no m�s: ");
	scanf("%f",&tv);
	
	
	comissao=(tv*0.15);
	printf("\n\nComiss�o: %.2f\n\n",comissao);
	INSS=(sf+comissao)*0.11;
	printf("\n\nINSS: %.2f\n\n",INSS);
	salario=sf+comissao-INSS;
	printf("\n\nSal�rio: %.2f\n\n",salario);
	
	
	
}
