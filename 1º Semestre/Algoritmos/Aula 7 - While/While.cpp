#include <stdio.h>
#include <locale.h>
main(){
	
	int c=1,n;
	setlocale(LC_ALL,"");
	printf("Quantidade de repeti��es: ");
	scanf("%i",&n);	
	while(c<=n){
		printf("%i Parab�ns\n",c);
		c++;// c+=1 c=c+1
	}	
}
