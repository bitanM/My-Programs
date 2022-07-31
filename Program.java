/*import java.util.Scanner;
class Computer{
	public int screen_size;
	public int price;
	public String OS;
	void Machine(){
		System.out.println("The Screen Size is: "+screen_size);
		System.out.println("The OS is: "+OS);
		System.out.println("The Price is: "+price);
	}
}
class Laptop extends Computer{
		int warranty = 2;
		void Show(){
				super.Machine();
				System.out.println("Warranty: "+warranty);
	}
}
class Mobile extends Computer{
		int warranty = 3;
		void Show2(){
			super.Machine();
			System.out.println("Warranty: "+warranty);
	}
}
public class Program{
	public static void main(String[]args){
		Laptop vostro = new Laptop();
		vostro.screen_size = 14;
		vostro.price = 25000;
		vostro.OS = "Linux";
		
		Mobile narzo = new Mobile();
		narzo.screen_size = 8;
		narzo.price = 11000;
		narzo.OS = "Android";
		
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Select between Laptop and Mobile: ");
		String select = sc.nextLine();
		if(select.equals("Laptop")|| select.equals("laptop"))	
				vostro.Show();
		else if(select.equals("Mobile")|| select.equals("mobile"))
				narzo.Show2();
	}
}*/
	
