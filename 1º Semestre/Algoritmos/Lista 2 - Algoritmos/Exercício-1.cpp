#include <stdio.h>
#include <locale.h>

main(){
	
	int v1,v2;
	
	setlocale(LC_ALL,"Portuguese");
	printf("1� valor: ");
	scanf("%i",&v1);
	printf("2� valor: ");
	scanf("%i",&v2);
	
	if(v1==v2){
		printf("Soma: %i",v1+v2);
}
	else if(v1!=v2){
	
		printf("Multiplica��o: %i",v1*v2);
}
		
	
}
