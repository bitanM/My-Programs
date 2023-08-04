//Write a program to insert few integer values in an ArrayList,add 5 to each element and print.
import java.util.*;

class AL{
	public static void main(String[] args) {
		ArrayList <Integer> num_list = new ArrayList <Integer> ();
		System.out.println("Enter the number of elements: ");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		System.out.println("Enter the elements: ");
		for(int i=0; i<n; i++){
			num_list.add(sc.nextInt());
		}
		System.out.println("All elements with an increment of 5: ");
		for(Integer i:num_list){
			System.out.println(i+5+" ");
		}
		System.out.println();
	}
}