/* Matheus Henrique de Oliveira Querido */


	import java.io.IOException;
	import java.util.Scanner;

	public class Exer31 {
	    public static void main(String[] args) throws IOException {
	        Scanner leia = new Scanner(System.in);
	        int res, a = 1;
	        do {
	            System.out.print("Escreva o valor: ");
	            res = leia.nextInt();
	            if(res<0){
	                System.out.println("Digite um valor positivo");
	            }
	        } while (res <= 0);
	    do{
	        System.out.print(" "+a);
	        a++;
	    }while(a<=res);


	      leia.close();
    }
}
