#include <stdio.h>
#include <locale.h>

main(){
 
    float peso;

	setlocale(LC_ALL,"Portuguese");
	printf("Insira o peso da pe�a: ");
	scanf("%f",&peso);
	
	if(peso>50){
		printf("\nSer� aproveitado %.1f kg da pe�a.",peso*0.85);
	}
	else if(peso<=50 && peso>20){
		printf("\nSer� aproveitado %.1f kg da pe�a.",peso*0.60);
	}
	else if(peso<=20 && peso>10){
		printf("\nSer� aproveitado %.1f kg da pe�a.",peso*0.30);
	}
	else if(peso<=10){
		printf("\nA pe�a n�o ser� aproveitada.");
	}

}


