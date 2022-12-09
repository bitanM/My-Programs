/*class Employee{
	int id;
	String name;
	public void printDetails(){
		System.out.println("My ID is: "+id);
		System.out.println("and my NAME is: "+name);
	}
}
public class Object{
	public static void main(String[]args){
		System.out.println("This is our custom class.");
		Employee harry = new Employee();
		Employee john = new Employee();
		
		harry.id = 12;
		harry.name = "Harry";
		john.id = 16;
		john.name = "Jonathan";
		
		harry.printDetails();
		john.printDetails();
		
	}
}*/
/*import java.util.Scanner;
class Employee{
	public int salary;
	String name;
	Scanner sc = new Scanner(System.in);
	
	public int setSalary(){
		System.out.print("Enter your salary: ");
		salary = sc.nextInt();
		
		return salary;
		}
	public void getSalary(){
		System.out.println("The Salary is "+salary);
		}
	public String getName(){
		System.out.print("Enter your name: ");
		name = sc.nextLine();
		return name;
		}
	public void setName(){
		System.out.println("Name: "+name);
		}
	}
	
class Object{
	public static void main(String[]args){
		Employee ep = new Employee();
		
		ep.getName();
		ep.setSalary();
		ep.setName();
		ep.getSalary();
	}
} */
/*import java.util.Scanner;
class square{
	int side,peri,area;
	Scanner sc = new Scanner(System.in);
	
	public int Side(){
		System.out.print("Enter the Side of the square: ");
		side = sc.nextInt();
		
		return side;
		}
	public int Perimeter(){
		peri = 4*side;
		
		return peri;
		}
	public int Area(){
		area = side*side;
		
		return area;
		}
}		
class Object{
	public static void main(String[]args){
		square sq = new square();
		
		sq.Side();
		System.out.println("The perimeter is: "+sq.Perimeter());
		System.out.println("The area is: "+sq.Area());
		
	}
}*/		
/*class myEmployee{
	private int id;
       private String name;
	public myEmployee(){
		id = 45;
		name = "Bitan";
		}
	}
	public int getID(){
		return id;
		}
	public class Object{
		public static void main(String[]bm){
			myEmployee me = new myEmployee();
			
			System.out.println(me.getID());
		//	System.out.println(me.name);
		}
	}*/
