#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	
	float preco,codpag;


	setlocale(LC_ALL,"Portuguese");
	printf("Insira o pre�o da etiqueta: ");
	scanf("%f",&preco);
	printf("Insira o c�digo de pagamento (1,2,3,4): ");
	scanf("%f",&codpag);
	
	if(codpag==1){
		printf("\n\nPre�o a ser pago: %.2f: \n\n",preco*0.90);
	}
		
	else if(codpag==2){
		printf("\n\nPre�o a ser pago: %.2f: \n\n",preco*0.95);
	}
		
	else if(codpag==3){
		printf("\n\nPre�o a ser pago: %.2f: \n\n",preco);
	}
		
	else if(codpag==4){
		printf("\n\nPre�o a ser pago: %.2f: \n\n",preco*1.10);
	}
	
	
	
	
	
}

