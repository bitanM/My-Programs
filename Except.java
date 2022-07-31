/*class Except{
	public static void main (String[]args){
		try{
			int i = 11/2;
			int arr[] = new int[4];
			arr[4] = 2;
		}
		catch(ArithmeticException | ArrayIndexOutOfBoundsException e){
			System.err.println("Error");
		}
		finally{
			System.out.println("Hello");
		}
	
	}
}
*/
/*
class Except{
	static void DemoProc(){
		try{
			throw new NullPointerException("demo");
		} catch(NullPointerException e){
			System.out.println("Caught inside Demoproc");
			throw e;
		}
	}
	public static void main (String[]ar){
		try{
			DemoProc();
		} catch(NullPointerException e){
			System.out.println("Recaught : "+e);
		}
	}
}
*/

/*class Except{
	static void throwOne(){
		try{
			throw new Exception("Error in Illegal Access");
		} catch(Exception e){
			System.out.print("error!");
			throw e;
		}
	}
	public static void main (String[]ar){
		try{
			throwOne();
		} catch(Exception e){
			System.out.println(e);
		}
	}
}	
*/
/*class MyException extends Exception{
	private int detail;
	
	MyException(int a){
		detail = a;
	}
		public String tostring(){
			return "MyException["+detail+"]";
		}
}
class Except{
		static void compute(int a) throws MyException{
			System.out.println("Called compute("+a+")");
		if(a>2000)
			throw new MyException(a);
		System.out.println("Normal Exit");
		if(a%2==0)
			throw new MyException(a);
		System.out.println("Normal Exit");
		}
		
		public static void main (String[]ar){
			try{
				//compute(2300);
				compute(20);
				compute(1987);
			}
			catch(MyException e){
				System.out.println("Caught "+e);
			}
		}
	
}
*/
/*
// Implementing throw.
class Except{
	static void demoproc(){
		try{
			throw new NullPointerException("demo");
		}
		catch(NullPointerException e){
			System.out.println("Caught inside demoproc");
			throw e;
		}
	}
	public static void main (String[]ar){
		try{
			demoproc();
		}
		catch(NullPointerException e){
			System.out.println("Recaught"+e);
		}
	}
}
*/
/*
// Implementing throws.
class Except{
	static void throwOne() throws Exception{
		System.out.println("Inside throwOne");
		throw new Exception("surprise");
	}
	public static void main(String[]ar){
		try{
			throwOne();
		}
		catch(Exception e){
			System.out.println("Caught "+e);
		}
	}
	
}
*/
// Creating own Exception
import java.util.*;
class JavaExcept extends Exception{
	int feature;
	JavaExcept(){
		this.feature = feature;
	}
}
class NoExcept{
	Scanner sc = new Scanner(System.in);
	int age = sc.nextInt();
	NoExcept() throws JavaExcept{
			if(age<18){
				throw new JavaExcept();
			}
			else{
				System.out.println("Enter your code: ");
			}
	}
}
class Except{
	public static void main (String[]ar){
		System.out.println("Enter the age: ");
		try{
			NoExcept ne = new NoExcept();
		}
		catch(JavaExcept e){
			System.out.println("Error: "+e);
		}
	}
}
			
		
		
	
