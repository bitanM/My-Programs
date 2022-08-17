// Question 1. Write a java program to calculate the sum of two integer numbers.
/*class Assignment_1{
	public static void main(String[]ar){
		int a = 10;
		int b = 24;
		System.out.println("The sum of " + a + " and " + b + " is " + (a+b) );
	}
}
*/
// Question 2. Write a java program to convert temperature from Celsius to Fahrenheit.
/*class Assignment_1{
	public static void main (String[]ar){
		int celc = 14 ;
		double far ;
		far = ((9*celc)/5)+32;
		System.out.println("The temperature in Celcius : " + celc + " and in Fahrhenheit : " + far);
	}
}
*/
// Question 3. Write a java program to find area and perimeter of a rectangle.
/*class Assignment_1{
	public static void main (String[]args){
		int len = 24, brd = 5;
		int peri;
		int area;
		peri = 2*(len+brd);
		area = (len*brd);
		System.out.println("The Length and the Breadth of the Rectangle are " + len + " and " + brd + " respectively.");
		System.out.println("So the perimeter is : "+peri);
		System.out.println("And the area is : "+area);
	}
}
*/
// Question 4. Grade points.
/*class Assignment_1{
	public static void main (String[]ar){
		int marks = 98;
		String grade = "q";
		if(marks <= 100 && marks >= 95)
			grade = "O";
		else if(marks <= 94 && marks >= 85)
			grade = "A";
		else if(marks <= 84 && marks >= 75)
			grade = "A+";
		else if(marks <= 74 && marks >= 60)
			grade = "B";
		else if(marks <= 59 && marks >= 50)
			grade = "c";
		else if(marks <= 49 && marks >= 40)
			grade = "D";
		else if(marks < 40)
			grade = "F";
		System.out.println("Your Marks: "+marks);
		System.out.println("Your Grade: "+grade);
	}
}*/
// Question 5. Write a java program to find the largest among four numbers using ternary operator.
/*class Assignment_1{
	public static void main (String[]ar){
		int m=3, n=4, o=1, p=2;
		int max = m;
		//max = (max < m ? m : (max < n ? n : (max < o ? o : p)));
		(max>m && max>n
		System.out.println(max);
	}
}*/
/*class Assignment_1{
	public static void main (String[]ar){
		int a = 4, b = 1, c = 2, d = 3;
		int max = 0;
		max = (a>b ? (a>c ? (a>d ? a : d) : (c>d ? c : d)) : (b>c ? (b>d ? b : d) : (c>d ? c : d)));
		System.out.println("The maximum among these 4 numbers is : "+max);    
	}
}*/

