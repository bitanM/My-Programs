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
  }  
}
