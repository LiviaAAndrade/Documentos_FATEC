#include <stdio.h>
#include <locale.h>

main(){
	
	int f,c=0;	
	setlocale(LC_ALL,"");
	
	while(c<=100){
		
		printf("Convers�o: %.f� fahrenheit\n",(c*1.8)+32);
		c=c+5;
		}
}
