/* Matheus Henrique de Oliveira Querido */


	public class Exer24 {
	    public static void main(String[] args) {
	        int a = 1, b = 1;
	        do {
	        System.out.printf(""+a+",");
	        do{
	            System.out.printf(" "+b+" ");
	            b++;
	         }while(b<11);
	         b = 1;
	     a++;
	     System.out.println("");
	     }while(a<11);
    }
}