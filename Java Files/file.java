/*import java.util.Scanner;
public class file{
	public static void main(String[]args){
		System.out.println("Enter your marks: ");
		Scanner sc = new Scanner(System.in);
		System.out.print("Subject 1- ");
		  int s1 = sc.nextInt();
		System.out.print("Subject 2- ");
		  int s2 = sc.nextInt();
		System.out.print("Subject 3- ");
		  int s3 = sc.nextInt();
		System.out.print("Subject 4- ");
		  int s4 = sc.nextInt();
		System.out.print("Subject 5- ");
		  int s5 = sc.nextInt();

	float sum = s1+s2+s3+s4+s5;
	float div = sum/500;
	float per = div*100;

		System.out.println(per);

		String add = "Bitan";
		System.out.println(add);

		System.out.println(add.length());

		String add1 = add.toLowerCase();
		System.out.println(add1);

		String add2 = add.toUpperCase();
		System.out.println(add2);

		String add3 = add.trim();
		System.out.println(add3);

		String add4 = add.substring(2);
		System.out.println(add4);

		String add5 = add.substring(1,4);
		System.out.println(add5);

		String add6 = add.replace("tan","shal");
		System.out.println(add6);

		boolean add7 = add.startsWith("bi");
		System.out.println(add7);

		boolean add8 = add.endsWith("an");
		System.out.println(add8);

		char add9 = add.charAt(4);
		System.out.println(add9);

		int add10 = add.indexOf("an");
		System.out.println(add10);

		int add11 = add.lastIndexOf("an");
		System.out.println(add11);

		boolean add12 = add.equals("Bimal");
		System.out.println(add12);

		boolean add13 = add.equalsIgnoreCase("biTAN");
                System.out.println(add13);

	}
}*/
/*import java.util.Scanner;
public class file{
	public static void main(String[]argv){
		int a;
		int b;
		
		Scanner ip = new Scanner(System.in);
		
			a = ip.nextInt();
			b = ip.nextInt();
		System.out.println(a+b);
				}
		}*/
/*import java.util.Scanner;
public class file{
	public static void main (String[]argv){
	//	int i,n,q;
		int g=0;
		int h=0;
		Scanner sc = new Scanner(System.in);
		
	int i = sc.nextInt();
	int n = sc.nextInt();
	int q = sc.nextInt();
	
	int [] coin = new int [n];
	
	for(int j=0; j<n; j++){
		coin[j] = i;
	}
	
	for(int j=0; j<n; j++){
		int a = j;
		while(a>0)
		{
			if(coin[j]==1)
				coin[j]=2;
			if(coin[j]==2)
				coin[j]=1;
			a=a-1;
		}
	}
	
	for (int j=0; j<n; j++){
		if(q==1)
			g=g+1;
		if(q==2)
			h=h+1;
	}
	
	if(q==1)
		System.out.println(g);
	if(q==2)
		System.out.println(h);
		
}

}*/
/*import java.util.Scanner;
public class file{
	public static void main(String[]args){
			Scanner sc = new Scanner(System.in);
			
		System.out.println("Enter the size of array: ");
			int n = sc.nextInt();
			
			int [] arr = new int[n];
		System.out.println("Enter the array elements: ");
			for(int i=0;i<n;i++)
			{
				arr[i] = sc.nextInt();
			}
		int sum = arr[0];
		float avg = 0;
		int max = arr[0];
		int min = arr[0];
		
		for(int i=1;i<n;i++)
		{
			sum = sum + arr[i];
			
			if(arr[i]>max)
			{
				max = arr[i];
			}
			
			if(arr[i]<min)
			{
				min = arr[i];
			}
		}
		
		avg = sum/n;
		
		System.out.print("Sum: "+sum+" Average: "+avg+" Maximum: "+max+" Minimun: "+min);
	}
}*/
/*import java.util.Scanner;
class file{
	public static void main(String[]argv){
		Scanner sc = new Scanner(System.in);
		
		int marks = sc.nextInt();
		char grade;
		//char A,B,C,D,E,F;
		if(marks>90)
			grade = 'A';
		else if(marks>=70 && marks<90)
			grade = 'B';
		else if(marks>=50 && marks<70)
			grade = 'C';
		else if(marks>=40 && marks<50)
			 grade = 'D';
		else
			 grade = 'F';
	
	System.out.println("Grade: "+grade);
	
	}
}*/					
/*import java.util.Scanner;
class Season{
	public static void main(String[]args){
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter the month: ");
		int month = sc.nextInt();
		
		String arrMonth [] = { null,"January","February","March","April","May","June","July","August","September","October","November","December" };	
		String season = null;
		
		switch(month){
			case 1 : case 2 : season = "Winter";	break;
			case 3 : case 4 : season = "Spring";	break;
			case 5 : case 6 : season = "Summer";	break;
			case 7 : case 8 : season = "Monsoon";   break;
			case 9 : case 10 : season = "Autumn";   break;
			case 11 : case 12 : season = "Late-Autumn"; break; 
		}
		
		System.out.println(arrMonth[month]+" is in "+season);
	}
}*/
/*class Employee{
	int id;
	String name;
	public void printDetails(){
		System.out.println("My ID is: "+id);
		System.out.println("and my NAME is: "+name);
	}
}
public class file{
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
class Tintin{
	private int age,height,IQ;
	Tintin(){
		age = 24;
		height = 172;
	}
	void Display(){
		System.out.println("Age of Tintin is "+age);
		System.out.println("Height of Tintin is "+height);
	}
	Tintin(int IQ){
		this.IQ  = IQ;
	}
}
class Snowy extends Tintin{
	Snowy(int i){
		super(i);
		System.out.println("IQ of Tintin is "+i);
	}
	Snowy(){
		super();
	}
	void Show(){
		super.Display();
		System.out.println("Assistant of Tintin is Snowy.");
	}
}
class file{
	public static void main(String []args){
		Snowy sn1 = new Snowy();
		sn1.Show();
		Snowy sn2 = new Snowy(98);
		Tintin tn1 = new Tintin(92);
	}
}



























		
