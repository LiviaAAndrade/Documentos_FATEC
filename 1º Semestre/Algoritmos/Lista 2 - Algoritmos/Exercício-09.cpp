#include <stdio.h>
#include <locale.h>

main(){
   
    float vmp,vdm; //vmp = velocidade maxima permitida, vdm = velocidade do motorista

	setlocale(LC_ALL,"Portuguese");
	printf("Velocidade m�xima permitida na avenida: ");
	scanf("%f",&vmp);
	printf("\nVelocidade do motorista: ");
	scanf("%f",&vdm);
	
	if(vdm-vmp<=10){
		printf("\nA multa ser�: R$50,00\n\n");
	}
	else if(vdm-vmp==11 || vdm-vmp<=30){
		printf("\nA multa ser�: R$100,00\n\n");
	}
	else if(vdm-vmp>31){
		printf("\nA multa ser�: R$200,00\n\n");
	}

}


