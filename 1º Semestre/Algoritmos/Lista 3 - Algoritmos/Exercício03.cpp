#include <stdio.h>
#include <locale.h>
main(){
	
	int n=1,sp=0,qp=0;
	setlocale(LC_ALL,"Portuguese");
	while(n!=0){
		
		printf("Insira a m�dia: ");
		scanf("%i",&n);	
		if(n%2==0 && n!=0){
			sp+=n;
			qp++;
		}
  	}
  	printf("M�dia dos pares: %.1f\n",(float)sp/qp);
}
	

