//Question 1.
/*class Assignment_4{
	public static void main (String[]ar){
			int a = 12;
			int b = 0;
			try{
				System.out.println("a/b = "+a/b);
			}
			catch(ArithmeticException e){
				System.out.println("Error: "+e);
			}
			
			int arr[] = new int [4];
			try{
				arr[4]=24;
				System.out.println(arr[4]);
			}
			catch(ArrayIndexOutOfBoundsException f){
					System.out.println("Error: "+f);
			}
			int ary[] = null;
			try{
				ary[1]=18;
				System.out.println(ary[1]);
			}
			catch(NullPointerException g){
				System.out.println("Error: "+g);
			}
	}
}
*/
//Question 2.
/*class Assignment_4{
	public static void main (String[]ar){
		int arr1[] = new int [4];
		int arr2[] = null;
		try{
			arr1[4] = 78;
			System.out.println(arr1[4]);
			try{
				arr2[1] = 94;
			}
			catch(NullPointerException n){
				System.out.println("This is nested. Error: "+n);
			}
		}
		catch(ArrayIndexOutOfBoundsException a){
			System.out.println("This is original. Error: "+a);
		}
	}
}
*/
import java.util.Scanner;
class Except extends Exception {
  public Except() {
    super("Exception");
  }
}
public class Assignment_4 {
  public static void main(String[] args) throws Except {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter a number:");
    int num = sc.nextInt();
    if (num % 2 == 0 || num > 2000) throw new Except();
    else
		System.out.println("You have entered: "+num);
  }  
}
