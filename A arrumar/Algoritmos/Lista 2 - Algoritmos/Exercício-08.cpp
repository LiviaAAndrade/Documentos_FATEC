#include <stdio.h>
#include <locale.h>

main(){
	
	float pesot;
	int codplaneta;
	
	setlocale(LC_ALL,"Portuguese");
	printf("Digite seu peso no planeta Terra: ");
	scanf("%f",&pesot);
	printf("\n1 = Merc�rio\n2 = V�nus\n3 = Marte\n4 = J�piter\n5 = Saturno\n\n");
	printf("DIgite o c�digo do planeta: ");
	scanf("%i",&codplaneta);
	
	if(codplaneta==1){
		printf("\nSeu peso nesse planeta ser�: %.2f",pesot*0.37);
	}
	else if(codplaneta==2){
		printf("\nSeu peso nesse planeta ser�: %.2f",pesot*0.88);
	}
	else if(codplaneta==3){
		printf("\nSeu peso nesse planeta ser�: %.2f",pesot*0.38);
	}
	else if(codplaneta==4){
		printf("\nSeu peso nesse planeta ser�: %.2f",pesot*2.64);
	}
	else if(codplaneta==5){
		printf("\nSeu peso nesse planeta ser�: %.2f\n\n",pesot*1.15);
	}
	





}


