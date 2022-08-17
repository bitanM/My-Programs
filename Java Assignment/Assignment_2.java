//Question 1. Write a java program to find the total sum of all array elements.
/*class Assignment_2{
	public static void main (String[]ar){
		int arr [] = new int [5];
		for( int i=0; i<arr.length; i++){
			arr[i] = i;
		}
		int sum = 0;
		for(int x:arr){
			sum += x;
		}
		System.out.println(sum);
	}
} 
*/
//Question 2. Write a java program to search a specific element in an array.
/*class Assignment_2{
	public static void main (String[]ar){
		int arr[] = { 24,36,28,79,61,85 };
		int n = 85;
		boolean check = true;
		for(int x:arr){
			if(x==n){
				check = true;
				break;
			}
			else{
				check = false;
			}
		}
		if(check == true){
			System.out.println("YES! it's in the array.");
		}
		else{
			System.out.println("NO! it's not in the array.");
		}
	}
}*/
//Question 3. Write a java program to print the maximum between right diagonal and left diagonal sum of a square matrix.
/*class Assignment_2{
	public static void main(String[]ar){
		int arr[][] = new int[3][3];
		arr[0][0] = 1;
		arr[0][1] = 4;
		arr[0][2] = 20;
		arr[1][0] = 12;
		arr[1][1] = 26;
		arr[1][2] = 34;
		arr[2][0] = 9;
		arr[2][1] = 16;
		arr[2][2] = 2;
		
		int lsum=0, rsum=0;
		
		for(int i=0; i<=2; i++){
			for(int j=0; j<=2; j++){
				if(i==j){
					lsum += arr[i][j];
				}
				if(i+j==2){
					rsum += arr[i][j];
				}
			}
		}
		System.out.println("Sum of left diagonal: "+lsum);
		System.out.println("Sum of right diagonal: "+rsum);
		
	}
}	
*/
//Question 4. 
/*import java.lang.Math;
class Assignment_2{
	public static void main (String[]ar){
		int arr[][] = new int [4][4];
		for(int i=1; i<=4; i++){
			for(int j=1; j<=i; j++){
				System.out.print((int)Math.pow(i, j)+ " ");
			}
			System.out.println();
		}
	}
}
*/
//Question 5. Write a java program to take two strings as input through console and concatenate them to print the final output. 
/*class Assignment_2{
	public static void main (String[]ar){
		String s1 = ar[0];
		String s2 = ar[1];
		System.out.println(s1.concat(s2));
	}
}
*/
//Question 6. Write a java program to create four functions to calculate addition, subtraction, multiplication and division of two numbers inputted through console and print the values through the display function.
/*class Assignment_2{
	public static int add(int a, int b){
		return a+b;
	}
	public static int sub(int a, int b){
		if(a>b)
			return a-b;
		else
			return b-a;
	}
	public static int mul(int a, int b){
		return a*b;
	}
	public static float div(int a, int b){
		if(a>b)
			return a/b;
		else
			return b/a;
	}
	public static void Display(int a,int b){
		System.out.println("The Sum is : "+add(a,b));
		System.out.println("The Difference is : "+sub(a,b));
		System.out.println("The Product is : "+mul(a,b));
		System.out.println("The Quotent is : "+div(a,b));
	}
	public static void main(String[]ar){
		int m = Integer.parseInt(ar[0]);
		int n = Integer.parseInt(ar[1]);
		add(m,n);
		sub(m,n);
		mul(m,n);
		div(m,n);
		Display(m,n);
	}
}
*/



















