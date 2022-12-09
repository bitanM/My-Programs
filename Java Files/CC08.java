/*import java.util.Scanner;
class CC08{
	public static void main (String[]args){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a number: ");
		int num = sc.nextInt();
		boolean flag = true;
		if(num>2 && (num%2==0))
			flag = false;
		else{
			for(int i = 3;i<=Math.sqrt(num);i = i+2){
				if(num%i == 0){
					flag = false;
					break;
				}
			}
		}
		if(flag)
			System.out.println(num+"is prime.");
		else 
			System.out.println(num+"is not prime.");
	}
}*/
/*class CC08{
	public static void main (String[]args){
		String s1 = new String();
		char chars[] = {'a','b','c','d','e','f','g','h','i','j','k'};
		String s2 = new String(chars);
		System.out.println("S2: "+s2);
		String s3 = new String(chars,3,4);
		System.out.println("S3: "+s3);
		String s4 = new String(s2);
		System.out.println("S4: "+s4);
		byte ascii[] = {65,66,67,68,69,70};
		String s5 = new String(ascii);
		System.out.println("S5: "+s5);
		String s6 = new String(ascii,2,3);
		System.out.println("S6: "+s6);
		System.out.println("Length of S1: "+s1.length());
		System.out.println("Length of S2: "+s2.length());
		String s7 = "qwerty9876";
		System.out.println("S7: "+s7);
		System.out.println("123456",length());
		String age = "9";
		String s8 = "He is "+age+"years old.";
		System.out.println("S8: "+s8);
		String s9 = "four: "+2+2;
		System.out.println("S9: "+s9);
		System.out.println(String.valueof(123.4567));
		System.out.println(String.valueof(123));
		System.out.println(String.valueof('a'));
	}
}*/
/*class StringDemo{
      public static void main(String[]args){
            String st1 = "First";
            String st2 = "Second";
            String st3 = st1;
            System.out.println("Length of st1: "+st1.length());
            System.out.println("char at 4: "+st1.charAt(4));
            if(st1.equals(st2))
				System.out.println("st1==st2");
			else
				System.out.println("st1!=st2");
        }
   }*/
/*class CC08{
		public static void main(String[]args){
           for (int i =0;i<args.length;i++)
				System.out.println("args["+i+"] "+args[i]);
     }
 }*/
/*class Box{
	 double width,height,depth;
	 Box(double w,double h,double d){
		 width = w;
		 height = h;
		 depth = d;
		}
	public String toString(){
		return "("+width+":"+height+":"+depth+")";
	}
}
public class  CC08{
	public static void main(String[]args){
		Box ob1 = new Box(10,20,30);
		Box ob2 = new Box(5.5,15.5,25.5);
	System.out.println("Box1: "+ob1.toString());
	System.out.println("Box2: "+ob2.toString());
	}
}*/
/*class Figure{
	int dim1, dim2;
	Figure(int a,int b){
		dim1 = a; dim2 = b;
	}
	double area(){
		System.out.println("Area for figure is undefined");
		return 0;
	}
}
class Rectangle extends Figure{
	Rectangle(int a,int b){
		super(a,b);
	}
	double area(){
		System.out.println("Inside area for Rectangle.");
		return dim1*dim2;
	}
}
class Triangle extends Figure{
	Triangle(int a,int b){
		super(a,b);
	}
	double area(){
		System.out.println("Inside area of triangle");
		return dim1*dim2;
	}
}
public class CC08{
	public static void main(String[]args){
		Figure f = new Figure(10,15);
		Rectangle r = new Rectangle(9,5);
		Triangle t = new Triangle(10,8);
		Figure figref;
		figref = f;
		System.out.println("Area is "+figref.area());
		figref = r;
		System.out.println("Area is "+figref.area());
		figref = t;
		System.out.println("Area is "+figref.area());
	}
}*/
/*class CC08{
	public static void main (String[]args){
		char ch;
		ch = "abc".charAt(1);
		System.out.println(ch);
		
		String s1 = "This is a demo.";
		int start = 10, end = 14;
		char buff[] = new char[end-start];
		s1.getChars(10,14,buff,0);
		System.out.println(buff);
		
		String s2 = "12345";
		byte b[] = new byte[s2.length()];
		b = s2.getBytes();
		for(int i = 0; i<b.length; i++)
			System.out.println(b[i]); 	
		
		char c[] = new char[s2.length()];
		c = s2.toCharArray();
		for(int i = 0; i<c.length; i++)
			System.out.println(c[i]);
	}
}*/
/*class Stack{
		int stck[] = new int [10];
		int tos;
		Stack(){
			tos = -1;
		}
		void push(int item){
			if(tos == 9)
				System.out.println("Stack is full.");
			else
				stck[++tos] = item;
			}
		int pop(){
			if(tos<0){
				System.out.println("Stack underflow");
				return 0;
			}
			else
				return stck[tos--];
			}
		}
class CC08{
	public static void main (String[]args){
		Stack mystack1 = new Stack();
		Stack mystack2 = new Stack();
		
		for(int i = 0; i<10; i++)
			mystack1.push(i);
		for(int i = 0; i<20; i++)
			mystack2.push(i);
			
		System.out.println("Stack 1: ");
		for(int i = 0; i<10; i++)
			System.out.println(mystack1.pop());
			
		System.out.println("Stack 2: ");
		for(int i = 0; i<20; i++)
			System.out.println(mystack2.pop());
		}
	}*/
/*class CC08{
	public static void main (String[]args){
		for(int i =1;i<20;i++){
			System.out.print( i+" ");
			if(i%2==0)
					continue;
			System.out.println("");
		}
	}
}*/

		
			
