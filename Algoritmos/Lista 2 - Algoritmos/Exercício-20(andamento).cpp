#include <stdio.h>
#include <locale.h>


main(){
	
	float a,b,c;

	setlocale(LC_ALL,"Portuguese");
	printf("Insira o comprimento do lado A: ");
	scanf("%f",&a);
	printf("Insira o comprimento do lado B: ");
	scanf("%f",&b);
	printf("Insira o comprimento do lado C: ");
	scanf("%f",&c);
	
	if(a==b && b==c){
		printf("\nTri�ngulo equil�tero");
	}
	
	else if(a/=b && b==c){
		printf("\nTri�ngulo is�scele");
	}
	
	else
		printf("\nTri�ngulo escaleno");
	}




