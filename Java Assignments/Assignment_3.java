//Question 1. Write a java program to create a class calculator to do addition, subtraction, and multiplication of N numbers inputted by the user.
/*import java.util.Scanner;
class Calculator{
	int arr[];
	int n;
	Calculator(){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of elements: ");
		n = sc.nextInt();	
		arr = new int[n];
		System.out.println("Enter the elements: ");
		for(int i=0; i<n; i++){
			arr[i] = sc.nextInt();
		}
	}
	public int add(){
		int sum = 0;
		for(int x:this.arr){
			sum += x;
		}
		return sum;
	}
	public int sub(){
		int diff = arr[0];
		for(int i=1; i<n; i++){
			diff = diff-this.arr[i];
		}
		return diff;
	}
	public int mul(){
		int pdt = 1;
		for(int x:this.arr){
			pdt *= x;
		}
		return pdt;
	}
}
class Assignment_3{
	public static void main (String[]ar){
		Calculator calc = new Calculator();
		System.out.println("The Sum is: "+calc.add());
		System.out.println("The Difference is: "+calc.sub());
		System.out.println("The Product is: "+calc.mul());
	}
}
*/
//Question 3. 
interface specialArithmetic{
	public abstract void all_devisor(int n);
}
class Arithmetic implements specialArithmetic{
		public static int div = 0;
		public void all_devisor(int n){
			for(int i=1; i<=n; i++){
				if(n%i==0){
					div = i;
				}
				else{
					continue;
				}
				System.out.print(" "+div+" ");
			}			
		}
}
class Assignment_3{
	public static void main (String[]ar){
		Arithmetic arth = new Arithmetic();
		arth.all_devisor(21);
	}
}


