#include <stdio.h>
#include <locale.h>

main(){
	
	char a;
	float qnt,vt;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("C�digo do pacote a/b/c: ");
	scanf(" %c",&a);
	printf("Quantidade de convidados: ");
	scanf("%f",&qnt);
	
	switch(a){
		case 'a':
		case 'A':
			
			if(qnt<=100){
						
					
			printf("\n\nValor a ser pago: %.2f",qnt*100);
			printf("\n\nParab�ns!!!");
			break;
			
			}
			
			else if(qnt>100 && qnt<=200){
								
					
			printf("\n\nValor a ser pago: %.2f",qnt*95);
			printf("\n\nParab�ns!!!");
			break;
							
			}
		
			
			else if(qnt>200){
								
					
			printf("\n\nValor a ser pago: %.2f",qnt*92);
			printf("\n\nParab�ns\n\n!!!");
			break;
				
			}
			
		case 'b':
		case 'B':
			
			if(qnt<=100){
						
					
			printf("\n\nValor a ser pago: %.2f",qnt*90);
			printf("\n\nParab�ns!!!");
			break;
			
			}
			
			else if(qnt>100 && qnt<=200){
								
					
			printf("\n\nValor a ser pago: %.2f",qnt*85);
			printf("\n\nParab�ns!!!");
			break;
							
			}
		
			
			else if(qnt>200){
								
					
			printf("\n\nValor a ser pago: %.2f",qnt*80);
			printf("\n\nParab�ns\n\n!!!");
			break;
				
			}	
		
			case 'c':
	     	case 'C':
			
			if(qnt<=100){
						
					
			printf("\n\nValor a ser pago: %.2f",qnt*75);
			printf("\n\nParab�ns!!!");
			break;
			
			}
			
			else if(qnt>100 && qnt<=200){
								
					
			printf("\n\nValor a ser pago: %.2f",qnt*72);
			printf("\n\nParab�ns!!!");
			break;
							
			}
		
			
			else if(qnt>200){
								
					
			printf("\n\nValor a ser pago: %.2f",qnt*69);
			printf("\n\nParab�ns\n\n!!!");
			break;
				
			}
}
}