/*class Base{
	int x ;
	public int getx(){
		return x;
		}
	public void setx(){
		this.x = x;
		}
	}
	class Derived extends Base{
		int y;
		public int gety(){
			return y;
			}
		}		
*/
/*class Box{
	double width;
	double height;
	double depth;
	
	Box(Box ob){
		width = ob.width;
		height = ob.height;
		depth = ob.depth;
		}
	Box(double w, double h, double d){
		width = w;
		height = h;
		depth = d;
		}
	Box(){
		width = -1;
		height = -1;
		depth = -1;
		} 
	/*Box(double len){
		width = height = depth = len;
		} 
	double volume(){
		return width*height*depth;
		}
}
class BoxWeight extends Box{
	double weight;
	BoxWeight(double w, double h, double d, double m){
		width = w;
		height = h;
		depth = d;
		weight = m;
		}
}
class Object{
	public static void main(String[]bishal){
		BoxWeight box1 = new BoxWeight(10,20,15,34.3);
		BoxWeight box2 = new BoxWeight(2,3,4,0.076);
		double vol;
		
		vol = box1.volume();
		System.out.println("Weight of the box: "+box1.weight+"\nVolume of the box: "+vol);
		
		vol = box2.volume();
		System.out.println("Weight of the box: "+box2.weight+"\nVolume of the box: "+vol);
		}
}*/
/*class Box{
	double width;
	double height;
	double depth;
	
	Box(Box ob){
		width = ob.width;
		height = ob.height;
		depth = ob.depth;
		}
	Box(double w, double h, double d){
		width = w;
		height = h;
		depth = d;
		}
	Box(){
		width = -1;
		height = -1;
		depth = -1;
System.out.println("Default constructor called");
		} 
	/*Box(double len){
		width = height = depth = len;
		} 
	double volume(){
		return width*height*depth;
		}
}
class BoxWeight extends Box{
	double weight;
	BoxWeight(double w, double h, double d, double m){
		width = w;
		height = h;
		depth = d;
		weight = m;
		}
}
class Object{
	public static void main(String[]bishal){
		BoxWeight box1 = new BoxWeight(10,20,15,34.3);
		BoxWeight box2 = new BoxWeight(2,3,4,0.076);
		double vol;
		
		vol = box1.volume();
		System.out.println("Weight of the box: "+box1.weight+"\nVolume of the box: "+vol);
		
		vol = box2.volume();
		System.out.println("Weight of the box: "+box2.weight+"\nVolume of the box: "+vol);
		}
}*/
/*class Box{
	double width;
	double height;
	double depth;
	
	Box(){
		width = -1;
		height = -1;
		depth = -1;
System.out.println("Default constructor called");
		} 
	double volume(){
		return width*height*depth;
		}
}
class BoxWeight extends Box{
	double weight;
	BoxWeight(double w, double h, double d, double m){
		width = w;
		height = h;
		depth = d;
		weight = m;
		}
}
class Object{
	public static void main(String[]bishal){
		BoxWeight box1 = new BoxWeight(10,20,15,34.3);
		BoxWeight box2 = new BoxWeight(2,3,4,0.076);
		double vol;
		
		vol = box1.volume();
		System.out.println("Weight of the box: "+box1.weight+"\nVolume of the box: "+vol);
		
		vol = box2.volume();
		System.out.println("Weight of the box: "+box2.weight+"\nVolume of the box: "+vol);
		}
}*/
/*class Box{
	double width;
	double height;
	double depth;
	double volume(){
		return width*height*depth;
		}
}
class BoxWeight extends Box{
	double weight;
	BoxWeight(double w, double h, double d, double m){
		width = w;
		height = h;
		depth = d;
		weight = m;
		}
}
class Object{
	public static void main(String[]bishal){
		BoxWeight box1 = new BoxWeight(10,20,15,34.3);
		BoxWeight box2 = new BoxWeight(2,3,4,0.076);
		double vol;
		
		vol = box1.volume();
		System.out.println("Weight of the box: "+box1.weight+"\nVolume of the box "+vol);
		x: "
		vol = box2.volume();
		System.out.println("Weight of the box: "+box2.weight+"\nVolume of the box: "+vol);
		}
}*/
/*import java.util.Scanner;
class Object{
	public static void main(String[]args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the temperature in Ferhenheit: ");
			int f = sc.nextInt();
			
			double c = (double)(f-32)/1.8;
		System.out.println("The temperature in Celcius: "+c);
	}
}*/
/*class Object{
	public static void main(String[]args){
		byte b = 42;
		char c = 'a';
		short s = 1024;
		int i = 50000;
		float f = 5.67f;
		double d = .1234;
		double result = (f*b)+(i/c)-(d*s);
		System.out.println((f*b)+"+"+(i/c)+"-"+(d*s));
		System.out.print("result= "+result);
		
	}
}*/
/*import java.util.Scanner;
class Object{
	public static void main(String[]args){
		Scanner sc = new Scanner(System.in);
		
		String val = "InValid Month";
		int month  = 0;
		do{
			System.out.println("Enter a month: ");
			month = sc.nextInt();
			val = "Valid Month";
			//break;
		} while(month<0 || month>12);
		System.out.println(val);
	}
}*/
/*class Outer{
	int outer_x = 140;
	
	void show(){
		Inner in = new Inner();
		in.display();
	}

	class Inner{
		void display(){
			System.out.println(outer_x);
		}
	}
}
class Object{
	public static void main (String[]args){
		Outer ot = new Outer();
		ot.show();
	}
}*/
/*class Object{
	static void vaTest(int v[]){
		System.out.println("Number of args: "+v.length+" contents: ");
		for(int x:v){
			System.out.println(x+" ");
		}
		System.out.println();
	}
public static void main(String[]args){
	int n1[] = {10};
	int n2[] = {1,2,3};
	int n3[] = { };
	
	vaTest(n1);
	vaTest(n2);
	vaTest(n3);
}
} */
/*class Matt{
	static void matt(int g){
		System.out.println(g);
	}
	static void matt(int l,int m){
		System.out.println(l+" "+m);
	}
}
class Object{
	public static void main (String[]arhs){
			Matt.matt(50);
			Matt.matt(60,20);
		}
}*/
class Object{
	static void intel(int ...ai){
		int ml[] ;
		for(int z: ai)
			 ml =  new int [z + 4];
		for(int w: ml){
			System.out.println(w);
		}
		System.out.println();
	}
public static void main(String[]args){
	intel(12);
}
}
		
		
		
		
		
		  
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

	
	
