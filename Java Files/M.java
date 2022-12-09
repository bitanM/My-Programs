import java.util.Scanner;
interface AdvancedArithmetic{
	public int divisor_sum();
}
class MyCalculator implements AdvancedArithmetic{
	Scanner sc = new Scanner(System.in);
	public int divisor_sum(){
		int sum = 0;
		int n = sc.nextInt();
		for(int j=1; j<=n; j++){
			if(n%j == 0){
				sum += j;
			}
		}
		//System.out.println(sum);
		return sum;
	}
}
class M{
	public static void main (String[]args){
		System.out.println("Enter a number : ");
		MyCalculator M = new MyCalculator();
		//System.out.print("The Sum of it's divisors :  ");
		System.out.println(M.divisor_sum());
	}
}
