#include <stdio.h>
#include <locale.h>
main(){
	
	int n=1, tot=0, c=0;
	setlocale(LC_ALL,"");
	while(n>0){
		printf("N�mero: ");
		scanf("%i",&n);
		tot=tot+n; // tot+=n
		c++;
	}
	printf("\nTot.: %i\n",tot);
	printf("Quantidade de repeti��es: %i\n",c);
}
